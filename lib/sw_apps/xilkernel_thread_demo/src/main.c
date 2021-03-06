/******************************************************************************
*
* Copyright (C) 2009 - 2014 Xilinx, Inc.  All rights reserved.
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* Use of the Software is limited solely to applications:
* (a) running on a Xilinx device, or
* (b) that interact with a Xilinx device through a bus or interconnect.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
* XILINX  BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
* WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF
* OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*
* Except as contained in this notice, the name of the Xilinx shall not be used
* in advertising or otherwise to promote the sale, use or other dealings in
* this Software without prior written authorization from Xilinx.
*
******************************************************************************/

/* Includes */
#include "xmk.h"
#include "os_config.h"
#include "sys/ksched.h"
#include "sys/init.h"
#include "config/config_param.h"
#include "stdio.h"
#include "xparameters.h"
#include "platform.h"
#include "platform_config.h"
#include <pthread.h>
#include <sys/types.h>

/* Declarations */
#define DATA_SIZE   400
#define N_THREADS   4

void* master_thread(void *);
void* partial_sum_worker(void *);

/* Data */
int input_data[DATA_SIZE];


/* Functions */
int main()
{
    int i;

    init_platform();
    
    /* Assign random data to the input array */
    
    for (i = 0; i < DATA_SIZE; i++)
        input_data[i] = i + 1;

    /* Initialize xilkernel */
    xilkernel_init();

    /* Create the master thread */
    xmk_add_static_thread(master_thread, 0);
    
    /* Start the kernel */
    xilkernel_start();
    
    /* Never reached */
    cleanup_platform();
    
    return 0;
}

/* The master thread */
void* master_thread(void *arg)
{
    pthread_t worker[N_THREADS];
    pthread_attr_t attr;

#if SCHED_TYPE == SCHED_PRIO
    struct sched_param spar;
#endif

    int i, ret, *result;
    int args[N_THREADS];
    int final_result;

    xil_printf("----------------------------------------------------------------------------\r\n");
    xil_printf("Xilkernel POSIX Threads Demo\r\n");
    xil_printf("----------------------------------------------------------------------------\r\n");
    xil_printf("This Xilkernel based application provides a simple example of how to create\r\n"
               "multiple POSIX threads and synchronize with them when they are complete. This\r\n"
               "example creates an initial master thread. The master thread creates 4 worker\r\n"
               "threads that go off to compute the sum of subsets of a randomly created array\r\n"
               "and return the partial sum as the result. The master thread accumulates the\r\n"
               "partial sums and prints the result. This example can serve as your starting\r\n"
               "point for your end application thread structure.\r\n");
    xil_printf("----------------------------------------------------------------------------\r\n\r\n");

    xil_printf("Xilkernel Demo: Master Thread Starting.\r\n");

    pthread_attr_init (&attr);              
                                            
#if SCHED_TYPE == SCHED_PRIO
    spar.sched_priority = PRIO_HIGHEST;
    pthread_attr_setschedparam(&attr, &spar);
#endif

    /* This is how we can join with a thread and reclaim its return value */
    pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE);

    for (i = 0; i < N_THREADS; i++) {
        args[i] = i;
        ret = pthread_create (&worker[i], &attr, (void*)partial_sum_worker, 
                              &args[i]);

        if (ret != 0) {
            xil_printf ("Xilkernel Demo: ERROR (%d) launching worker thread" \
                        "%d.\r\n", ret, i);  
            break;
        }
    }   

    if (ret) {
        xil_printf("Xilkernel Demo: Master Thread Terminating.\r\n");
        return (void*)-1;
    }

    final_result = 0;
    for (i = 0; i < N_THREADS; i++) {
        ret = pthread_join(worker[i], (void*)&result);
        final_result += (int)result;
        xil_printf("Xilkernel Demo: Collected result (%d) from worker: %d.\r\n", 
                   (int)result, i);
    }

    xil_printf("Xilkernel Demo: Result computed by worker threads = %d.\r\n", 
               final_result);

    xil_printf("Xilkernel Demo: Master Thread Completing.\r\n");
    return (void*)0;
}

/* The worker thread */
void* partial_sum_worker(void *arg)
{
    int i, psum;
    int my_id = *((int*)arg);
    int subarray_len = (DATA_SIZE / N_THREADS);
    int start = my_id * subarray_len;
    int end = start + subarray_len;

    psum = 0;
    for (i = start; i < end; i++) 
        psum += input_data[i];

    /* This is how return a value to the parent */
    pthread_exit((void*)psum);
    return NULL;
}
