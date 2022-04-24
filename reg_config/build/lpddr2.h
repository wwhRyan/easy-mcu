#ifndef __LPDDR2_H__
#define __LPDDR2_H__

#include <stdint.h>

#define LPDDR2_BASE_ADDRESS 0x0C00
#define LPDDR2_REG_NUM 868
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
union LPDDR2_REG_61 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DUMMY:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_62 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DUMMY:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_63 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DUMMY:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_64 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DUMMY:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_65 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DUMMY:8;
};};
union LPDDR2_REG_66 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DUMMY:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_67 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DUMMY:8;
};};
union LPDDR2_REG_68 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DUMMY:8;
};};
union LPDDR2_REG_69 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DUMMY:6;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_6A {
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
union LPDDR2_REG_6B {
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
union LPDDR2_REG_6C {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_WRITE_MODEREG:8;
};};
union LPDDR2_REG_6D {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_WRITE_MODEREG:8;
};};
union LPDDR2_REG_6E {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_WRITE_MODEREG:8;
};};
union LPDDR2_REG_6F {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_WRITE_MODEREG:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_70 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_MRW_STATUS:8;
};};
union LPDDR2_REG_71 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_READ_MODEREG:8;
};};
union LPDDR2_REG_72 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_READ_MODEREG:8;
};};
union LPDDR2_REG_73 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_READ_MODEREG:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_74 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PERIPHERAL_MRR_DATA:8;
};};
union LPDDR2_REG_75 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PERIPHERAL_MRR_DATA:8;
};};
union LPDDR2_REG_76 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_AUTO_TEMPCHK_VAL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_77 {
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
union LPDDR2_REG_78 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_REFRESH_PER_AUTO_TEMPCHK:8;
};};
union LPDDR2_REG_79 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_REFRESH_PER_AUTO_TEMPCHK:8;
};};
union LPDDR2_REG_7A {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_MR1_DATA_0:8;
};};
union LPDDR2_REG_7B {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_MR2_DATA_0:8;
};};
union LPDDR2_REG_7C {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_MRSINGLE_DATA_0:8;
};};
union LPDDR2_REG_7D {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_MR3_DATA_0:8;
};};
union LPDDR2_REG_7E {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_MR8_DATA_0:8;
};};
union LPDDR2_REG_7F {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_MR16_DATA_0:8;
};};
union LPDDR2_REG_80 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_MR17_DATA_0:8;
};};
union LPDDR2_REG_81 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_BIST_GO:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_82 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_BIST_RESULT:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_83 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_ADDR_SPACE:6;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_84 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_BIST_DATA_CHECK:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_85 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_BIST_ADDR_CHECK:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_86 {
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
union LPDDR2_REG_87 {
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
union LPDDR2_REG_88 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_BIST_START_ADDRESS:8;
};};
union LPDDR2_REG_89 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_BIST_START_ADDRESS:8;
};};
union LPDDR2_REG_8A {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_BIST_START_ADDRESS:8;
};};
union LPDDR2_REG_8B {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_BIST_START_ADDRESS:8;
};};
union LPDDR2_REG_8C {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_BIST_DATA_MASK:8;
};};
union LPDDR2_REG_8D {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_BIST_DATA_MASK:8;
};};
union LPDDR2_REG_8E {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_BIST_DATA_MASK:8;
};};
union LPDDR2_REG_8F {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_BIST_DATA_MASK:8;
};};
union LPDDR2_REG_90 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_BIST_DATA_MASK:8;
};};
union LPDDR2_REG_91 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_BIST_DATA_MASK:8;
};};
union LPDDR2_REG_92 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_BIST_DATA_MASK:8;
};};
union LPDDR2_REG_93 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_BIST_DATA_MASK:8;
};};
union LPDDR2_REG_94 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_LONG_COUNT_MASK:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_95 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_ZQ_INIT:8;
};};
union LPDDR2_REG_96 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_ZQ_INIT:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_97 {
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
union LPDDR2_REG_98 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_ZQCL:8;
};};
union LPDDR2_REG_99 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_ZQCL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_9A {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_ZQCS:8;
};};
union LPDDR2_REG_9B {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_ZQCS:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_9C {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_ZQ_REQ:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_9D {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_ZQ_ON_SREF_EXIT:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_9E {
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
union LPDDR2_REG_9F {
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
union LPDDR2_REG_A0 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_ZQ_INTERVAL:8;
};};
union LPDDR2_REG_A1 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_ZQ_INTERVAL:8;
};};
union LPDDR2_REG_A2 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_ZQ_INTERVAL:8;
};};
union LPDDR2_REG_A3 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_ZQ_INTERVAL:8;
};};
union LPDDR2_REG_A4 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_ZQ_IN_PROGRESS:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_A5 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_ZQRESET:8;
};};
union LPDDR2_REG_A6 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_ZQRESET:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_A7 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_NO_ZQ_INIT:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_A8 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_BANK_DIFF:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_A9 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_ROW_DIFF:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_AA {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_COL_DIFF:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_AB {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_Reserved:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_AC {
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
union LPDDR2_REG_AD {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_APREBIT:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_AE {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_AGE_COUNT:8;
};};
union LPDDR2_REG_AF {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_COMMAND_AGE_COUNT:8;
};};
union LPDDR2_REG_B0 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_ADDR_CMP_EN:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_B1 {
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
union LPDDR2_REG_B2 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_BANK_SPLIT_EN:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_B3 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PLACEMENT_EN:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_B4 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PRIORITY_EN:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_B5 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_RW_SAME_EN:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_B6 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_RW_SAME_PAGE_EN:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_B7 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DISABLE_RW_GROUP_W_BNK_CONFLICT:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_B8 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_NUM_Q_ENTRIES_ACT_DISABLE:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_B9 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_SWAP_EN:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_BA {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DISABLE_RD_INTERLEAVE:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_BB {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_INHIBIT_DRAM_CMD:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_BC {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_REDUC:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_BD {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_LPDDR2_S4:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_BE {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_Q_FULLNESS:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_BF {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_IN_ORDER_ACCEPT:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_C0 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_CONTROLLER_BUSY:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_C1 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_CTRLUPD_REQ:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_C2 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_CTRLUPD_REQ_PER_AREF_EN:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_C3 {
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
union LPDDR2_REG_C4 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_INT_STATUS:8;
};};
union LPDDR2_REG_C5 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_INT_STATUS:7;
uint8_t  :1;
};};
union LPDDR2_REG_C6 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_INT_ACK:8;
};};
union LPDDR2_REG_C7 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_INT_ACK:6;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_C8 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_INT_MASK:8;
};};
union LPDDR2_REG_C9 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_INT_MASK:7;
uint8_t  :1;
};};
union LPDDR2_REG_CA {
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
union LPDDR2_REG_CB {
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
union LPDDR2_REG_CC {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_OUT_OF_RANGE_ADDR:8;
};};
union LPDDR2_REG_CD {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_OUT_OF_RANGE_ADDR:8;
};};
union LPDDR2_REG_CE {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_OUT_OF_RANGE_ADDR:8;
};};
union LPDDR2_REG_CF {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_OUT_OF_RANGE_ADDR:8;
};};
union LPDDR2_REG_D0 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_OUT_OF_RANGE_LENGTH:8;
};};
union LPDDR2_REG_D1 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_OUT_OF_RANGE_TYPE:6;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_D2 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_OUT_OF_RANGE_SOURCE_ID:8;
};};
union LPDDR2_REG_D3 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_OUT_OF_RANGE_SOURCE_ID:8;
};};
union LPDDR2_REG_D4 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_BIST_EXP_DATA:8;
};};
union LPDDR2_REG_D5 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_BIST_EXP_DATA:8;
};};
union LPDDR2_REG_D6 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_BIST_EXP_DATA:8;
};};
union LPDDR2_REG_D7 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_BIST_EXP_DATA:8;
};};
union LPDDR2_REG_D8 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_BIST_EXP_DATA:8;
};};
union LPDDR2_REG_D9 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_BIST_EXP_DATA:8;
};};
union LPDDR2_REG_DA {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_BIST_EXP_DATA:8;
};};
union LPDDR2_REG_DB {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_BIST_EXP_DATA:8;
};};
union LPDDR2_REG_DC {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_BIST_EXP_DATA:8;
};};
union LPDDR2_REG_DD {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_BIST_EXP_DATA:8;
};};
union LPDDR2_REG_DE {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_BIST_EXP_DATA:8;
};};
union LPDDR2_REG_DF {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_BIST_EXP_DATA:8;
};};
union LPDDR2_REG_E0 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_BIST_EXP_DATA:8;
};};
union LPDDR2_REG_E1 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_BIST_EXP_DATA:8;
};};
union LPDDR2_REG_E2 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_BIST_EXP_DATA:8;
};};
union LPDDR2_REG_E3 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_BIST_EXP_DATA:8;
};};
union LPDDR2_REG_E4 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_BIST_FAIL_DATA:8;
};};
union LPDDR2_REG_E5 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_BIST_FAIL_DATA:8;
};};
union LPDDR2_REG_E6 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_BIST_FAIL_DATA:8;
};};
union LPDDR2_REG_E7 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_BIST_FAIL_DATA:8;
};};
union LPDDR2_REG_E8 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_BIST_FAIL_DATA:8;
};};
union LPDDR2_REG_E9 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_BIST_FAIL_DATA:8;
};};
union LPDDR2_REG_EA {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_BIST_FAIL_DATA:8;
};};
union LPDDR2_REG_EB {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_BIST_FAIL_DATA:8;
};};
union LPDDR2_REG_EC {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_BIST_FAIL_DATA:8;
};};
union LPDDR2_REG_ED {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_BIST_FAIL_DATA:8;
};};
union LPDDR2_REG_EE {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_BIST_FAIL_DATA:8;
};};
union LPDDR2_REG_EF {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_BIST_FAIL_DATA:8;
};};
union LPDDR2_REG_F0 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_BIST_FAIL_DATA:8;
};};
union LPDDR2_REG_F1 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_BIST_FAIL_DATA:8;
};};
union LPDDR2_REG_F2 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_BIST_FAIL_DATA:8;
};};
union LPDDR2_REG_F3 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_BIST_FAIL_DATA:8;
};};
union LPDDR2_REG_F4 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_BIST_FAIL_ADDR:8;
};};
union LPDDR2_REG_F5 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_BIST_FAIL_ADDR:8;
};};
union LPDDR2_REG_F6 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_BIST_FAIL_ADDR:8;
};};
union LPDDR2_REG_F7 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_BIST_FAIL_ADDR:8;
};};
union LPDDR2_REG_F8 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PORT_CMD_ERROR_ADDR:8;
};};
union LPDDR2_REG_F9 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PORT_CMD_ERROR_ADDR:8;
};};
union LPDDR2_REG_FA {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PORT_CMD_ERROR_ADDR:8;
};};
union LPDDR2_REG_FB {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PORT_CMD_ERROR_ADDR:8;
};};
union LPDDR2_REG_FC {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PORT_CMD_ERROR_ID:8;
};};
union LPDDR2_REG_FD {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PORT_CMD_ERROR_ID:8;
};};
union LPDDR2_REG_FE {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PORT_CMD_ERROR_TYPE:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_FF {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_R2R_SAMECS_DLY:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_100 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_R2W_SAMECS_DLY:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_101 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_W2R_SAMECS_DLY:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_102 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_W2W_SAMECS_DLY:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_103 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TDQSCK_MAX:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_104 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_AXI0_R_PRIORITY:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_105 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_AXI0_W_PRIORITY:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_106 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_AXI0_FIFO_TYPE_REG:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_107 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_AXI1_R_PRIORITY:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_108 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_AXI1_W_PRIORITY:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_109 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_AXI1_FIFO_TYPE_REG:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_10A {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_AXI2_R_PRIORITY:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_10B {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_AXI2_W_PRIORITY:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_10C {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_AXI2_FIFO_TYPE_REG:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_10D {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_AXI3_R_PRIORITY:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_10E {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_AXI3_W_PRIORITY:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_10F {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_AXI3_FIFO_TYPE_REG:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_110 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_ARB_CMD_Q_THRESHOLD:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_111 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_AXI0_BDW:7;
uint8_t  :1;
};};
union LPDDR2_REG_112 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_AXI0_BDW_OVFLOW:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_113 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_AXI0_CURRENT_BDW:7;
uint8_t  :1;
};};
union LPDDR2_REG_114 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_AXI1_BDW:7;
uint8_t  :1;
};};
union LPDDR2_REG_115 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_AXI1_BDW_OVFLOW:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_116 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_AXI1_CURRENT_BDW:7;
uint8_t  :1;
};};
union LPDDR2_REG_117 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_AXI2_BDW:7;
uint8_t  :1;
};};
union LPDDR2_REG_118 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_AXI2_BDW_OVFLOW:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_119 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_AXI2_CURRENT_BDW:7;
uint8_t  :1;
};};
union LPDDR2_REG_11A {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_AXI3_BDW:7;
uint8_t  :1;
};};
union LPDDR2_REG_11B {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_AXI3_BDW_OVFLOW:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_11C {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_AXI3_CURRENT_BDW:7;
uint8_t  :1;
};};
union LPDDR2_REG_11D {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_CKE_STATUS:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_11E {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DLL_RST_DELAY:8;
};};
union LPDDR2_REG_11F {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DLL_RST_DELAY:8;
};};
union LPDDR2_REG_120 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DLL_RST_ADJ_DLY:8;
};};
union LPDDR2_REG_121 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TDFI_PHY_WRLAT:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_122 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_UPDATE_ERROR_STATUS:7;
uint8_t  :1;
};};
union LPDDR2_REG_123 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TDFI_PHY_RDLAT:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_124 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TDFI_RDDATA_EN:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_125 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DRAM_CLK_DISABLE:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_126 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TDFI_CTRLUPD_MIN:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_127 {
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
union LPDDR2_REG_128 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TDFI_CTRLUPD_MAX:8;
};};
union LPDDR2_REG_129 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TDFI_CTRLUPD_MAX:8;
};};
union LPDDR2_REG_12A {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TDFI_PHYUPD_TYPE0:8;
};};
union LPDDR2_REG_12B {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TDFI_PHYUPD_TYPE0:8;
};};
union LPDDR2_REG_12C {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TDFI_PHYUPD_TYPE1:8;
};};
union LPDDR2_REG_12D {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TDFI_PHYUPD_TYPE1:8;
};};
union LPDDR2_REG_12E {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TDFI_PHYUPD_TYPE2:8;
};};
union LPDDR2_REG_12F {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TDFI_PHYUPD_TYPE2:8;
};};
union LPDDR2_REG_130 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TDFI_PHYUPD_TYPE3:8;
};};
union LPDDR2_REG_131 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TDFI_PHYUPD_TYPE3:8;
};};
union LPDDR2_REG_132 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TDFI_PHYUPD_RESP:8;
};};
union LPDDR2_REG_133 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TDFI_PHYUPD_RESP:8;
};};
union LPDDR2_REG_134 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TDFI_CTRLUPD_INTERVAL:8;
};};
union LPDDR2_REG_135 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TDFI_CTRLUPD_INTERVAL:8;
};};
union LPDDR2_REG_136 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TDFI_CTRLUPD_INTERVAL:8;
};};
union LPDDR2_REG_137 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TDFI_CTRLUPD_INTERVAL:8;
};};
union LPDDR2_REG_138 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_RDLAT_ADJ:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_139 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_WRLAT_ADJ:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_13A {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TDFI_CTRL_DELAY:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_13B {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TDFI_DRAM_CLK_DISABLE:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_13C {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TDFI_DRAM_CLK_ENABLE:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_13D {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_TDFI_PHY_WRDATA:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_13E {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_EN_1T_TIMING:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LPDDR2_REG_13F {
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
union LPDDR2_REG_140 {
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
union LPDDR2_REG_141 {
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
union LPDDR2_REG_142 {
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
union LPDDR2_REG_143 {
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
union LPDDR2_REG_144 {
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
union LPDDR2_REG_145 {
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
union LPDDR2_REG_146 {
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
union LPDDR2_REG_147 {
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
union LPDDR2_REG_148 {
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
union LPDDR2_REG_149 {
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
union LPDDR2_REG_14A {
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
union LPDDR2_REG_14B {
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
union LPDDR2_REG_14C {
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
union LPDDR2_REG_14D {
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
union LPDDR2_REG_14E {
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
union LPDDR2_REG_14F {
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
union LPDDR2_REG_150 {
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
union LPDDR2_REG_151 {
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
union LPDDR2_REG_152 {
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
union LPDDR2_REG_153 {
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
union LPDDR2_REG_154 {
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
union LPDDR2_REG_155 {
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
union LPDDR2_REG_156 {
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
union LPDDR2_REG_157 {
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
union LPDDR2_REG_158 {
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
union LPDDR2_REG_159 {
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
union LPDDR2_REG_15A {
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
union LPDDR2_REG_15B {
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
union LPDDR2_REG_15C {
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
union LPDDR2_REG_15D {
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
union LPDDR2_REG_15E {
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
union LPDDR2_REG_15F {
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
union LPDDR2_REG_160 {
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
union LPDDR2_REG_161 {
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
union LPDDR2_REG_162 {
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
union LPDDR2_REG_163 {
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
union LPDDR2_REG_164 {
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
union LPDDR2_REG_165 {
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
union LPDDR2_REG_166 {
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
union LPDDR2_REG_167 {
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
union LPDDR2_REG_168 {
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
union LPDDR2_REG_169 {
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
union LPDDR2_REG_16A {
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
union LPDDR2_REG_16B {
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
union LPDDR2_REG_16C {
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
union LPDDR2_REG_16D {
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
union LPDDR2_REG_16E {
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
union LPDDR2_REG_16F {
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
union LPDDR2_REG_170 {
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
union LPDDR2_REG_171 {
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
union LPDDR2_REG_172 {
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
union LPDDR2_REG_173 {
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
union LPDDR2_REG_174 {
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
union LPDDR2_REG_175 {
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
union LPDDR2_REG_176 {
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
union LPDDR2_REG_177 {
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
union LPDDR2_REG_178 {
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
union LPDDR2_REG_179 {
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
union LPDDR2_REG_17A {
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
union LPDDR2_REG_17B {
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
union LPDDR2_REG_17C {
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
union LPDDR2_REG_17D {
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
union LPDDR2_REG_17E {
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
union LPDDR2_REG_17F {
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
union LPDDR2_REG_180 {
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
union LPDDR2_REG_181 {
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
union LPDDR2_REG_182 {
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
union LPDDR2_REG_183 {
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
union LPDDR2_REG_184 {
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
union LPDDR2_REG_185 {
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
union LPDDR2_REG_186 {
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
union LPDDR2_REG_187 {
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
union LPDDR2_REG_188 {
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
union LPDDR2_REG_189 {
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
union LPDDR2_REG_18A {
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
union LPDDR2_REG_18B {
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
union LPDDR2_REG_18C {
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
union LPDDR2_REG_18D {
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
union LPDDR2_REG_18E {
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
union LPDDR2_REG_18F {
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
union LPDDR2_REG_190 {
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
union LPDDR2_REG_191 {
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
union LPDDR2_REG_192 {
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
union LPDDR2_REG_193 {
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
union LPDDR2_REG_194 {
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
union LPDDR2_REG_195 {
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
union LPDDR2_REG_196 {
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
union LPDDR2_REG_197 {
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
union LPDDR2_REG_198 {
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
union LPDDR2_REG_199 {
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
union LPDDR2_REG_19A {
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
union LPDDR2_REG_19B {
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
union LPDDR2_REG_19C {
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
union LPDDR2_REG_19D {
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
union LPDDR2_REG_19E {
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
union LPDDR2_REG_19F {
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
union LPDDR2_REG_1A0 {
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
union LPDDR2_REG_1A1 {
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
union LPDDR2_REG_1A2 {
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
union LPDDR2_REG_1A3 {
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
union LPDDR2_REG_1A4 {
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
union LPDDR2_REG_1A5 {
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
union LPDDR2_REG_1A6 {
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
union LPDDR2_REG_1A7 {
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
union LPDDR2_REG_1A8 {
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
union LPDDR2_REG_1A9 {
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
union LPDDR2_REG_1AA {
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
union LPDDR2_REG_1AB {
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
union LPDDR2_REG_1AC {
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
union LPDDR2_REG_1AD {
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
union LPDDR2_REG_1AE {
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
union LPDDR2_REG_1AF {
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
union LPDDR2_REG_1B0 {
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
union LPDDR2_REG_1B1 {
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
union LPDDR2_REG_1B2 {
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
union LPDDR2_REG_1B3 {
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
union LPDDR2_REG_1B4 {
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
union LPDDR2_REG_1B5 {
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
union LPDDR2_REG_1B6 {
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
union LPDDR2_REG_1B7 {
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
union LPDDR2_REG_1B8 {
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
union LPDDR2_REG_1B9 {
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
union LPDDR2_REG_1BA {
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
union LPDDR2_REG_1BB {
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
union LPDDR2_REG_1BC {
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
union LPDDR2_REG_1BD {
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
union LPDDR2_REG_1BE {
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
union LPDDR2_REG_1BF {
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
union LPDDR2_REG_1C0 {
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
union LPDDR2_REG_1C1 {
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
union LPDDR2_REG_1C2 {
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
union LPDDR2_REG_1C3 {
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
union LPDDR2_REG_1C4 {
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
union LPDDR2_REG_1C5 {
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
union LPDDR2_REG_1C6 {
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
union LPDDR2_REG_1C7 {
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
union LPDDR2_REG_1C8 {
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
union LPDDR2_REG_1C9 {
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
union LPDDR2_REG_1CA {
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
union LPDDR2_REG_1CB {
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
union LPDDR2_REG_1CC {
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
union LPDDR2_REG_1CD {
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
union LPDDR2_REG_1CE {
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
union LPDDR2_REG_1CF {
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
union LPDDR2_REG_1D0 {
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
union LPDDR2_REG_1D1 {
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
union LPDDR2_REG_1D2 {
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
union LPDDR2_REG_1D3 {
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
union LPDDR2_REG_1D4 {
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
union LPDDR2_REG_1D5 {
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
union LPDDR2_REG_1D6 {
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
union LPDDR2_REG_1D7 {
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
union LPDDR2_REG_1D8 {
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
union LPDDR2_REG_1D9 {
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
union LPDDR2_REG_1DA {
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
union LPDDR2_REG_1DB {
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
union LPDDR2_REG_1DC {
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
union LPDDR2_REG_1DD {
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
union LPDDR2_REG_1DE {
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
union LPDDR2_REG_1DF {
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
union LPDDR2_REG_1E0 {
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
union LPDDR2_REG_1E1 {
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
union LPDDR2_REG_1E2 {
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
union LPDDR2_REG_1E3 {
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
union LPDDR2_REG_1E4 {
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
union LPDDR2_REG_1E5 {
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
union LPDDR2_REG_1E6 {
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
union LPDDR2_REG_1E7 {
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
union LPDDR2_REG_1E8 {
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
union LPDDR2_REG_1E9 {
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
union LPDDR2_REG_1EA {
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
union LPDDR2_REG_1EB {
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
union LPDDR2_REG_1EC {
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
union LPDDR2_REG_1ED {
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
union LPDDR2_REG_1EE {
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
union LPDDR2_REG_1EF {
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
union LPDDR2_REG_1F0 {
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
union LPDDR2_REG_1F1 {
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
union LPDDR2_REG_1F2 {
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
union LPDDR2_REG_1F3 {
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
union LPDDR2_REG_1F4 {
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
union LPDDR2_REG_1F5 {
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
union LPDDR2_REG_1F6 {
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
union LPDDR2_REG_1F7 {
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
union LPDDR2_REG_1F8 {
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
union LPDDR2_REG_1F9 {
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
union LPDDR2_REG_1FA {
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
union LPDDR2_REG_1FB {
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
union LPDDR2_REG_1FC {
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
union LPDDR2_REG_1FD {
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
union LPDDR2_REG_1FE {
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
union LPDDR2_REG_1FF {
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
union LPDDR2_REG_200 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_DQ_TIMING_REG_0:8;
};};
union LPDDR2_REG_201 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_DQ_TIMING_REG_0:8;
};};
union LPDDR2_REG_202 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_DQ_TIMING_REG_0:8;
};};
union LPDDR2_REG_203 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_DQ_TIMING_REG_0:8;
};};
union LPDDR2_REG_204 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_DQS_TIMING_REG_0:8;
};};
union LPDDR2_REG_205 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_DQS_TIMING_REG_0:8;
};};
union LPDDR2_REG_206 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_DQS_TIMING_REG_0:8;
};};
union LPDDR2_REG_207 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_DQS_TIMING_REG_0:8;
};};
union LPDDR2_REG_208 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_GATE_LPBK_CTRL_REG_0:8;
};};
union LPDDR2_REG_209 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_GATE_LPBK_CTRL_REG_0:8;
};};
union LPDDR2_REG_20A {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_GATE_LPBK_CTRL_REG_0:8;
};};
union LPDDR2_REG_20B {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_GATE_LPBK_CTRL_REG_0:8;
};};
union LPDDR2_REG_20C {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_READ_CTRL_REG_0:8;
};};
union LPDDR2_REG_20D {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_READ_CTRL_REG_0:8;
};};
union LPDDR2_REG_20E {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_READ_CTRL_REG_0:8;
};};
union LPDDR2_REG_20F {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_READ_CTRL_REG_0:8;
};};
union LPDDR2_REG_210 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_MASTER_CTRL_REG_0:8;
};};
union LPDDR2_REG_211 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_MASTER_CTRL_REG_0:8;
};};
union LPDDR2_REG_212 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_MASTER_CTRL_REG_0:8;
};};
union LPDDR2_REG_213 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_MASTER_CTRL_REG_0:8;
};};
union LPDDR2_REG_214 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_SLAVE_CTRL_REG_0:8;
};};
union LPDDR2_REG_215 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_SLAVE_CTRL_REG_0:8;
};};
union LPDDR2_REG_216 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_SLAVE_CTRL_REG_0:8;
};};
union LPDDR2_REG_217 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_SLAVE_CTRL_REG_0:8;
};};
union LPDDR2_REG_218 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_IE_TIMING_REG_0:8;
};};
union LPDDR2_REG_219 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_IE_TIMING_REG_0:8;
};};
union LPDDR2_REG_21A {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_IE_TIMING_REG_0:8;
};};
union LPDDR2_REG_21B {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_IE_TIMING_REG_0:8;
};};
union LPDDR2_REG_21C {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_OBS_REG_0_0:8;
};};
union LPDDR2_REG_21D {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_OBS_REG_0_0:8;
};};
union LPDDR2_REG_21E {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_OBS_REG_0_0:8;
};};
union LPDDR2_REG_21F {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_OBS_REG_0_0:8;
};};
union LPDDR2_REG_220 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_OBS_REG_0_0:8;
};};
union LPDDR2_REG_221 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_OBS_REG_0_0:8;
};};
union LPDDR2_REG_222 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_OBS_REG_0_0:8;
};};
union LPDDR2_REG_223 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_OBS_REG_0_0:8;
};};
union LPDDR2_REG_224 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_OBS_REG_1_0:8;
};};
union LPDDR2_REG_225 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_OBS_REG_1_0:8;
};};
union LPDDR2_REG_226 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_OBS_REG_1_0:8;
};};
union LPDDR2_REG_227 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_OBS_REG_1_0:8;
};};
union LPDDR2_REG_228 {
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
union LPDDR2_REG_229 {
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
union LPDDR2_REG_22A {
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
union LPDDR2_REG_22B {
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
union LPDDR2_REG_22C {
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
union LPDDR2_REG_22D {
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
union LPDDR2_REG_22E {
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
union LPDDR2_REG_22F {
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
union LPDDR2_REG_230 {
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
union LPDDR2_REG_231 {
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
union LPDDR2_REG_232 {
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
union LPDDR2_REG_233 {
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
union LPDDR2_REG_234 {
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
union LPDDR2_REG_235 {
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
union LPDDR2_REG_236 {
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
union LPDDR2_REG_237 {
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
union LPDDR2_REG_238 {
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
union LPDDR2_REG_239 {
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
union LPDDR2_REG_23A {
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
union LPDDR2_REG_23B {
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
union LPDDR2_REG_23C {
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
union LPDDR2_REG_23D {
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
union LPDDR2_REG_23E {
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
union LPDDR2_REG_23F {
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
union LPDDR2_REG_240 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_DQ_TIMING_REG_1:8;
};};
union LPDDR2_REG_241 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_DQ_TIMING_REG_1:8;
};};
union LPDDR2_REG_242 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_DQ_TIMING_REG_1:8;
};};
union LPDDR2_REG_243 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_DQ_TIMING_REG_1:8;
};};
union LPDDR2_REG_244 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_DQS_TIMING_REG_1:8;
};};
union LPDDR2_REG_245 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_DQS_TIMING_REG_1:8;
};};
union LPDDR2_REG_246 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_DQS_TIMING_REG_1:8;
};};
union LPDDR2_REG_247 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_DQS_TIMING_REG_1:8;
};};
union LPDDR2_REG_248 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_GATE_LPBK_CTRL_REG_1:8;
};};
union LPDDR2_REG_249 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_GATE_LPBK_CTRL_REG_1:8;
};};
union LPDDR2_REG_24A {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_GATE_LPBK_CTRL_REG_1:8;
};};
union LPDDR2_REG_24B {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_GATE_LPBK_CTRL_REG_1:8;
};};
union LPDDR2_REG_24C {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_READ_CTRL_REG_1:8;
};};
union LPDDR2_REG_24D {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_READ_CTRL_REG_1:8;
};};
union LPDDR2_REG_24E {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_READ_CTRL_REG_1:8;
};};
union LPDDR2_REG_24F {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_READ_CTRL_REG_1:8;
};};
union LPDDR2_REG_250 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_MASTER_CTRL_REG_1:8;
};};
union LPDDR2_REG_251 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_MASTER_CTRL_REG_1:8;
};};
union LPDDR2_REG_252 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_MASTER_CTRL_REG_1:8;
};};
union LPDDR2_REG_253 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_MASTER_CTRL_REG_1:8;
};};
union LPDDR2_REG_254 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_SLAVE_CTRL_REG_1:8;
};};
union LPDDR2_REG_255 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_SLAVE_CTRL_REG_1:8;
};};
union LPDDR2_REG_256 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_SLAVE_CTRL_REG_1:8;
};};
union LPDDR2_REG_257 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_SLAVE_CTRL_REG_1:8;
};};
union LPDDR2_REG_258 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_IE_TIMING_REG_1:8;
};};
union LPDDR2_REG_259 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_IE_TIMING_REG_1:8;
};};
union LPDDR2_REG_25A {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_IE_TIMING_REG_1:8;
};};
union LPDDR2_REG_25B {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_IE_TIMING_REG_1:8;
};};
union LPDDR2_REG_25C {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_OBS_REG_0_1:8;
};};
union LPDDR2_REG_25D {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_OBS_REG_0_1:8;
};};
union LPDDR2_REG_25E {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_OBS_REG_0_1:8;
};};
union LPDDR2_REG_25F {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_OBS_REG_0_1:8;
};};
union LPDDR2_REG_260 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_OBS_REG_0_1:8;
};};
union LPDDR2_REG_261 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_OBS_REG_0_1:8;
};};
union LPDDR2_REG_262 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_OBS_REG_0_1:8;
};};
union LPDDR2_REG_263 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_OBS_REG_0_1:8;
};};
union LPDDR2_REG_264 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_OBS_REG_1_1:8;
};};
union LPDDR2_REG_265 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_OBS_REG_1_1:8;
};};
union LPDDR2_REG_266 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_OBS_REG_1_1:8;
};};
union LPDDR2_REG_267 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_OBS_REG_1_1:8;
};};
union LPDDR2_REG_268 {
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
union LPDDR2_REG_269 {
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
union LPDDR2_REG_26A {
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
union LPDDR2_REG_26B {
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
union LPDDR2_REG_26C {
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
union LPDDR2_REG_26D {
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
union LPDDR2_REG_26E {
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
union LPDDR2_REG_26F {
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
union LPDDR2_REG_270 {
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
union LPDDR2_REG_271 {
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
union LPDDR2_REG_272 {
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
union LPDDR2_REG_273 {
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
union LPDDR2_REG_274 {
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
union LPDDR2_REG_275 {
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
union LPDDR2_REG_276 {
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
union LPDDR2_REG_277 {
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
union LPDDR2_REG_278 {
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
union LPDDR2_REG_279 {
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
union LPDDR2_REG_27A {
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
union LPDDR2_REG_27B {
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
union LPDDR2_REG_27C {
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
union LPDDR2_REG_27D {
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
union LPDDR2_REG_27E {
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
union LPDDR2_REG_27F {
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
union LPDDR2_REG_280 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_DQ_TIMING_REG_2:8;
};};
union LPDDR2_REG_281 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_DQ_TIMING_REG_2:8;
};};
union LPDDR2_REG_282 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_DQ_TIMING_REG_2:8;
};};
union LPDDR2_REG_283 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_DQ_TIMING_REG_2:8;
};};
union LPDDR2_REG_284 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_DQS_TIMING_REG_2:8;
};};
union LPDDR2_REG_285 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_DQS_TIMING_REG_2:8;
};};
union LPDDR2_REG_286 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_DQS_TIMING_REG_2:8;
};};
union LPDDR2_REG_287 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_DQS_TIMING_REG_2:8;
};};
union LPDDR2_REG_288 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_GATE_LPBK_CTRL_REG_2:8;
};};
union LPDDR2_REG_289 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_GATE_LPBK_CTRL_REG_2:8;
};};
union LPDDR2_REG_28A {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_GATE_LPBK_CTRL_REG_2:8;
};};
union LPDDR2_REG_28B {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_GATE_LPBK_CTRL_REG_2:8;
};};
union LPDDR2_REG_28C {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_READ_CTRL_REG_2:8;
};};
union LPDDR2_REG_28D {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_READ_CTRL_REG_2:8;
};};
union LPDDR2_REG_28E {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_READ_CTRL_REG_2:8;
};};
union LPDDR2_REG_28F {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_READ_CTRL_REG_2:8;
};};
union LPDDR2_REG_290 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_MASTER_CTRL_REG_2:8;
};};
union LPDDR2_REG_291 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_MASTER_CTRL_REG_2:8;
};};
union LPDDR2_REG_292 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_MASTER_CTRL_REG_2:8;
};};
union LPDDR2_REG_293 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_MASTER_CTRL_REG_2:8;
};};
union LPDDR2_REG_294 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_SLAVE_CTRL_REG_2:8;
};};
union LPDDR2_REG_295 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_SLAVE_CTRL_REG_2:8;
};};
union LPDDR2_REG_296 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_SLAVE_CTRL_REG_2:8;
};};
union LPDDR2_REG_297 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_SLAVE_CTRL_REG_2:8;
};};
union LPDDR2_REG_298 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_IE_TIMING_REG_2:8;
};};
union LPDDR2_REG_299 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_IE_TIMING_REG_2:8;
};};
union LPDDR2_REG_29A {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_IE_TIMING_REG_2:8;
};};
union LPDDR2_REG_29B {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_IE_TIMING_REG_2:8;
};};
union LPDDR2_REG_29C {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_OBS_REG_0_2:8;
};};
union LPDDR2_REG_29D {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_OBS_REG_0_2:8;
};};
union LPDDR2_REG_29E {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_OBS_REG_0_2:8;
};};
union LPDDR2_REG_29F {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_OBS_REG_0_2:8;
};};
union LPDDR2_REG_2A0 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_OBS_REG_0_2:8;
};};
union LPDDR2_REG_2A1 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_OBS_REG_0_2:8;
};};
union LPDDR2_REG_2A2 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_OBS_REG_0_2:8;
};};
union LPDDR2_REG_2A3 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_OBS_REG_0_2:8;
};};
union LPDDR2_REG_2A4 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_OBS_REG_1_2:8;
};};
union LPDDR2_REG_2A5 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_OBS_REG_1_2:8;
};};
union LPDDR2_REG_2A6 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_OBS_REG_1_2:8;
};};
union LPDDR2_REG_2A7 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_OBS_REG_1_2:8;
};};
union LPDDR2_REG_2A8 {
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
union LPDDR2_REG_2A9 {
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
union LPDDR2_REG_2AA {
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
union LPDDR2_REG_2AB {
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
union LPDDR2_REG_2AC {
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
union LPDDR2_REG_2AD {
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
union LPDDR2_REG_2AE {
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
union LPDDR2_REG_2AF {
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
union LPDDR2_REG_2B0 {
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
union LPDDR2_REG_2B1 {
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
union LPDDR2_REG_2B2 {
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
union LPDDR2_REG_2B3 {
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
union LPDDR2_REG_2B4 {
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
union LPDDR2_REG_2B5 {
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
union LPDDR2_REG_2B6 {
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
union LPDDR2_REG_2B7 {
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
union LPDDR2_REG_2B8 {
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
union LPDDR2_REG_2B9 {
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
union LPDDR2_REG_2BA {
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
union LPDDR2_REG_2BB {
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
union LPDDR2_REG_2BC {
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
union LPDDR2_REG_2BD {
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
union LPDDR2_REG_2BE {
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
union LPDDR2_REG_2BF {
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
union LPDDR2_REG_2C0 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_DQ_TIMING_REG_3:8;
};};
union LPDDR2_REG_2C1 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_DQ_TIMING_REG_3:8;
};};
union LPDDR2_REG_2C2 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_DQ_TIMING_REG_3:8;
};};
union LPDDR2_REG_2C3 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_DQ_TIMING_REG_3:8;
};};
union LPDDR2_REG_2C4 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_DQS_TIMING_REG_3:8;
};};
union LPDDR2_REG_2C5 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_DQS_TIMING_REG_3:8;
};};
union LPDDR2_REG_2C6 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_DQS_TIMING_REG_3:8;
};};
union LPDDR2_REG_2C7 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_DQS_TIMING_REG_3:8;
};};
union LPDDR2_REG_2C8 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_GATE_LPBK_CTRL_REG_3:8;
};};
union LPDDR2_REG_2C9 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_GATE_LPBK_CTRL_REG_3:8;
};};
union LPDDR2_REG_2CA {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_GATE_LPBK_CTRL_REG_3:8;
};};
union LPDDR2_REG_2CB {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_GATE_LPBK_CTRL_REG_3:8;
};};
union LPDDR2_REG_2CC {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_READ_CTRL_REG_3:8;
};};
union LPDDR2_REG_2CD {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_READ_CTRL_REG_3:8;
};};
union LPDDR2_REG_2CE {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_READ_CTRL_REG_3:8;
};};
union LPDDR2_REG_2CF {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_READ_CTRL_REG_3:8;
};};
union LPDDR2_REG_2D0 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_MASTER_CTRL_REG_3:8;
};};
union LPDDR2_REG_2D1 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_MASTER_CTRL_REG_3:8;
};};
union LPDDR2_REG_2D2 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_MASTER_CTRL_REG_3:8;
};};
union LPDDR2_REG_2D3 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_MASTER_CTRL_REG_3:8;
};};
union LPDDR2_REG_2D4 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_SLAVE_CTRL_REG_3:8;
};};
union LPDDR2_REG_2D5 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_SLAVE_CTRL_REG_3:8;
};};
union LPDDR2_REG_2D6 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_SLAVE_CTRL_REG_3:8;
};};
union LPDDR2_REG_2D7 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_SLAVE_CTRL_REG_3:8;
};};
union LPDDR2_REG_2D8 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_IE_TIMING_REG_3:8;
};};
union LPDDR2_REG_2D9 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_IE_TIMING_REG_3:8;
};};
union LPDDR2_REG_2DA {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_IE_TIMING_REG_3:8;
};};
union LPDDR2_REG_2DB {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_IE_TIMING_REG_3:8;
};};
union LPDDR2_REG_2DC {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_OBS_REG_0_3:8;
};};
union LPDDR2_REG_2DD {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_OBS_REG_0_3:8;
};};
union LPDDR2_REG_2DE {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_OBS_REG_0_3:8;
};};
union LPDDR2_REG_2DF {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_OBS_REG_0_3:8;
};};
union LPDDR2_REG_2E0 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_OBS_REG_0_3:8;
};};
union LPDDR2_REG_2E1 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_OBS_REG_0_3:8;
};};
union LPDDR2_REG_2E2 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_OBS_REG_0_3:8;
};};
union LPDDR2_REG_2E3 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_OBS_REG_0_3:8;
};};
union LPDDR2_REG_2E4 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_OBS_REG_1_3:8;
};};
union LPDDR2_REG_2E5 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_OBS_REG_1_3:8;
};};
union LPDDR2_REG_2E6 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_OBS_REG_1_3:8;
};};
union LPDDR2_REG_2E7 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_OBS_REG_1_3:8;
};};
union LPDDR2_REG_2E8 {
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
union LPDDR2_REG_2E9 {
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
union LPDDR2_REG_2EA {
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
union LPDDR2_REG_2EB {
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
union LPDDR2_REG_2EC {
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
union LPDDR2_REG_2ED {
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
union LPDDR2_REG_2EE {
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
union LPDDR2_REG_2EF {
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
union LPDDR2_REG_2F0 {
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
union LPDDR2_REG_2F1 {
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
union LPDDR2_REG_2F2 {
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
union LPDDR2_REG_2F3 {
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
union LPDDR2_REG_2F4 {
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
union LPDDR2_REG_2F5 {
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
union LPDDR2_REG_2F6 {
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
union LPDDR2_REG_2F7 {
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
union LPDDR2_REG_2F8 {
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
union LPDDR2_REG_2F9 {
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
union LPDDR2_REG_2FA {
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
union LPDDR2_REG_2FB {
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
union LPDDR2_REG_2FC {
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
union LPDDR2_REG_2FD {
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
union LPDDR2_REG_2FE {
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
union LPDDR2_REG_2FF {
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
union LPDDR2_REG_300 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_DQ_TIMING_REG_4:8;
};};
union LPDDR2_REG_301 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_DQ_TIMING_REG_4:8;
};};
union LPDDR2_REG_302 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_DQ_TIMING_REG_4:8;
};};
union LPDDR2_REG_303 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_DQ_TIMING_REG_4:8;
};};
union LPDDR2_REG_304 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_DQS_TIMING_REG_4:8;
};};
union LPDDR2_REG_305 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_DQS_TIMING_REG_4:8;
};};
union LPDDR2_REG_306 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_DQS_TIMING_REG_4:8;
};};
union LPDDR2_REG_307 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_DQS_TIMING_REG_4:8;
};};
union LPDDR2_REG_308 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_GATE_LPBK_CTRL_REG_4:8;
};};
union LPDDR2_REG_309 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_GATE_LPBK_CTRL_REG_4:8;
};};
union LPDDR2_REG_30A {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_GATE_LPBK_CTRL_REG_4:8;
};};
union LPDDR2_REG_30B {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_GATE_LPBK_CTRL_REG_4:8;
};};
union LPDDR2_REG_30C {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_READ_CTRL_REG_4:8;
};};
union LPDDR2_REG_30D {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_READ_CTRL_REG_4:8;
};};
union LPDDR2_REG_30E {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_READ_CTRL_REG_4:8;
};};
union LPDDR2_REG_30F {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_READ_CTRL_REG_4:8;
};};
union LPDDR2_REG_310 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_MASTER_CTRL_REG_4:8;
};};
union LPDDR2_REG_311 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_MASTER_CTRL_REG_4:8;
};};
union LPDDR2_REG_312 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_MASTER_CTRL_REG_4:8;
};};
union LPDDR2_REG_313 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_MASTER_CTRL_REG_4:8;
};};
union LPDDR2_REG_314 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_SLAVE_CTRL_REG_4:8;
};};
union LPDDR2_REG_315 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_SLAVE_CTRL_REG_4:8;
};};
union LPDDR2_REG_316 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_SLAVE_CTRL_REG_4:8;
};};
union LPDDR2_REG_317 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_SLAVE_CTRL_REG_4:8;
};};
union LPDDR2_REG_318 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_IE_TIMING_REG_4:8;
};};
union LPDDR2_REG_319 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_IE_TIMING_REG_4:8;
};};
union LPDDR2_REG_31A {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_IE_TIMING_REG_4:8;
};};
union LPDDR2_REG_31B {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_IE_TIMING_REG_4:8;
};};
union LPDDR2_REG_31C {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_OBS_REG_0_4:8;
};};
union LPDDR2_REG_31D {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_OBS_REG_0_4:8;
};};
union LPDDR2_REG_31E {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_OBS_REG_0_4:8;
};};
union LPDDR2_REG_31F {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_OBS_REG_0_4:8;
};};
union LPDDR2_REG_320 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_OBS_REG_0_4:8;
};};
union LPDDR2_REG_321 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_OBS_REG_0_4:8;
};};
union LPDDR2_REG_322 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_OBS_REG_0_4:8;
};};
union LPDDR2_REG_323 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_OBS_REG_0_4:8;
};};
union LPDDR2_REG_324 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_OBS_REG_1_4:8;
};};
union LPDDR2_REG_325 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_OBS_REG_1_4:8;
};};
union LPDDR2_REG_326 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_OBS_REG_1_4:8;
};};
union LPDDR2_REG_327 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_DLL_OBS_REG_1_4:8;
};};
union LPDDR2_REG_328 {
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
union LPDDR2_REG_329 {
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
union LPDDR2_REG_32A {
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
union LPDDR2_REG_32B {
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
union LPDDR2_REG_32C {
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
union LPDDR2_REG_32D {
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
union LPDDR2_REG_32E {
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
union LPDDR2_REG_32F {
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
union LPDDR2_REG_330 {
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
union LPDDR2_REG_331 {
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
union LPDDR2_REG_332 {
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
union LPDDR2_REG_333 {
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
union LPDDR2_REG_334 {
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
union LPDDR2_REG_335 {
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
union LPDDR2_REG_336 {
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
union LPDDR2_REG_337 {
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
union LPDDR2_REG_338 {
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
union LPDDR2_REG_339 {
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
union LPDDR2_REG_33A {
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
union LPDDR2_REG_33B {
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
union LPDDR2_REG_33C {
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
union LPDDR2_REG_33D {
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
union LPDDR2_REG_33E {
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
union LPDDR2_REG_33F {
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
union LPDDR2_REG_340 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_CTRL_REG:8;
};};
union LPDDR2_REG_341 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_CTRL_REG:8;
};};
union LPDDR2_REG_342 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_CTRL_REG:8;
};};
union LPDDR2_REG_343 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_DEN_PHY_CTRL_REG:8;
};};
union LPDDR2_REG_344 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_PAD_DRIVE_REG_0_0:8;
};};
union LPDDR2_REG_345 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_PAD_DRIVE_REG_0_0:8;
};};
union LPDDR2_REG_346 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_PAD_DRIVE_REG_0_0:8;
};};
union LPDDR2_REG_347 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_PAD_DRIVE_REG_0_0:8;
};};
union LPDDR2_REG_348 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_PAD_DRIVE_REG_1_0:8;
};};
union LPDDR2_REG_349 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_PAD_DRIVE_REG_1_0:8;
};};
union LPDDR2_REG_34A {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_PAD_DRIVE_REG_1_0:8;
};};
union LPDDR2_REG_34B {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_PAD_DRIVE_REG_1_0:8;
};};
union LPDDR2_REG_34C {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_PAD_DRIVE_REG_2_0:8;
};};
union LPDDR2_REG_34D {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_PAD_DRIVE_REG_2_0:8;
};};
union LPDDR2_REG_34E {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_PAD_DRIVE_REG_2_0:8;
};};
union LPDDR2_REG_34F {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_PAD_DRIVE_REG_2_0:8;
};};
union LPDDR2_REG_350 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_PAD_DRIVE_REG_0_1:8;
};};
union LPDDR2_REG_351 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_PAD_DRIVE_REG_0_1:8;
};};
union LPDDR2_REG_352 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_PAD_DRIVE_REG_0_1:8;
};};
union LPDDR2_REG_353 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_PAD_DRIVE_REG_0_1:8;
};};
union LPDDR2_REG_354 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_PAD_DRIVE_REG_1_1:8;
};};
union LPDDR2_REG_355 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_PAD_DRIVE_REG_1_1:8;
};};
union LPDDR2_REG_356 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_PAD_DRIVE_REG_1_1:8;
};};
union LPDDR2_REG_357 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_PAD_DRIVE_REG_1_1:8;
};};
union LPDDR2_REG_358 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_PAD_DRIVE_REG_2_1:8;
};};
union LPDDR2_REG_359 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_PAD_DRIVE_REG_2_1:8;
};};
union LPDDR2_REG_35A {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_PAD_DRIVE_REG_2_1:8;
};};
union LPDDR2_REG_35B {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_PAD_DRIVE_REG_2_1:8;
};};
union LPDDR2_REG_35C {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_PAD_CAL_CTRL_REG_0:8;
};};
union LPDDR2_REG_35D {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_PAD_CAL_CTRL_REG_0:8;
};};
union LPDDR2_REG_35E {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_PAD_CAL_CTRL_REG_0:8;
};};
union LPDDR2_REG_35F {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_PAD_CAL_CTRL_REG_0:8;
};};
union LPDDR2_REG_360 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_PAD_CAL_CTRL_REG_1:8;
};};
union LPDDR2_REG_361 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_PAD_CAL_CTRL_REG_1:8;
};};
union LPDDR2_REG_362 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_PAD_CAL_CTRL_REG_1:8;
};};
union LPDDR2_REG_363 {
uint8_t byte;    struct {
uint8_t H2_LPDDR2_PHY_PAD_CAL_CTRL_REG_1:8;
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
union LPDDR2_REG_61 reg61;
union LPDDR2_REG_62 reg62;
union LPDDR2_REG_63 reg63;
union LPDDR2_REG_64 reg64;
union LPDDR2_REG_65 reg65;
union LPDDR2_REG_66 reg66;
union LPDDR2_REG_67 reg67;
union LPDDR2_REG_68 reg68;
union LPDDR2_REG_69 reg69;
union LPDDR2_REG_6A reg6A;
union LPDDR2_REG_6B reg6B;
union LPDDR2_REG_6C reg6C;
union LPDDR2_REG_6D reg6D;
union LPDDR2_REG_6E reg6E;
union LPDDR2_REG_6F reg6F;
union LPDDR2_REG_70 reg70;
union LPDDR2_REG_71 reg71;
union LPDDR2_REG_72 reg72;
union LPDDR2_REG_73 reg73;
union LPDDR2_REG_74 reg74;
union LPDDR2_REG_75 reg75;
union LPDDR2_REG_76 reg76;
union LPDDR2_REG_77 reg77;
union LPDDR2_REG_78 reg78;
union LPDDR2_REG_79 reg79;
union LPDDR2_REG_7A reg7A;
union LPDDR2_REG_7B reg7B;
union LPDDR2_REG_7C reg7C;
union LPDDR2_REG_7D reg7D;
union LPDDR2_REG_7E reg7E;
union LPDDR2_REG_7F reg7F;
union LPDDR2_REG_80 reg80;
union LPDDR2_REG_81 reg81;
union LPDDR2_REG_82 reg82;
union LPDDR2_REG_83 reg83;
union LPDDR2_REG_84 reg84;
union LPDDR2_REG_85 reg85;
union LPDDR2_REG_86 reg86;
union LPDDR2_REG_87 reg87;
union LPDDR2_REG_88 reg88;
union LPDDR2_REG_89 reg89;
union LPDDR2_REG_8A reg8A;
union LPDDR2_REG_8B reg8B;
union LPDDR2_REG_8C reg8C;
union LPDDR2_REG_8D reg8D;
union LPDDR2_REG_8E reg8E;
union LPDDR2_REG_8F reg8F;
union LPDDR2_REG_90 reg90;
union LPDDR2_REG_91 reg91;
union LPDDR2_REG_92 reg92;
union LPDDR2_REG_93 reg93;
union LPDDR2_REG_94 reg94;
union LPDDR2_REG_95 reg95;
union LPDDR2_REG_96 reg96;
union LPDDR2_REG_97 reg97;
union LPDDR2_REG_98 reg98;
union LPDDR2_REG_99 reg99;
union LPDDR2_REG_9A reg9A;
union LPDDR2_REG_9B reg9B;
union LPDDR2_REG_9C reg9C;
union LPDDR2_REG_9D reg9D;
union LPDDR2_REG_9E reg9E;
union LPDDR2_REG_9F reg9F;
union LPDDR2_REG_A0 regA0;
union LPDDR2_REG_A1 regA1;
union LPDDR2_REG_A2 regA2;
union LPDDR2_REG_A3 regA3;
union LPDDR2_REG_A4 regA4;
union LPDDR2_REG_A5 regA5;
union LPDDR2_REG_A6 regA6;
union LPDDR2_REG_A7 regA7;
union LPDDR2_REG_A8 regA8;
union LPDDR2_REG_A9 regA9;
union LPDDR2_REG_AA regAA;
union LPDDR2_REG_AB regAB;
union LPDDR2_REG_AC regAC;
union LPDDR2_REG_AD regAD;
union LPDDR2_REG_AE regAE;
union LPDDR2_REG_AF regAF;
union LPDDR2_REG_B0 regB0;
union LPDDR2_REG_B1 regB1;
union LPDDR2_REG_B2 regB2;
union LPDDR2_REG_B3 regB3;
union LPDDR2_REG_B4 regB4;
union LPDDR2_REG_B5 regB5;
union LPDDR2_REG_B6 regB6;
union LPDDR2_REG_B7 regB7;
union LPDDR2_REG_B8 regB8;
union LPDDR2_REG_B9 regB9;
union LPDDR2_REG_BA regBA;
union LPDDR2_REG_BB regBB;
union LPDDR2_REG_BC regBC;
union LPDDR2_REG_BD regBD;
union LPDDR2_REG_BE regBE;
union LPDDR2_REG_BF regBF;
union LPDDR2_REG_C0 regC0;
union LPDDR2_REG_C1 regC1;
union LPDDR2_REG_C2 regC2;
union LPDDR2_REG_C3 regC3;
union LPDDR2_REG_C4 regC4;
union LPDDR2_REG_C5 regC5;
union LPDDR2_REG_C6 regC6;
union LPDDR2_REG_C7 regC7;
union LPDDR2_REG_C8 regC8;
union LPDDR2_REG_C9 regC9;
union LPDDR2_REG_CA regCA;
union LPDDR2_REG_CB regCB;
union LPDDR2_REG_CC regCC;
union LPDDR2_REG_CD regCD;
union LPDDR2_REG_CE regCE;
union LPDDR2_REG_CF regCF;
union LPDDR2_REG_D0 regD0;
union LPDDR2_REG_D1 regD1;
union LPDDR2_REG_D2 regD2;
union LPDDR2_REG_D3 regD3;
union LPDDR2_REG_D4 regD4;
union LPDDR2_REG_D5 regD5;
union LPDDR2_REG_D6 regD6;
union LPDDR2_REG_D7 regD7;
union LPDDR2_REG_D8 regD8;
union LPDDR2_REG_D9 regD9;
union LPDDR2_REG_DA regDA;
union LPDDR2_REG_DB regDB;
union LPDDR2_REG_DC regDC;
union LPDDR2_REG_DD regDD;
union LPDDR2_REG_DE regDE;
union LPDDR2_REG_DF regDF;
union LPDDR2_REG_E0 regE0;
union LPDDR2_REG_E1 regE1;
union LPDDR2_REG_E2 regE2;
union LPDDR2_REG_E3 regE3;
union LPDDR2_REG_E4 regE4;
union LPDDR2_REG_E5 regE5;
union LPDDR2_REG_E6 regE6;
union LPDDR2_REG_E7 regE7;
union LPDDR2_REG_E8 regE8;
union LPDDR2_REG_E9 regE9;
union LPDDR2_REG_EA regEA;
union LPDDR2_REG_EB regEB;
union LPDDR2_REG_EC regEC;
union LPDDR2_REG_ED regED;
union LPDDR2_REG_EE regEE;
union LPDDR2_REG_EF regEF;
union LPDDR2_REG_F0 regF0;
union LPDDR2_REG_F1 regF1;
union LPDDR2_REG_F2 regF2;
union LPDDR2_REG_F3 regF3;
union LPDDR2_REG_F4 regF4;
union LPDDR2_REG_F5 regF5;
union LPDDR2_REG_F6 regF6;
union LPDDR2_REG_F7 regF7;
union LPDDR2_REG_F8 regF8;
union LPDDR2_REG_F9 regF9;
union LPDDR2_REG_FA regFA;
union LPDDR2_REG_FB regFB;
union LPDDR2_REG_FC regFC;
union LPDDR2_REG_FD regFD;
union LPDDR2_REG_FE regFE;
union LPDDR2_REG_FF regFF;
union LPDDR2_REG_100 reg100;
union LPDDR2_REG_101 reg101;
union LPDDR2_REG_102 reg102;
union LPDDR2_REG_103 reg103;
union LPDDR2_REG_104 reg104;
union LPDDR2_REG_105 reg105;
union LPDDR2_REG_106 reg106;
union LPDDR2_REG_107 reg107;
union LPDDR2_REG_108 reg108;
union LPDDR2_REG_109 reg109;
union LPDDR2_REG_10A reg10A;
union LPDDR2_REG_10B reg10B;
union LPDDR2_REG_10C reg10C;
union LPDDR2_REG_10D reg10D;
union LPDDR2_REG_10E reg10E;
union LPDDR2_REG_10F reg10F;
union LPDDR2_REG_110 reg110;
union LPDDR2_REG_111 reg111;
union LPDDR2_REG_112 reg112;
union LPDDR2_REG_113 reg113;
union LPDDR2_REG_114 reg114;
union LPDDR2_REG_115 reg115;
union LPDDR2_REG_116 reg116;
union LPDDR2_REG_117 reg117;
union LPDDR2_REG_118 reg118;
union LPDDR2_REG_119 reg119;
union LPDDR2_REG_11A reg11A;
union LPDDR2_REG_11B reg11B;
union LPDDR2_REG_11C reg11C;
union LPDDR2_REG_11D reg11D;
union LPDDR2_REG_11E reg11E;
union LPDDR2_REG_11F reg11F;
union LPDDR2_REG_120 reg120;
union LPDDR2_REG_121 reg121;
union LPDDR2_REG_122 reg122;
union LPDDR2_REG_123 reg123;
union LPDDR2_REG_124 reg124;
union LPDDR2_REG_125 reg125;
union LPDDR2_REG_126 reg126;
union LPDDR2_REG_127 reg127;
union LPDDR2_REG_128 reg128;
union LPDDR2_REG_129 reg129;
union LPDDR2_REG_12A reg12A;
union LPDDR2_REG_12B reg12B;
union LPDDR2_REG_12C reg12C;
union LPDDR2_REG_12D reg12D;
union LPDDR2_REG_12E reg12E;
union LPDDR2_REG_12F reg12F;
union LPDDR2_REG_130 reg130;
union LPDDR2_REG_131 reg131;
union LPDDR2_REG_132 reg132;
union LPDDR2_REG_133 reg133;
union LPDDR2_REG_134 reg134;
union LPDDR2_REG_135 reg135;
union LPDDR2_REG_136 reg136;
union LPDDR2_REG_137 reg137;
union LPDDR2_REG_138 reg138;
union LPDDR2_REG_139 reg139;
union LPDDR2_REG_13A reg13A;
union LPDDR2_REG_13B reg13B;
union LPDDR2_REG_13C reg13C;
union LPDDR2_REG_13D reg13D;
union LPDDR2_REG_13E reg13E;
union LPDDR2_REG_13F reg13F;
union LPDDR2_REG_140 reg140;
union LPDDR2_REG_141 reg141;
union LPDDR2_REG_142 reg142;
union LPDDR2_REG_143 reg143;
union LPDDR2_REG_144 reg144;
union LPDDR2_REG_145 reg145;
union LPDDR2_REG_146 reg146;
union LPDDR2_REG_147 reg147;
union LPDDR2_REG_148 reg148;
union LPDDR2_REG_149 reg149;
union LPDDR2_REG_14A reg14A;
union LPDDR2_REG_14B reg14B;
union LPDDR2_REG_14C reg14C;
union LPDDR2_REG_14D reg14D;
union LPDDR2_REG_14E reg14E;
union LPDDR2_REG_14F reg14F;
union LPDDR2_REG_150 reg150;
union LPDDR2_REG_151 reg151;
union LPDDR2_REG_152 reg152;
union LPDDR2_REG_153 reg153;
union LPDDR2_REG_154 reg154;
union LPDDR2_REG_155 reg155;
union LPDDR2_REG_156 reg156;
union LPDDR2_REG_157 reg157;
union LPDDR2_REG_158 reg158;
union LPDDR2_REG_159 reg159;
union LPDDR2_REG_15A reg15A;
union LPDDR2_REG_15B reg15B;
union LPDDR2_REG_15C reg15C;
union LPDDR2_REG_15D reg15D;
union LPDDR2_REG_15E reg15E;
union LPDDR2_REG_15F reg15F;
union LPDDR2_REG_160 reg160;
union LPDDR2_REG_161 reg161;
union LPDDR2_REG_162 reg162;
union LPDDR2_REG_163 reg163;
union LPDDR2_REG_164 reg164;
union LPDDR2_REG_165 reg165;
union LPDDR2_REG_166 reg166;
union LPDDR2_REG_167 reg167;
union LPDDR2_REG_168 reg168;
union LPDDR2_REG_169 reg169;
union LPDDR2_REG_16A reg16A;
union LPDDR2_REG_16B reg16B;
union LPDDR2_REG_16C reg16C;
union LPDDR2_REG_16D reg16D;
union LPDDR2_REG_16E reg16E;
union LPDDR2_REG_16F reg16F;
union LPDDR2_REG_170 reg170;
union LPDDR2_REG_171 reg171;
union LPDDR2_REG_172 reg172;
union LPDDR2_REG_173 reg173;
union LPDDR2_REG_174 reg174;
union LPDDR2_REG_175 reg175;
union LPDDR2_REG_176 reg176;
union LPDDR2_REG_177 reg177;
union LPDDR2_REG_178 reg178;
union LPDDR2_REG_179 reg179;
union LPDDR2_REG_17A reg17A;
union LPDDR2_REG_17B reg17B;
union LPDDR2_REG_17C reg17C;
union LPDDR2_REG_17D reg17D;
union LPDDR2_REG_17E reg17E;
union LPDDR2_REG_17F reg17F;
union LPDDR2_REG_180 reg180;
union LPDDR2_REG_181 reg181;
union LPDDR2_REG_182 reg182;
union LPDDR2_REG_183 reg183;
union LPDDR2_REG_184 reg184;
union LPDDR2_REG_185 reg185;
union LPDDR2_REG_186 reg186;
union LPDDR2_REG_187 reg187;
union LPDDR2_REG_188 reg188;
union LPDDR2_REG_189 reg189;
union LPDDR2_REG_18A reg18A;
union LPDDR2_REG_18B reg18B;
union LPDDR2_REG_18C reg18C;
union LPDDR2_REG_18D reg18D;
union LPDDR2_REG_18E reg18E;
union LPDDR2_REG_18F reg18F;
union LPDDR2_REG_190 reg190;
union LPDDR2_REG_191 reg191;
union LPDDR2_REG_192 reg192;
union LPDDR2_REG_193 reg193;
union LPDDR2_REG_194 reg194;
union LPDDR2_REG_195 reg195;
union LPDDR2_REG_196 reg196;
union LPDDR2_REG_197 reg197;
union LPDDR2_REG_198 reg198;
union LPDDR2_REG_199 reg199;
union LPDDR2_REG_19A reg19A;
union LPDDR2_REG_19B reg19B;
union LPDDR2_REG_19C reg19C;
union LPDDR2_REG_19D reg19D;
union LPDDR2_REG_19E reg19E;
union LPDDR2_REG_19F reg19F;
union LPDDR2_REG_1A0 reg1A0;
union LPDDR2_REG_1A1 reg1A1;
union LPDDR2_REG_1A2 reg1A2;
union LPDDR2_REG_1A3 reg1A3;
union LPDDR2_REG_1A4 reg1A4;
union LPDDR2_REG_1A5 reg1A5;
union LPDDR2_REG_1A6 reg1A6;
union LPDDR2_REG_1A7 reg1A7;
union LPDDR2_REG_1A8 reg1A8;
union LPDDR2_REG_1A9 reg1A9;
union LPDDR2_REG_1AA reg1AA;
union LPDDR2_REG_1AB reg1AB;
union LPDDR2_REG_1AC reg1AC;
union LPDDR2_REG_1AD reg1AD;
union LPDDR2_REG_1AE reg1AE;
union LPDDR2_REG_1AF reg1AF;
union LPDDR2_REG_1B0 reg1B0;
union LPDDR2_REG_1B1 reg1B1;
union LPDDR2_REG_1B2 reg1B2;
union LPDDR2_REG_1B3 reg1B3;
union LPDDR2_REG_1B4 reg1B4;
union LPDDR2_REG_1B5 reg1B5;
union LPDDR2_REG_1B6 reg1B6;
union LPDDR2_REG_1B7 reg1B7;
union LPDDR2_REG_1B8 reg1B8;
union LPDDR2_REG_1B9 reg1B9;
union LPDDR2_REG_1BA reg1BA;
union LPDDR2_REG_1BB reg1BB;
union LPDDR2_REG_1BC reg1BC;
union LPDDR2_REG_1BD reg1BD;
union LPDDR2_REG_1BE reg1BE;
union LPDDR2_REG_1BF reg1BF;
union LPDDR2_REG_1C0 reg1C0;
union LPDDR2_REG_1C1 reg1C1;
union LPDDR2_REG_1C2 reg1C2;
union LPDDR2_REG_1C3 reg1C3;
union LPDDR2_REG_1C4 reg1C4;
union LPDDR2_REG_1C5 reg1C5;
union LPDDR2_REG_1C6 reg1C6;
union LPDDR2_REG_1C7 reg1C7;
union LPDDR2_REG_1C8 reg1C8;
union LPDDR2_REG_1C9 reg1C9;
union LPDDR2_REG_1CA reg1CA;
union LPDDR2_REG_1CB reg1CB;
union LPDDR2_REG_1CC reg1CC;
union LPDDR2_REG_1CD reg1CD;
union LPDDR2_REG_1CE reg1CE;
union LPDDR2_REG_1CF reg1CF;
union LPDDR2_REG_1D0 reg1D0;
union LPDDR2_REG_1D1 reg1D1;
union LPDDR2_REG_1D2 reg1D2;
union LPDDR2_REG_1D3 reg1D3;
union LPDDR2_REG_1D4 reg1D4;
union LPDDR2_REG_1D5 reg1D5;
union LPDDR2_REG_1D6 reg1D6;
union LPDDR2_REG_1D7 reg1D7;
union LPDDR2_REG_1D8 reg1D8;
union LPDDR2_REG_1D9 reg1D9;
union LPDDR2_REG_1DA reg1DA;
union LPDDR2_REG_1DB reg1DB;
union LPDDR2_REG_1DC reg1DC;
union LPDDR2_REG_1DD reg1DD;
union LPDDR2_REG_1DE reg1DE;
union LPDDR2_REG_1DF reg1DF;
union LPDDR2_REG_1E0 reg1E0;
union LPDDR2_REG_1E1 reg1E1;
union LPDDR2_REG_1E2 reg1E2;
union LPDDR2_REG_1E3 reg1E3;
union LPDDR2_REG_1E4 reg1E4;
union LPDDR2_REG_1E5 reg1E5;
union LPDDR2_REG_1E6 reg1E6;
union LPDDR2_REG_1E7 reg1E7;
union LPDDR2_REG_1E8 reg1E8;
union LPDDR2_REG_1E9 reg1E9;
union LPDDR2_REG_1EA reg1EA;
union LPDDR2_REG_1EB reg1EB;
union LPDDR2_REG_1EC reg1EC;
union LPDDR2_REG_1ED reg1ED;
union LPDDR2_REG_1EE reg1EE;
union LPDDR2_REG_1EF reg1EF;
union LPDDR2_REG_1F0 reg1F0;
union LPDDR2_REG_1F1 reg1F1;
union LPDDR2_REG_1F2 reg1F2;
union LPDDR2_REG_1F3 reg1F3;
union LPDDR2_REG_1F4 reg1F4;
union LPDDR2_REG_1F5 reg1F5;
union LPDDR2_REG_1F6 reg1F6;
union LPDDR2_REG_1F7 reg1F7;
union LPDDR2_REG_1F8 reg1F8;
union LPDDR2_REG_1F9 reg1F9;
union LPDDR2_REG_1FA reg1FA;
union LPDDR2_REG_1FB reg1FB;
union LPDDR2_REG_1FC reg1FC;
union LPDDR2_REG_1FD reg1FD;
union LPDDR2_REG_1FE reg1FE;
union LPDDR2_REG_1FF reg1FF;
union LPDDR2_REG_200 reg200;
union LPDDR2_REG_201 reg201;
union LPDDR2_REG_202 reg202;
union LPDDR2_REG_203 reg203;
union LPDDR2_REG_204 reg204;
union LPDDR2_REG_205 reg205;
union LPDDR2_REG_206 reg206;
union LPDDR2_REG_207 reg207;
union LPDDR2_REG_208 reg208;
union LPDDR2_REG_209 reg209;
union LPDDR2_REG_20A reg20A;
union LPDDR2_REG_20B reg20B;
union LPDDR2_REG_20C reg20C;
union LPDDR2_REG_20D reg20D;
union LPDDR2_REG_20E reg20E;
union LPDDR2_REG_20F reg20F;
union LPDDR2_REG_210 reg210;
union LPDDR2_REG_211 reg211;
union LPDDR2_REG_212 reg212;
union LPDDR2_REG_213 reg213;
union LPDDR2_REG_214 reg214;
union LPDDR2_REG_215 reg215;
union LPDDR2_REG_216 reg216;
union LPDDR2_REG_217 reg217;
union LPDDR2_REG_218 reg218;
union LPDDR2_REG_219 reg219;
union LPDDR2_REG_21A reg21A;
union LPDDR2_REG_21B reg21B;
union LPDDR2_REG_21C reg21C;
union LPDDR2_REG_21D reg21D;
union LPDDR2_REG_21E reg21E;
union LPDDR2_REG_21F reg21F;
union LPDDR2_REG_220 reg220;
union LPDDR2_REG_221 reg221;
union LPDDR2_REG_222 reg222;
union LPDDR2_REG_223 reg223;
union LPDDR2_REG_224 reg224;
union LPDDR2_REG_225 reg225;
union LPDDR2_REG_226 reg226;
union LPDDR2_REG_227 reg227;
union LPDDR2_REG_228 reg228;
union LPDDR2_REG_229 reg229;
union LPDDR2_REG_22A reg22A;
union LPDDR2_REG_22B reg22B;
union LPDDR2_REG_22C reg22C;
union LPDDR2_REG_22D reg22D;
union LPDDR2_REG_22E reg22E;
union LPDDR2_REG_22F reg22F;
union LPDDR2_REG_230 reg230;
union LPDDR2_REG_231 reg231;
union LPDDR2_REG_232 reg232;
union LPDDR2_REG_233 reg233;
union LPDDR2_REG_234 reg234;
union LPDDR2_REG_235 reg235;
union LPDDR2_REG_236 reg236;
union LPDDR2_REG_237 reg237;
union LPDDR2_REG_238 reg238;
union LPDDR2_REG_239 reg239;
union LPDDR2_REG_23A reg23A;
union LPDDR2_REG_23B reg23B;
union LPDDR2_REG_23C reg23C;
union LPDDR2_REG_23D reg23D;
union LPDDR2_REG_23E reg23E;
union LPDDR2_REG_23F reg23F;
union LPDDR2_REG_240 reg240;
union LPDDR2_REG_241 reg241;
union LPDDR2_REG_242 reg242;
union LPDDR2_REG_243 reg243;
union LPDDR2_REG_244 reg244;
union LPDDR2_REG_245 reg245;
union LPDDR2_REG_246 reg246;
union LPDDR2_REG_247 reg247;
union LPDDR2_REG_248 reg248;
union LPDDR2_REG_249 reg249;
union LPDDR2_REG_24A reg24A;
union LPDDR2_REG_24B reg24B;
union LPDDR2_REG_24C reg24C;
union LPDDR2_REG_24D reg24D;
union LPDDR2_REG_24E reg24E;
union LPDDR2_REG_24F reg24F;
union LPDDR2_REG_250 reg250;
union LPDDR2_REG_251 reg251;
union LPDDR2_REG_252 reg252;
union LPDDR2_REG_253 reg253;
union LPDDR2_REG_254 reg254;
union LPDDR2_REG_255 reg255;
union LPDDR2_REG_256 reg256;
union LPDDR2_REG_257 reg257;
union LPDDR2_REG_258 reg258;
union LPDDR2_REG_259 reg259;
union LPDDR2_REG_25A reg25A;
union LPDDR2_REG_25B reg25B;
union LPDDR2_REG_25C reg25C;
union LPDDR2_REG_25D reg25D;
union LPDDR2_REG_25E reg25E;
union LPDDR2_REG_25F reg25F;
union LPDDR2_REG_260 reg260;
union LPDDR2_REG_261 reg261;
union LPDDR2_REG_262 reg262;
union LPDDR2_REG_263 reg263;
union LPDDR2_REG_264 reg264;
union LPDDR2_REG_265 reg265;
union LPDDR2_REG_266 reg266;
union LPDDR2_REG_267 reg267;
union LPDDR2_REG_268 reg268;
union LPDDR2_REG_269 reg269;
union LPDDR2_REG_26A reg26A;
union LPDDR2_REG_26B reg26B;
union LPDDR2_REG_26C reg26C;
union LPDDR2_REG_26D reg26D;
union LPDDR2_REG_26E reg26E;
union LPDDR2_REG_26F reg26F;
union LPDDR2_REG_270 reg270;
union LPDDR2_REG_271 reg271;
union LPDDR2_REG_272 reg272;
union LPDDR2_REG_273 reg273;
union LPDDR2_REG_274 reg274;
union LPDDR2_REG_275 reg275;
union LPDDR2_REG_276 reg276;
union LPDDR2_REG_277 reg277;
union LPDDR2_REG_278 reg278;
union LPDDR2_REG_279 reg279;
union LPDDR2_REG_27A reg27A;
union LPDDR2_REG_27B reg27B;
union LPDDR2_REG_27C reg27C;
union LPDDR2_REG_27D reg27D;
union LPDDR2_REG_27E reg27E;
union LPDDR2_REG_27F reg27F;
union LPDDR2_REG_280 reg280;
union LPDDR2_REG_281 reg281;
union LPDDR2_REG_282 reg282;
union LPDDR2_REG_283 reg283;
union LPDDR2_REG_284 reg284;
union LPDDR2_REG_285 reg285;
union LPDDR2_REG_286 reg286;
union LPDDR2_REG_287 reg287;
union LPDDR2_REG_288 reg288;
union LPDDR2_REG_289 reg289;
union LPDDR2_REG_28A reg28A;
union LPDDR2_REG_28B reg28B;
union LPDDR2_REG_28C reg28C;
union LPDDR2_REG_28D reg28D;
union LPDDR2_REG_28E reg28E;
union LPDDR2_REG_28F reg28F;
union LPDDR2_REG_290 reg290;
union LPDDR2_REG_291 reg291;
union LPDDR2_REG_292 reg292;
union LPDDR2_REG_293 reg293;
union LPDDR2_REG_294 reg294;
union LPDDR2_REG_295 reg295;
union LPDDR2_REG_296 reg296;
union LPDDR2_REG_297 reg297;
union LPDDR2_REG_298 reg298;
union LPDDR2_REG_299 reg299;
union LPDDR2_REG_29A reg29A;
union LPDDR2_REG_29B reg29B;
union LPDDR2_REG_29C reg29C;
union LPDDR2_REG_29D reg29D;
union LPDDR2_REG_29E reg29E;
union LPDDR2_REG_29F reg29F;
union LPDDR2_REG_2A0 reg2A0;
union LPDDR2_REG_2A1 reg2A1;
union LPDDR2_REG_2A2 reg2A2;
union LPDDR2_REG_2A3 reg2A3;
union LPDDR2_REG_2A4 reg2A4;
union LPDDR2_REG_2A5 reg2A5;
union LPDDR2_REG_2A6 reg2A6;
union LPDDR2_REG_2A7 reg2A7;
union LPDDR2_REG_2A8 reg2A8;
union LPDDR2_REG_2A9 reg2A9;
union LPDDR2_REG_2AA reg2AA;
union LPDDR2_REG_2AB reg2AB;
union LPDDR2_REG_2AC reg2AC;
union LPDDR2_REG_2AD reg2AD;
union LPDDR2_REG_2AE reg2AE;
union LPDDR2_REG_2AF reg2AF;
union LPDDR2_REG_2B0 reg2B0;
union LPDDR2_REG_2B1 reg2B1;
union LPDDR2_REG_2B2 reg2B2;
union LPDDR2_REG_2B3 reg2B3;
union LPDDR2_REG_2B4 reg2B4;
union LPDDR2_REG_2B5 reg2B5;
union LPDDR2_REG_2B6 reg2B6;
union LPDDR2_REG_2B7 reg2B7;
union LPDDR2_REG_2B8 reg2B8;
union LPDDR2_REG_2B9 reg2B9;
union LPDDR2_REG_2BA reg2BA;
union LPDDR2_REG_2BB reg2BB;
union LPDDR2_REG_2BC reg2BC;
union LPDDR2_REG_2BD reg2BD;
union LPDDR2_REG_2BE reg2BE;
union LPDDR2_REG_2BF reg2BF;
union LPDDR2_REG_2C0 reg2C0;
union LPDDR2_REG_2C1 reg2C1;
union LPDDR2_REG_2C2 reg2C2;
union LPDDR2_REG_2C3 reg2C3;
union LPDDR2_REG_2C4 reg2C4;
union LPDDR2_REG_2C5 reg2C5;
union LPDDR2_REG_2C6 reg2C6;
union LPDDR2_REG_2C7 reg2C7;
union LPDDR2_REG_2C8 reg2C8;
union LPDDR2_REG_2C9 reg2C9;
union LPDDR2_REG_2CA reg2CA;
union LPDDR2_REG_2CB reg2CB;
union LPDDR2_REG_2CC reg2CC;
union LPDDR2_REG_2CD reg2CD;
union LPDDR2_REG_2CE reg2CE;
union LPDDR2_REG_2CF reg2CF;
union LPDDR2_REG_2D0 reg2D0;
union LPDDR2_REG_2D1 reg2D1;
union LPDDR2_REG_2D2 reg2D2;
union LPDDR2_REG_2D3 reg2D3;
union LPDDR2_REG_2D4 reg2D4;
union LPDDR2_REG_2D5 reg2D5;
union LPDDR2_REG_2D6 reg2D6;
union LPDDR2_REG_2D7 reg2D7;
union LPDDR2_REG_2D8 reg2D8;
union LPDDR2_REG_2D9 reg2D9;
union LPDDR2_REG_2DA reg2DA;
union LPDDR2_REG_2DB reg2DB;
union LPDDR2_REG_2DC reg2DC;
union LPDDR2_REG_2DD reg2DD;
union LPDDR2_REG_2DE reg2DE;
union LPDDR2_REG_2DF reg2DF;
union LPDDR2_REG_2E0 reg2E0;
union LPDDR2_REG_2E1 reg2E1;
union LPDDR2_REG_2E2 reg2E2;
union LPDDR2_REG_2E3 reg2E3;
union LPDDR2_REG_2E4 reg2E4;
union LPDDR2_REG_2E5 reg2E5;
union LPDDR2_REG_2E6 reg2E6;
union LPDDR2_REG_2E7 reg2E7;
union LPDDR2_REG_2E8 reg2E8;
union LPDDR2_REG_2E9 reg2E9;
union LPDDR2_REG_2EA reg2EA;
union LPDDR2_REG_2EB reg2EB;
union LPDDR2_REG_2EC reg2EC;
union LPDDR2_REG_2ED reg2ED;
union LPDDR2_REG_2EE reg2EE;
union LPDDR2_REG_2EF reg2EF;
union LPDDR2_REG_2F0 reg2F0;
union LPDDR2_REG_2F1 reg2F1;
union LPDDR2_REG_2F2 reg2F2;
union LPDDR2_REG_2F3 reg2F3;
union LPDDR2_REG_2F4 reg2F4;
union LPDDR2_REG_2F5 reg2F5;
union LPDDR2_REG_2F6 reg2F6;
union LPDDR2_REG_2F7 reg2F7;
union LPDDR2_REG_2F8 reg2F8;
union LPDDR2_REG_2F9 reg2F9;
union LPDDR2_REG_2FA reg2FA;
union LPDDR2_REG_2FB reg2FB;
union LPDDR2_REG_2FC reg2FC;
union LPDDR2_REG_2FD reg2FD;
union LPDDR2_REG_2FE reg2FE;
union LPDDR2_REG_2FF reg2FF;
union LPDDR2_REG_300 reg300;
union LPDDR2_REG_301 reg301;
union LPDDR2_REG_302 reg302;
union LPDDR2_REG_303 reg303;
union LPDDR2_REG_304 reg304;
union LPDDR2_REG_305 reg305;
union LPDDR2_REG_306 reg306;
union LPDDR2_REG_307 reg307;
union LPDDR2_REG_308 reg308;
union LPDDR2_REG_309 reg309;
union LPDDR2_REG_30A reg30A;
union LPDDR2_REG_30B reg30B;
union LPDDR2_REG_30C reg30C;
union LPDDR2_REG_30D reg30D;
union LPDDR2_REG_30E reg30E;
union LPDDR2_REG_30F reg30F;
union LPDDR2_REG_310 reg310;
union LPDDR2_REG_311 reg311;
union LPDDR2_REG_312 reg312;
union LPDDR2_REG_313 reg313;
union LPDDR2_REG_314 reg314;
union LPDDR2_REG_315 reg315;
union LPDDR2_REG_316 reg316;
union LPDDR2_REG_317 reg317;
union LPDDR2_REG_318 reg318;
union LPDDR2_REG_319 reg319;
union LPDDR2_REG_31A reg31A;
union LPDDR2_REG_31B reg31B;
union LPDDR2_REG_31C reg31C;
union LPDDR2_REG_31D reg31D;
union LPDDR2_REG_31E reg31E;
union LPDDR2_REG_31F reg31F;
union LPDDR2_REG_320 reg320;
union LPDDR2_REG_321 reg321;
union LPDDR2_REG_322 reg322;
union LPDDR2_REG_323 reg323;
union LPDDR2_REG_324 reg324;
union LPDDR2_REG_325 reg325;
union LPDDR2_REG_326 reg326;
union LPDDR2_REG_327 reg327;
union LPDDR2_REG_328 reg328;
union LPDDR2_REG_329 reg329;
union LPDDR2_REG_32A reg32A;
union LPDDR2_REG_32B reg32B;
union LPDDR2_REG_32C reg32C;
union LPDDR2_REG_32D reg32D;
union LPDDR2_REG_32E reg32E;
union LPDDR2_REG_32F reg32F;
union LPDDR2_REG_330 reg330;
union LPDDR2_REG_331 reg331;
union LPDDR2_REG_332 reg332;
union LPDDR2_REG_333 reg333;
union LPDDR2_REG_334 reg334;
union LPDDR2_REG_335 reg335;
union LPDDR2_REG_336 reg336;
union LPDDR2_REG_337 reg337;
union LPDDR2_REG_338 reg338;
union LPDDR2_REG_339 reg339;
union LPDDR2_REG_33A reg33A;
union LPDDR2_REG_33B reg33B;
union LPDDR2_REG_33C reg33C;
union LPDDR2_REG_33D reg33D;
union LPDDR2_REG_33E reg33E;
union LPDDR2_REG_33F reg33F;
union LPDDR2_REG_340 reg340;
union LPDDR2_REG_341 reg341;
union LPDDR2_REG_342 reg342;
union LPDDR2_REG_343 reg343;
union LPDDR2_REG_344 reg344;
union LPDDR2_REG_345 reg345;
union LPDDR2_REG_346 reg346;
union LPDDR2_REG_347 reg347;
union LPDDR2_REG_348 reg348;
union LPDDR2_REG_349 reg349;
union LPDDR2_REG_34A reg34A;
union LPDDR2_REG_34B reg34B;
union LPDDR2_REG_34C reg34C;
union LPDDR2_REG_34D reg34D;
union LPDDR2_REG_34E reg34E;
union LPDDR2_REG_34F reg34F;
union LPDDR2_REG_350 reg350;
union LPDDR2_REG_351 reg351;
union LPDDR2_REG_352 reg352;
union LPDDR2_REG_353 reg353;
union LPDDR2_REG_354 reg354;
union LPDDR2_REG_355 reg355;
union LPDDR2_REG_356 reg356;
union LPDDR2_REG_357 reg357;
union LPDDR2_REG_358 reg358;
union LPDDR2_REG_359 reg359;
union LPDDR2_REG_35A reg35A;
union LPDDR2_REG_35B reg35B;
union LPDDR2_REG_35C reg35C;
union LPDDR2_REG_35D reg35D;
union LPDDR2_REG_35E reg35E;
union LPDDR2_REG_35F reg35F;
union LPDDR2_REG_360 reg360;
union LPDDR2_REG_361 reg361;
union LPDDR2_REG_362 reg362;
union LPDDR2_REG_363 reg363;
} lpddr2_t;

extern lpddr2_t lpddr2;

#endif
