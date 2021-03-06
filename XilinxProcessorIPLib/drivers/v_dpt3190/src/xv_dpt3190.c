// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.1
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
//
// ==============================================================

/***************************** Include Files *********************************/
#include "xv_dpt3190.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XV_dpt3190_CfgInitialize(XV_dpt3190 *InstancePtr, XV_dpt3190_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Ctrl_BaseAddress = ConfigPtr->Ctrl_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XV_dpt3190_ConfigChannelStatus(XV_dpt3190 *InstancePtr) {
    volatile u8 Byte[24];
    volatile u32 RegData[6];

    Byte[23] = InstancePtr->ChannelStatus.Chan_Stat_Byte23;

    Byte[22] = InstancePtr->ChannelStatus.Chan_Stat_Byte22;

    Byte[21] = InstancePtr->ChannelStatus.Chan_Stat_Byte18_to_Byte21.LocalSmpleAddrCode_3;

    Byte[20] = InstancePtr->ChannelStatus.Chan_Stat_Byte18_to_Byte21.LocalSmpleAddrCode_2;

    RegData[5] =  (Byte[23] << XV_DPT3190_24_BITS_SHIFT) |
                  (Byte[22] << XV_DPT3190_16_BITS_SHIFT) |
                  (Byte[21] << XV_DPT3190_8_BITS_SHIFT)  |
                   Byte[20];

    Byte[19] = InstancePtr->ChannelStatus.Chan_Stat_Byte18_to_Byte21.LocalSmpleAddrCode_1;

    Byte[18] = InstancePtr->ChannelStatus.Chan_Stat_Byte18_to_Byte21.LocalSmpleAddrCode_0;

    Byte[17] = InstancePtr->ChannelStatus.Chan_Stat_Byte14_to_Byte17.LocalSmpleAddrCode_3;

    Byte[16] = InstancePtr->ChannelStatus.Chan_Stat_Byte14_to_Byte17.LocalSmpleAddrCode_2;

    RegData[4] =  (Byte[19] << XV_DPT3190_24_BITS_SHIFT) |
                  (Byte[18] << XV_DPT3190_16_BITS_SHIFT) |
                  (Byte[17] << XV_DPT3190_8_BITS_SHIFT)  |
                   Byte[16];

    Byte[15] = InstancePtr->ChannelStatus.Chan_Stat_Byte14_to_Byte17.LocalSmpleAddrCode_1;

    Byte[14] = InstancePtr->ChannelStatus.Chan_Stat_Byte14_to_Byte17.LocalSmpleAddrCode_0;

    Byte[13] = InstancePtr->ChannelStatus.Chan_Stat_Byte10_to_Byte13.AphaNumerChanDestData_3;

    Byte[12] = InstancePtr->ChannelStatus.Chan_Stat_Byte10_to_Byte13.AphaNumerChanDestData_2;

    RegData[3] =  (Byte[15] << XV_DPT3190_24_BITS_SHIFT) |
                  (Byte[14] << XV_DPT3190_16_BITS_SHIFT) |
                  (Byte[13] << XV_DPT3190_8_BITS_SHIFT)  |
                   Byte[12];

    xil_printf ("RegData 3 = 0x%08x\n\r", RegData[3]);


    Byte[11] = InstancePtr->ChannelStatus.Chan_Stat_Byte10_to_Byte13.AphaNumerChanDestData_1;

    Byte[10] = InstancePtr->ChannelStatus.Chan_Stat_Byte10_to_Byte13.AphaNumerChanDestData_0;

    Byte[9] = InstancePtr->ChannelStatus.Chan_Stat_Byte6_to_Byte9.AphaNumerChanOriginData_3;

    Byte[8] = InstancePtr->ChannelStatus.Chan_Stat_Byte6_to_Byte9.AphaNumerChanOriginData_2;

    RegData[2] =  (Byte[11] << XV_DPT3190_24_BITS_SHIFT) |
                  (Byte[10] << XV_DPT3190_16_BITS_SHIFT) |
                  (Byte[9] << XV_DPT3190_8_BITS_SHIFT)  |
                   Byte[8];

    xil_printf ("RegData 2 = 0x%08x\n\r", RegData[2]);

    Byte[7] = InstancePtr->ChannelStatus.Chan_Stat_Byte6_to_Byte9.AphaNumerChanOriginData_1;

    Byte[6] = InstancePtr->ChannelStatus.Chan_Stat_Byte6_to_Byte9.AphaNumerChanOriginData_0;

    Byte[5] =  0x0;

    Byte[4] =  (((InstancePtr->ChannelStatus.Chan_Stat_Byte4.SamplingFreqScalFlag) & XV_DPT3190_1_BIT_DATA) << XV_DPT3190_7_BITS_SHIFT) |
               (((InstancePtr->ChannelStatus.Chan_Stat_Byte4.SamplingFreq) & XV_DPT3190_4_BITS_DATA) << XV_DPT3190_3_BITS_SHIFT) |
               ((InstancePtr->ChannelStatus.Chan_Stat_Byte4.DigitalAudioRefSignal) & XV_DPT3190_2_BITS_DATA);

    RegData[1] =  (Byte[7] << XV_DPT3190_24_BITS_SHIFT) |
                  (Byte[6] << XV_DPT3190_16_BITS_SHIFT) |
                  (Byte[5] << XV_DPT3190_8_BITS_SHIFT)  |
                   Byte[4];

    xil_printf ("RegData 1 = 0x%08x\n\r", RegData[1]);

    if (InstancePtr->ChannelStatus.Chan_Stat_Byte3.MultiChannelMode) {
        Byte[3] =  (((InstancePtr->ChannelStatus.Chan_Stat_Byte3.MultiChannelMode) & XV_DPT3190_1_BIT_DATA) << XV_DPT3190_7_BITS_SHIFT) |
                   (((InstancePtr->ChannelStatus.Chan_Stat_Byte3.DefMultiChannelMode) & XV_DPT3190_3_BITS_DATA) << XV_DPT3190_4_BITS_SHIFT) |
                   ((InstancePtr->ChannelStatus.Chan_Stat_Byte3.DefChannelNumber) & XV_DPT3190_4_BITS_DATA);
    } else {
        Byte[3] =  (((InstancePtr->ChannelStatus.Chan_Stat_Byte3.MultiChannelMode) & XV_DPT3190_1_BIT_DATA) << XV_DPT3190_7_BITS_SHIFT) |
                   ((InstancePtr->ChannelStatus.Chan_Stat_Byte3.ChannelNumber) & XV_DPT3190_7_BITS_DATA);
    }

    Byte[2] =  (((InstancePtr->ChannelStatus.Chan_Stat_Byte2.IndicationofAlignLevel) & XV_DPT3190_2_BITS_DATA) << XV_DPT3190_6_BITS_SHIFT) |
               (((InstancePtr->ChannelStatus.Chan_Stat_Byte2.AudioSmpleWordLength) & XV_DPT3190_3_BITS_DATA) << XV_DPT3190_3_BITS_SHIFT) |
               ((InstancePtr->ChannelStatus.Chan_Stat_Byte2.UseofAuxiliarySmpleBit) & XV_DPT3190_3_BITS_DATA);

    Byte[1] =  (((InstancePtr->ChannelStatus.Chan_Stat_Byte1.UserBitMngment) & XV_DPT3190_4_BITS_DATA) << XV_DPT3190_4_BITS_SHIFT) |
               ((InstancePtr->ChannelStatus.Chan_Stat_Byte1.ChannelMode) & XV_DPT3190_4_BITS_DATA);

    Byte[0] =  (((InstancePtr->ChannelStatus.Chan_Stat_Byte0.SamplingFreq) & XV_DPT3190_2_BITS_DATA) << XV_DPT3190_6_BITS_SHIFT) |
               (((InstancePtr->ChannelStatus.Chan_Stat_Byte0.LockIndication) & XV_DPT3190_1_BIT_DATA) << XV_DPT3190_5_BITS_SHIFT) |
               (((InstancePtr->ChannelStatus.Chan_Stat_Byte0.AudioSingalEmphasis) & XV_DPT3190_3_BITS_DATA) << XV_DPT3190_2_BITS_SHIFT) |
               (((InstancePtr->ChannelStatus.Chan_Stat_Byte0.LinearPCMIdentifaction) & XV_DPT3190_1_BIT_DATA) << XV_DPT3190_1_BIT_SHIFT) |
               ((InstancePtr->ChannelStatus.Chan_Stat_Byte0.UseofChanStatusBlock) & XV_DPT3190_1_BIT_DATA);

    RegData[0] =  (Byte[3] << XV_DPT3190_24_BITS_SHIFT) |
                  (Byte[2] << XV_DPT3190_16_BITS_SHIFT) |
                  (Byte[1] << XV_DPT3190_8_BITS_SHIFT)  |
                   Byte[0];
    xil_printf ("RegData 0 = 0x%08x\n\r", RegData[0]);

    XV_dpt3190_Set_HwReg_C31_0_V(InstancePtr, RegData[0]);
    XV_dpt3190_Set_HwReg_C63_32_V(InstancePtr, RegData[1]);
    XV_dpt3190_Set_HwReg_C95_64_V(InstancePtr, RegData[2]);
    XV_dpt3190_Set_HwReg_C127_96_V(InstancePtr, RegData[3]);
    XV_dpt3190_Set_HwReg_C159_128_V(InstancePtr, RegData[4]);
    XV_dpt3190_Set_HwReg_C191_160_V(InstancePtr, RegData[5]);
}

void XV_dpt3190_Start(XV_dpt3190 *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XV_dpt3190_ReadReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_AP_CTRL) & 0x80;
    XV_dpt3190_WriteReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_AP_CTRL, Data | 0x01);
}

u32 XV_dpt3190_IsDone(XV_dpt3190 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XV_dpt3190_ReadReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XV_dpt3190_IsIdle(XV_dpt3190 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XV_dpt3190_ReadReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XV_dpt3190_IsReady(XV_dpt3190 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XV_dpt3190_ReadReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XV_dpt3190_EnableAutoRestart(XV_dpt3190 *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XV_dpt3190_WriteReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_AP_CTRL, 0x80);
}

void XV_dpt3190_DisableAutoRestart(XV_dpt3190 *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XV_dpt3190_WriteReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_AP_CTRL, 0);
}

void XV_dpt3190_Set_HwReg_num_samples_V(XV_dpt3190 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XV_dpt3190_WriteReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_HWREG_NUM_SAMPLES_V_DATA, Data);
}

u32 XV_dpt3190_Get_HwReg_num_samples_V(XV_dpt3190 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XV_dpt3190_ReadReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_HWREG_NUM_SAMPLES_V_DATA);
    return Data;
}

void XV_dpt3190_Set_HwReg_audio_channels_V(XV_dpt3190 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XV_dpt3190_WriteReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_HWREG_AUDIO_CHANNELS_V_DATA, Data);
}

u32 XV_dpt3190_Get_HwReg_audio_channels_V(XV_dpt3190 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XV_dpt3190_ReadReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_HWREG_AUDIO_CHANNELS_V_DATA);
    return Data;
}

u32 XV_dpt3190_Get_HwReg_pkt_type_V(XV_dpt3190 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XV_dpt3190_ReadReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_HWREG_PKT_TYPE_V_DATA);
    return Data;
}

u32 XV_dpt3190_Get_HwReg_pkt_type_V_vld(XV_dpt3190 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XV_dpt3190_ReadReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_HWREG_PKT_TYPE_V_CTRL);
    return Data & 0x1;
}

u32 XV_dpt3190_Get_HwReg_ch_no_V(XV_dpt3190 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XV_dpt3190_ReadReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_HWREG_CH_NO_V_DATA);
    return Data;
}

u32 XV_dpt3190_Get_HwReg_ch_no_V_vld(XV_dpt3190 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XV_dpt3190_ReadReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_HWREG_CH_NO_V_CTRL);
    return Data & 0x1;
}

u32 XV_dpt3190_Get_HwReg_pkt_length_V(XV_dpt3190 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XV_dpt3190_ReadReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_HWREG_PKT_LENGTH_V_DATA);
    return Data;
}

u32 XV_dpt3190_Get_HwReg_pkt_length_V_vld(XV_dpt3190 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XV_dpt3190_ReadReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_HWREG_PKT_LENGTH_V_CTRL);
    return Data & 0x1;
}

u32 XV_dpt3190_Get_HwReg_payload_type_V(XV_dpt3190 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XV_dpt3190_ReadReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_HWREG_PAYLOAD_TYPE_V_DATA);
    return Data;
}

u32 XV_dpt3190_Get_HwReg_payload_type_V_vld(XV_dpt3190 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XV_dpt3190_ReadReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_HWREG_PAYLOAD_TYPE_V_CTRL);
    return Data & 0x1;
}

u32 XV_dpt3190_Get_HwReg_rx_pkt_cnt_V(XV_dpt3190 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XV_dpt3190_ReadReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_HWREG_RX_PKT_CNT_V_DATA);
    return Data;
}

u32 XV_dpt3190_Get_HwReg_rx_pkt_cnt_V_vld(XV_dpt3190 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XV_dpt3190_ReadReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_HWREG_RX_PKT_CNT_V_CTRL);
    return Data & 0x1;
}

void XV_dpt3190_Set_HwReg_C31_0_V(XV_dpt3190 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XV_dpt3190_WriteReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_HWREG_C31_0_V_DATA, Data);
}

u32 XV_dpt3190_Get_HwReg_C31_0_V(XV_dpt3190 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XV_dpt3190_ReadReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_HWREG_C31_0_V_DATA);
    return Data;
}

void XV_dpt3190_Set_HwReg_C63_32_V(XV_dpt3190 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XV_dpt3190_WriteReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_HWREG_C63_32_V_DATA, Data);
}

u32 XV_dpt3190_Get_HwReg_C63_32_V(XV_dpt3190 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XV_dpt3190_ReadReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_HWREG_C63_32_V_DATA);
    return Data;
}

void XV_dpt3190_Set_HwReg_C95_64_V(XV_dpt3190 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XV_dpt3190_WriteReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_HWREG_C95_64_V_DATA, Data);
}

u32 XV_dpt3190_Get_HwReg_C95_64_V(XV_dpt3190 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XV_dpt3190_ReadReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_HWREG_C95_64_V_DATA);
    return Data;
}

void XV_dpt3190_Set_HwReg_C127_96_V(XV_dpt3190 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XV_dpt3190_WriteReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_HWREG_C127_96_V_DATA, Data);
}

u32 XV_dpt3190_Get_HwReg_C127_96_V(XV_dpt3190 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XV_dpt3190_ReadReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_HWREG_C127_96_V_DATA);
    return Data;
}

void XV_dpt3190_Set_HwReg_C159_128_V(XV_dpt3190 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XV_dpt3190_WriteReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_HWREG_C159_128_V_DATA, Data);
}

u32 XV_dpt3190_Get_HwReg_C159_128_V(XV_dpt3190 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XV_dpt3190_ReadReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_HWREG_C159_128_V_DATA);
    return Data;
}

void XV_dpt3190_Set_HwReg_C191_160_V(XV_dpt3190 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XV_dpt3190_WriteReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_HWREG_C191_160_V_DATA, Data);
}

u32 XV_dpt3190_Get_HwReg_C191_160_V(XV_dpt3190 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XV_dpt3190_ReadReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_HWREG_C191_160_V_DATA);
    return Data;
}

void XV_dpt3190_Set_HwReg_U31_0_V(XV_dpt3190 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XV_dpt3190_WriteReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_HWREG_U31_0_V_DATA, Data);
}

u32 XV_dpt3190_Get_HwReg_U31_0_V(XV_dpt3190 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XV_dpt3190_ReadReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_HWREG_U31_0_V_DATA);
    return Data;
}

void XV_dpt3190_Set_HwReg_U63_32_V(XV_dpt3190 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XV_dpt3190_WriteReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_HWREG_U63_32_V_DATA, Data);
}

u32 XV_dpt3190_Get_HwReg_U63_32_V(XV_dpt3190 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XV_dpt3190_ReadReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_HWREG_U63_32_V_DATA);
    return Data;
}

void XV_dpt3190_Set_HwReg_U95_64_V(XV_dpt3190 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XV_dpt3190_WriteReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_HWREG_U95_64_V_DATA, Data);
}

u32 XV_dpt3190_Get_HwReg_U95_64_V(XV_dpt3190 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XV_dpt3190_ReadReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_HWREG_U95_64_V_DATA);
    return Data;
}

void XV_dpt3190_Set_HwReg_U127_96_V(XV_dpt3190 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XV_dpt3190_WriteReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_HWREG_U127_96_V_DATA, Data);
}

u32 XV_dpt3190_Get_HwReg_U127_96_V(XV_dpt3190 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XV_dpt3190_ReadReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_HWREG_U127_96_V_DATA);
    return Data;
}

void XV_dpt3190_Set_HwReg_U159_128_V(XV_dpt3190 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XV_dpt3190_WriteReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_HWREG_U159_128_V_DATA, Data);
}

u32 XV_dpt3190_Get_HwReg_U159_128_V(XV_dpt3190 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XV_dpt3190_ReadReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_HWREG_U159_128_V_DATA);
    return Data;
}

void XV_dpt3190_Set_HwReg_U191_160_V(XV_dpt3190 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XV_dpt3190_WriteReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_HWREG_U191_160_V_DATA, Data);
}

u32 XV_dpt3190_Get_HwReg_U191_160_V(XV_dpt3190 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XV_dpt3190_ReadReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_HWREG_U191_160_V_DATA);
    return Data;
}

void XV_dpt3190_Set_HwReg_reserved1_V(XV_dpt3190 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XV_dpt3190_WriteReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_HWREG_RESERVED1_V_DATA, Data);
}

u32 XV_dpt3190_Get_HwReg_reserved1_V(XV_dpt3190 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XV_dpt3190_ReadReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_HWREG_RESERVED1_V_DATA);
    return Data;
}

void XV_dpt3190_Set_HwReg_stat_reset_V(XV_dpt3190 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XV_dpt3190_WriteReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_HWREG_STAT_RESET_V_DATA, Data);
}

u32 XV_dpt3190_Get_HwReg_stat_reset_V(XV_dpt3190 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XV_dpt3190_ReadReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_HWREG_STAT_RESET_V_DATA);
    return Data;
}

void XV_dpt3190_InterruptGlobalEnable(XV_dpt3190 *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XV_dpt3190_WriteReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_GIE, 1);
}

void XV_dpt3190_InterruptGlobalDisable(XV_dpt3190 *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XV_dpt3190_WriteReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_GIE, 0);
}

void XV_dpt3190_InterruptEnable(XV_dpt3190 *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XV_dpt3190_ReadReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_IER);
    XV_dpt3190_WriteReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_IER, Register | Mask);
}

void XV_dpt3190_InterruptDisable(XV_dpt3190 *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XV_dpt3190_ReadReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_IER);
    XV_dpt3190_WriteReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_IER, Register & (~Mask));
}

void XV_dpt3190_InterruptClear(XV_dpt3190 *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XV_dpt3190_WriteReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_ISR, Mask);
}

u32 XV_dpt3190_InterruptGetEnabled(XV_dpt3190 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XV_dpt3190_ReadReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_IER);
}

u32 XV_dpt3190_InterruptGetStatus(XV_dpt3190 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XV_dpt3190_ReadReg(InstancePtr->Ctrl_BaseAddress, XV_DPT3190_CTRL_ADDR_ISR);
}
