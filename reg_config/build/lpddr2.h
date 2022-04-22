#ifndef __LPDDR2_H__
#define __LPDDR2_H__

#include <stdint.h>

#define LPDDR2_BASE_ADDRESS 0x0C00
#define LPDDR2_REG_NUM 97
#define LPDDR2_REG_ADDR(reg) REG_ADDR(LPDDR2_BASE_ADDRESS,lpddr2_t,reg)

union LPDDR2_REG_00 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_START:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_01 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DRAM_CLASS:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_02 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_VERSION:8;
};};
union LPDDR2_REG_03 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_VERSION:8;
};};
union LPDDR2_REG_04 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_MAX_ROW_REG:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_05 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_MAX_COL_REG:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_06 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_MAX_CS_REG:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_07 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_READ_DATA_FIFO_DEPTH:8;
};};
union LPDDR2_REG_08 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_READ_DATA_FIFO_PTR_WIDTH:8;
};};
union LPDDR2_REG_09 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_WRITE_DATA_FIFO_DEPTH:8;
};};
union LPDDR2_REG_0A {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_WRITE_DATA_FIFO_PTR_WIDTH:8;
};};
union LPDDR2_REG_0B {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_ASYNC_CDC_STAGES:8;
};};
union LPDDR2_REG_0C {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_AXI0_CMDFIFO_LOG2_DEPTH:8;
};};
union LPDDR2_REG_0D {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_AXI0_RDFIFO_LOG2_DEPTH:8;
};};
union LPDDR2_REG_0E {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_AXI0_WRFIFO_LOG2_DEPTH:8;
};};
union LPDDR2_REG_0F {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_AXI0_WRCMD_PROC_FIFO_LOG2_DEPTH:8;
};};
union LPDDR2_REG_10 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_AXI1_CMDFIFO_LOG2_DEPTH:8;
};};
union LPDDR2_REG_11 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_AXI1_RDFIFO_LOG2_DEPTH:8;
};};
union LPDDR2_REG_12 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_AXI1_WRFIFO_LOG2_DEPTH:8;
};};
union LPDDR2_REG_13 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_AXI1_WRCMD_PROC_FIFO_LOG2_DEPTH:8;
};};
union LPDDR2_REG_14 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_AXI2_CMDFIFO_LOG2_DEPTH:8;
};};
union LPDDR2_REG_15 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_AXI2_RDFIFO_LOG2_DEPTH:8;
};};
union LPDDR2_REG_16 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_AXI2_WRFIFO_LOG2_DEPTH:8;
};};
union LPDDR2_REG_17 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_AXI2_WRCMD_PROC_FIFO_LOG2_DEPTH:8;
};};
union LPDDR2_REG_18 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_AXI3_CMDFIFO_LOG2_DEPTH:8;
};};
union LPDDR2_REG_19 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_AXI3_RDFIFO_LOG2_DEPTH:8;
};};
union LPDDR2_REG_1A {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_AXI3_WRFIFO_LOG2_DEPTH:8;
};};
union LPDDR2_REG_1B {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_AXI3_WRCMD_PROC_FIFO_LOG2_DEPTH:8;
};};
union LPDDR2_REG_1C {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TINIT:8;
};};
union LPDDR2_REG_1D {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TINIT:8;
};};
union LPDDR2_REG_1E {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TINIT:8;
};};
union LPDDR2_REG_1F {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_20 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TINIT3:8;
};};
union LPDDR2_REG_21 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TINIT3:8;
};};
union LPDDR2_REG_22 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TINIT3:8;
};};
union LPDDR2_REG_23 {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_24 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TINIT4:8;
};};
union LPDDR2_REG_25 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TINIT4:8;
};};
union LPDDR2_REG_26 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TINIT4:8;
};};
union LPDDR2_REG_27 {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_28 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TINIT5:8;
};};
union LPDDR2_REG_29 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TINIT5:8;
};};
union LPDDR2_REG_2A {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TINIT5:8;
};};
union LPDDR2_REG_2B {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_NO_AUTO_MRR_INIT:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_2C {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_CASLAT_LIN:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_2D {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_WRLAT:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_2E {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TBST_INT_INTERVAL:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_2F {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TCCD:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_30 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TRRD:8;
};};
union LPDDR2_REG_31 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TRC:8;
};};
union LPDDR2_REG_32 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TRAS_MIN:8;
};};
union LPDDR2_REG_33 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TWTR:6;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_34 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TRP:8;
};};
union LPDDR2_REG_35 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TFAW:8;
};};
union LPDDR2_REG_36 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TRTP:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_37 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TMRD:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_38 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TMOD:8;
};};
union LPDDR2_REG_39 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TRAS_MAX:8;
};};
union LPDDR2_REG_3A {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TRAS_MAX:8;
};};
union LPDDR2_REG_3B {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TCKE:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_3C {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TCKESR:8;
};};
union LPDDR2_REG_3D {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_WRITEINTERP:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_3E {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TRCD:8;
};};
union LPDDR2_REG_3F {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TWR:6;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_40 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TMRR:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_41 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_AP:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_42 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_CONCURRENTAP:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_43 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TRAS_LOCKOUT:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_44 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TDAL:6;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_45 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_BSTLEN:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_46 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TRP_AB:8;
};};
union LPDDR2_REG_47 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_REG_DIMM_ENABLE:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_48 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_AREFRESH:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_49 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_Reserved:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_4A {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TREF_ENABLE:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_4B {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_4C {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TRFC:8;
};};
union LPDDR2_REG_4D {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TRFC:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_4E {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TREF:8;
};};
union LPDDR2_REG_4F {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TREF:8;
};};
union LPDDR2_REG_50 {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_51 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TPDEX:8;
};};
union LPDDR2_REG_52 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TPDEX:8;
};};
union LPDDR2_REG_53 {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_54 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TXSR:8;
};};
union LPDDR2_REG_55 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TXSR:8;
};};
union LPDDR2_REG_56 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TXSNR:8;
};};
union LPDDR2_REG_57 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TXSNR:8;
};};
union LPDDR2_REG_58 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PWRUP_SREFRESH_EXIT:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_59 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_SREFRESH_EXIT_NO_REFRESH:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_5A {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_ENABLE_QUICK_SREFRESH:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_5B {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_CKE_DELAY:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_5C {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_LOWPOWER_REFRESH_ENABLE:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_5D {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_CKSRE:8;
};};
union LPDDR2_REG_5E {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_CKSRX:8;
};};
union LPDDR2_REG_5F {
uint8_t byte;    struct {
uint8_t  :8;
};};
union LPDDR2_REG_60 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DUMMY:6;
uint8_t  :1;
uint8_t  :1;
};};
typedef struct LPDDR2_T {
union LPDDR2_REG_00 reg00;
union LPDDR2_REG_01 reg01;
union LPDDR2_REG_02 reg02;
union LPDDR2_REG_03 reg03;
union LPDDR2_REG_04 reg04;
union LPDDR2_REG_05 reg05;
union LPDDR2_REG_06 reg06;
union LPDDR2_REG_07 reg07;
union LPDDR2_REG_08 reg08;
union LPDDR2_REG_09 reg09;
union LPDDR2_REG_0A reg0A;
union LPDDR2_REG_0B reg0B;
union LPDDR2_REG_0C reg0C;
union LPDDR2_REG_0D reg0D;
union LPDDR2_REG_0E reg0E;
union LPDDR2_REG_0F reg0F;
union LPDDR2_REG_10 reg10;
union LPDDR2_REG_11 reg11;
union LPDDR2_REG_12 reg12;
union LPDDR2_REG_13 reg13;
union LPDDR2_REG_14 reg14;
union LPDDR2_REG_15 reg15;
union LPDDR2_REG_16 reg16;
union LPDDR2_REG_17 reg17;
union LPDDR2_REG_18 reg18;
union LPDDR2_REG_19 reg19;
union LPDDR2_REG_1A reg1A;
union LPDDR2_REG_1B reg1B;
union LPDDR2_REG_1C reg1C;
union LPDDR2_REG_1D reg1D;
union LPDDR2_REG_1E reg1E;
union LPDDR2_REG_1F reg1F;
union LPDDR2_REG_20 reg20;
union LPDDR2_REG_21 reg21;
union LPDDR2_REG_22 reg22;
union LPDDR2_REG_23 reg23;
union LPDDR2_REG_24 reg24;
union LPDDR2_REG_25 reg25;
union LPDDR2_REG_26 reg26;
union LPDDR2_REG_27 reg27;
union LPDDR2_REG_28 reg28;
union LPDDR2_REG_29 reg29;
union LPDDR2_REG_2A reg2A;
union LPDDR2_REG_2B reg2B;
union LPDDR2_REG_2C reg2C;
union LPDDR2_REG_2D reg2D;
union LPDDR2_REG_2E reg2E;
union LPDDR2_REG_2F reg2F;
union LPDDR2_REG_30 reg30;
union LPDDR2_REG_31 reg31;
union LPDDR2_REG_32 reg32;
union LPDDR2_REG_33 reg33;
union LPDDR2_REG_34 reg34;
union LPDDR2_REG_35 reg35;
union LPDDR2_REG_36 reg36;
union LPDDR2_REG_37 reg37;
union LPDDR2_REG_38 reg38;
union LPDDR2_REG_39 reg39;
union LPDDR2_REG_3A reg3A;
union LPDDR2_REG_3B reg3B;
union LPDDR2_REG_3C reg3C;
union LPDDR2_REG_3D reg3D;
union LPDDR2_REG_3E reg3E;
union LPDDR2_REG_3F reg3F;
union LPDDR2_REG_40 reg40;
union LPDDR2_REG_41 reg41;
union LPDDR2_REG_42 reg42;
union LPDDR2_REG_43 reg43;
union LPDDR2_REG_44 reg44;
union LPDDR2_REG_45 reg45;
union LPDDR2_REG_46 reg46;
union LPDDR2_REG_47 reg47;
union LPDDR2_REG_48 reg48;
union LPDDR2_REG_49 reg49;
union LPDDR2_REG_4A reg4A;
union LPDDR2_REG_4B reg4B;
union LPDDR2_REG_4C reg4C;
union LPDDR2_REG_4D reg4D;
union LPDDR2_REG_4E reg4E;
union LPDDR2_REG_4F reg4F;
union LPDDR2_REG_50 reg50;
union LPDDR2_REG_51 reg51;
union LPDDR2_REG_52 reg52;
union LPDDR2_REG_53 reg53;
union LPDDR2_REG_54 reg54;
union LPDDR2_REG_55 reg55;
union LPDDR2_REG_56 reg56;
union LPDDR2_REG_57 reg57;
union LPDDR2_REG_58 reg58;
union LPDDR2_REG_59 reg59;
union LPDDR2_REG_5A reg5A;
union LPDDR2_REG_5B reg5B;
union LPDDR2_REG_5C reg5C;
union LPDDR2_REG_5D reg5D;
union LPDDR2_REG_5E reg5E;
union LPDDR2_REG_5F reg5F;
union LPDDR2_REG_60 reg60;
} lpddr2_t;

extern lpddr2_t lpddr2;

#endif
