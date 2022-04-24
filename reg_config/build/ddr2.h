#ifndef __DDR2_H__
#define __DDR2_H__

#include <stdint.h>

#define DDR2_BASE_ADDRESS 0x0800
#define DDR2_REG_NUM 398
#define DDR2_REG_ADDR(reg) REG_ADDR(DDR2_BASE_ADDRESS,ddr2_t,reg)

union DDR2_REG_00 {
uint8_t byte;    struct {
uint8_t H4_DDR2_START:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_01 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DRAM_CLASS:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_02 {
uint8_t byte;    struct {
uint8_t H4_DDR2_VERSION:8;
};};
union DDR2_REG_03 {
uint8_t byte;    struct {
uint8_t H4_DDR2_VERSION:8;
};};
union DDR2_REG_04 {
uint8_t byte;    struct {
uint8_t H4_DDR2_MAX_ROW_REG:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_05 {
uint8_t byte;    struct {
uint8_t H4_DDR2_MAX_COL_REG:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_06 {
uint8_t byte;    struct {
uint8_t H4_DDR2_MAX_CS_REG:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_07 {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_08 {
uint8_t byte;    struct {
uint8_t H4_DDR2_TINIT:8;
};};
union DDR2_REG_09 {
uint8_t byte;    struct {
uint8_t H4_DDR2_TINIT:8;
};};
union DDR2_REG_0A {
uint8_t byte;    struct {
uint8_t H4_DDR2_TINIT:8;
};};
union DDR2_REG_0B {
uint8_t byte;    struct {
uint8_t H4_DDR2_INITAREF:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_0C {
uint8_t byte;    struct {
uint8_t H4_DDR2_TCPD:8;
};};
union DDR2_REG_0D {
uint8_t byte;    struct {
uint8_t H4_DDR2_TCPD:8;
};};
union DDR2_REG_0E {
uint8_t byte;    struct {
uint8_t H4_DDR2_TDLL:8;
};};
union DDR2_REG_0F {
uint8_t byte;    struct {
uint8_t H4_DDR2_TDLL:8;
};};
union DDR2_REG_10 {
uint8_t byte;    struct {
uint8_t H4_DDR2_NO_CMD_INIT:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_11 {
uint8_t byte;    struct {
uint8_t H4_DDR2_CASLAT_LIN:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_12 {
uint8_t byte;    struct {
uint8_t H4_DDR2_WRLAT:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_13 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DUMMY:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_14 {
uint8_t byte;    struct {
uint8_t H4_DDR2_TBST_INT_INTERVAL:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_15 {
uint8_t byte;    struct {
uint8_t H4_DDR2_TCCD:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_16 {
uint8_t byte;    struct {
uint8_t H4_DDR2_TRRD:8;
};};
union DDR2_REG_17 {
uint8_t byte;    struct {
uint8_t H4_DDR2_TRC:8;
};};
union DDR2_REG_18 {
uint8_t byte;    struct {
uint8_t H4_DDR2_TRAS_MIN:8;
};};
union DDR2_REG_19 {
uint8_t byte;    struct {
uint8_t H4_DDR2_TWTR:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_1A {
uint8_t byte;    struct {
uint8_t H4_DDR2_TRP:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_1B {
uint8_t byte;    struct {
uint8_t H4_DDR2_TFAW:6;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_1C {
uint8_t byte;    struct {
uint8_t H4_DDR2_TRTP:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_1D {
uint8_t byte;    struct {
uint8_t H4_DDR2_TMRD:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_1E {
uint8_t byte;    struct {
uint8_t H4_DDR2_TMOD:8;
};};
union DDR2_REG_1F {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_20 {
uint8_t byte;    struct {
uint8_t H4_DDR2_TRAS_MAX:8;
};};
union DDR2_REG_21 {
uint8_t byte;    struct {
uint8_t H4_DDR2_TRAS_MAX:8;
};};
union DDR2_REG_22 {
uint8_t byte;    struct {
uint8_t H4_DDR2_TCKE:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_23 {
uint8_t byte;    struct {
uint8_t H4_DDR2_TCKESR:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_24 {
uint8_t byte;    struct {
uint8_t H4_DDR2_WRITEINTERP:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_25 {
uint8_t byte;    struct {
uint8_t H4_DDR2_TRCD:8;
};};
union DDR2_REG_26 {
uint8_t byte;    struct {
uint8_t H4_DDR2_TWR:6;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_27 {
uint8_t byte;    struct {
uint8_t H4_DDR2_AP:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_28 {
uint8_t byte;    struct {
uint8_t H4_DDR2_CONCURRENTAP:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_29 {
uint8_t byte;    struct {
uint8_t H4_DDR2_TRAS_LOCKOUT:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_2A {
uint8_t byte;    struct {
uint8_t H4_DDR2_TDAL:6;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_2B {
uint8_t byte;    struct {
uint8_t H4_DDR2_BSTLEN:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_2C {
uint8_t byte;    struct {
uint8_t H4_DDR2_TRP_AB:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_2D {
uint8_t byte;    struct {
uint8_t H4_DDR2_REG_DIMM_ENABLE:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_2E {
uint8_t byte;    struct {
uint8_t H4_DDR2_AREFRESH:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_2F {
uint8_t byte;    struct {
uint8_t H4_DDR2_AUTO_REFRESH_MODE:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_30 {
uint8_t byte;    struct {
uint8_t H4_DDR2_TREF_ENABLE:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_31 {
uint8_t byte;    struct {
uint8_t H4_DDR2_TRFC:8;
};};
union DDR2_REG_32 {
uint8_t byte;    struct {
uint8_t H4_DDR2_TRFC:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_33 {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_34 {
uint8_t byte;    struct {
uint8_t H4_DDR2_TREF:8;
};};
union DDR2_REG_35 {
uint8_t byte;    struct {
uint8_t H4_DDR2_TREF:6;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_36 {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_37 {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_38 {
uint8_t byte;    struct {
uint8_t H4_DDR2_TPDEX:8;
};};
union DDR2_REG_39 {
uint8_t byte;    struct {
uint8_t H4_DDR2_TPDEX:8;
};};
union DDR2_REG_3A {
uint8_t byte;    struct {
uint8_t H4_DDR2_TXARD:8;
};};
union DDR2_REG_3B {
uint8_t byte;    struct {
uint8_t H4_DDR2_TXARD:8;
};};
union DDR2_REG_3C {
uint8_t byte;    struct {
uint8_t H4_DDR2_TXARDS:8;
};};
union DDR2_REG_3D {
uint8_t byte;    struct {
uint8_t H4_DDR2_TXARDS:8;
};};
union DDR2_REG_3E {
uint8_t byte;    struct {
uint8_t H4_DDR2_TXSR:8;
};};
union DDR2_REG_3F {
uint8_t byte;    struct {
uint8_t H4_DDR2_TXSR:8;
};};
union DDR2_REG_40 {
uint8_t byte;    struct {
uint8_t H4_DDR2_TXSNR:8;
};};
union DDR2_REG_41 {
uint8_t byte;    struct {
uint8_t H4_DDR2_TXSNR:8;
};};
union DDR2_REG_42 {
uint8_t byte;    struct {
uint8_t H4_DDR2_PWRUP_SREFRESH_EXIT:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_43 {
uint8_t byte;    struct {
uint8_t H4_DDR2_SREFRESH_EXIT_NO_REFRESH:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_44 {
uint8_t byte;    struct {
uint8_t H4_DDR2_ENABLE_QUICK_SREFRESH:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_45 {
uint8_t byte;    struct {
uint8_t H4_DDR2_CKE_DELAY:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_46 {
uint8_t byte;    struct {
uint8_t H4_DDR2_LOWPOWER_REFRESH_ENABLE:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_47 {
uint8_t byte;    struct {
uint8_t H4_DDR2_CKSRE:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_48 {
uint8_t byte;    struct {
uint8_t H4_DDR2_CKSRX:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_49 {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_4A {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_4B {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_4C {
uint8_t byte;    struct {
uint8_t H4_DDR2_DUMMY:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_4D {
uint8_t byte;    struct {
uint8_t H4_DDR2_DUMMY:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_4E {
uint8_t byte;    struct {
uint8_t H4_DDR2_DUMMY:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_4F {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_50 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DUMMY:8;
};};
union DDR2_REG_51 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DUMMY:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_52 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DUMMY:8;
};};
union DDR2_REG_53 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DUMMY:8;
};};
union DDR2_REG_54 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DUMMY:6;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_55 {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_56 {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_57 {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_58 {
uint8_t byte;    struct {
uint8_t H4_DDR2_WRITE_MODEREG:8;
};};
union DDR2_REG_59 {
uint8_t byte;    struct {
uint8_t H4_DDR2_WRITE_MODEREG:8;
};};
union DDR2_REG_5A {
uint8_t byte;    struct {
uint8_t H4_DDR2_WRITE_MODEREG:8;
};};
union DDR2_REG_5B {
uint8_t byte;    struct {
uint8_t H4_DDR2_WRITE_MODEREG:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_5C {
uint8_t byte;    struct {
uint8_t H4_DDR2_MRW_STATUS:8;
};};
union DDR2_REG_5D {
uint8_t byte;    struct {
uint8_t H4_DDR2_MR0_DATA_0:8;
};};
union DDR2_REG_5E {
uint8_t byte;    struct {
uint8_t H4_DDR2_MR0_DATA_0:8;
};};
union DDR2_REG_5F {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_60 {
uint8_t byte;    struct {
uint8_t H4_DDR2_MR1_DATA_0:8;
};};
union DDR2_REG_61 {
uint8_t byte;    struct {
uint8_t H4_DDR2_MR1_DATA_0:8;
};};
union DDR2_REG_62 {
uint8_t byte;    struct {
uint8_t H4_DDR2_MR2_DATA_0:8;
};};
union DDR2_REG_63 {
uint8_t byte;    struct {
uint8_t H4_DDR2_MR2_DATA_0:8;
};};
union DDR2_REG_64 {
uint8_t byte;    struct {
uint8_t H4_DDR2_MRSINGLE_DATA_0:8;
};};
union DDR2_REG_65 {
uint8_t byte;    struct {
uint8_t H4_DDR2_MRSINGLE_DATA_0:8;
};};
union DDR2_REG_66 {
uint8_t byte;    struct {
uint8_t H4_DDR2_MR3_DATA_0:8;
};};
union DDR2_REG_67 {
uint8_t byte;    struct {
uint8_t H4_DDR2_MR3_DATA_0:8;
};};
union DDR2_REG_68 {
uint8_t byte;    struct {
uint8_t H4_DDR2_BIST_GO:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_69 {
uint8_t byte;    struct {
uint8_t H4_DDR2_BIST_RESULT:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_6A {
uint8_t byte;    struct {
uint8_t H4_DDR2_ADDR_SPACE:6;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_6B {
uint8_t byte;    struct {
uint8_t H4_DDR2_BIST_DATA_CHECK:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_6C {
uint8_t byte;    struct {
uint8_t H4_DDR2_BIST_ADDR_CHECK:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_6D {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_6E {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_6F {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_70 {
uint8_t byte;    struct {
uint8_t H4_DDR2_BIST_START_ADDRESS:8;
};};
union DDR2_REG_71 {
uint8_t byte;    struct {
uint8_t H4_DDR2_BIST_START_ADDRESS:8;
};};
union DDR2_REG_72 {
uint8_t byte;    struct {
uint8_t H4_DDR2_BIST_START_ADDRESS:8;
};};
union DDR2_REG_73 {
uint8_t byte;    struct {
uint8_t H4_DDR2_BIST_START_ADDRESS:8;
};};
union DDR2_REG_74 {
uint8_t byte;    struct {
uint8_t H4_DDR2_BIST_DATA_MASK:8;
};};
union DDR2_REG_75 {
uint8_t byte;    struct {
uint8_t H4_DDR2_BIST_DATA_MASK:8;
};};
union DDR2_REG_76 {
uint8_t byte;    struct {
uint8_t H4_DDR2_BIST_DATA_MASK:8;
};};
union DDR2_REG_77 {
uint8_t byte;    struct {
uint8_t H4_DDR2_BIST_DATA_MASK:8;
};};
union DDR2_REG_78 {
uint8_t byte;    struct {
uint8_t H4_DDR2_BIST_DATA_MASK:8;
};};
union DDR2_REG_79 {
uint8_t byte;    struct {
uint8_t H4_DDR2_BIST_DATA_MASK:8;
};};
union DDR2_REG_7A {
uint8_t byte;    struct {
uint8_t H4_DDR2_BIST_DATA_MASK:8;
};};
union DDR2_REG_7B {
uint8_t byte;    struct {
uint8_t H4_DDR2_BIST_DATA_MASK:8;
};};
union DDR2_REG_7C {
uint8_t byte;    struct {
uint8_t H4_DDR2_BANK_DIFF:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_7D {
uint8_t byte;    struct {
uint8_t H4_DDR2_ROW_DIFF:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_7E {
uint8_t byte;    struct {
uint8_t H4_DDR2_COL_DIFF:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_7F {
uint8_t byte;    struct {
uint8_t H4_DDR2_APREBIT:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_80 {
uint8_t byte;    struct {
uint8_t H4_DDR2_AGE_COUNT:8;
};};
union DDR2_REG_81 {
uint8_t byte;    struct {
uint8_t H4_DDR2_COMMAND_AGE_COUNT:8;
};};
union DDR2_REG_82 {
uint8_t byte;    struct {
uint8_t H4_DDR2_ADDR_CMP_EN:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_83 {
uint8_t byte;    struct {
uint8_t H4_DDR2_BANK_SPLIT_EN:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_84 {
uint8_t byte;    struct {
uint8_t H4_DDR2_PLACEMENT_EN:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_85 {
uint8_t byte;    struct {
uint8_t H4_DDR2_PRIORITY_EN:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_86 {
uint8_t byte;    struct {
uint8_t H4_DDR2_RW_SAME_EN:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_87 {
uint8_t byte;    struct {
uint8_t H4_DDR2_RW_SAME_PAGE_EN:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_88 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DISABLE_RW_GROUP_W_BNK_CONFLICT:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_89 {
uint8_t byte;    struct {
uint8_t H4_DDR2_NUM_Q_ENTRIES_ACT_DISABLE:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_8A {
uint8_t byte;    struct {
uint8_t H4_DDR2_SWAP_EN:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_8B {
uint8_t byte;    struct {
uint8_t H4_DDR2_DISABLE_RD_INTERLEAVE:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_8C {
uint8_t byte;    struct {
uint8_t H4_DDR2_INHIBIT_DRAM_CMD:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_8D {
uint8_t byte;    struct {
uint8_t H4_DDR2_REDUC:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_8E {
uint8_t byte;    struct {
uint8_t H4_DDR2_Q_FULLNESS:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_8F {
uint8_t byte;    struct {
uint8_t H4_DDR2_IN_ORDER_ACCEPT:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_90 {
uint8_t byte;    struct {
uint8_t H4_DDR2_CONTROLLER_BUSY:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_91 {
uint8_t byte;    struct {
uint8_t H4_DDR2_CTRLUPD_REQ:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_92 {
uint8_t byte;    struct {
uint8_t H4_DDR2_CTRLUPD_REQ_PER_AREF_EN:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_93 {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_94 {
uint8_t byte;    struct {
uint8_t H4_DDR2_INT_STATUS:8;
};};
union DDR2_REG_95 {
uint8_t byte;    struct {
uint8_t H4_DDR2_INT_STATUS:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_96 {
uint8_t byte;    struct {
uint8_t H4_DDR2_INT_ACK:8;
};};
union DDR2_REG_97 {
uint8_t byte;    struct {
uint8_t H4_DDR2_INT_ACK:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_98 {
uint8_t byte;    struct {
uint8_t H4_DDR2_INT_MASK:8;
};};
union DDR2_REG_99 {
uint8_t byte;    struct {
uint8_t H4_DDR2_INT_MASK:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_9A {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_9B {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_9C {
uint8_t byte;    struct {
uint8_t H4_DDR2_OUT_OF_RANGE_ADDR:8;
};};
union DDR2_REG_9D {
uint8_t byte;    struct {
uint8_t H4_DDR2_OUT_OF_RANGE_ADDR:8;
};};
union DDR2_REG_9E {
uint8_t byte;    struct {
uint8_t H4_DDR2_OUT_OF_RANGE_ADDR:8;
};};
union DDR2_REG_9F {
uint8_t byte;    struct {
uint8_t H4_DDR2_OUT_OF_RANGE_ADDR:8;
};};
union DDR2_REG_A0 {
uint8_t byte;    struct {
uint8_t H4_DDR2_OUT_OF_RANGE_LENGTH:8;
};};
union DDR2_REG_A1 {
uint8_t byte;    struct {
uint8_t H4_DDR2_OUT_OF_RANGE_TYPE:6;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_A2 {
uint8_t byte;    struct {
uint8_t H4_DDR2_OUT_OF_RANGE_SOURCE_ID:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_A3 {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_A4 {
uint8_t byte;    struct {
uint8_t H4_DDR2_BIST_EXP_DATA:8;
};};
union DDR2_REG_A5 {
uint8_t byte;    struct {
uint8_t H4_DDR2_BIST_EXP_DATA:8;
};};
union DDR2_REG_A6 {
uint8_t byte;    struct {
uint8_t H4_DDR2_BIST_EXP_DATA:8;
};};
union DDR2_REG_A7 {
uint8_t byte;    struct {
uint8_t H4_DDR2_BIST_EXP_DATA:8;
};};
union DDR2_REG_A8 {
uint8_t byte;    struct {
uint8_t H4_DDR2_BIST_EXP_DATA:8;
};};
union DDR2_REG_A9 {
uint8_t byte;    struct {
uint8_t H4_DDR2_BIST_EXP_DATA:8;
};};
union DDR2_REG_AA {
uint8_t byte;    struct {
uint8_t H4_DDR2_BIST_EXP_DATA:8;
};};
union DDR2_REG_AB {
uint8_t byte;    struct {
uint8_t H4_DDR2_BIST_EXP_DATA:8;
};};
union DDR2_REG_AC {
uint8_t byte;    struct {
uint8_t H4_DDR2_BIST_EXP_DATA:8;
};};
union DDR2_REG_AD {
uint8_t byte;    struct {
uint8_t H4_DDR2_BIST_EXP_DATA:8;
};};
union DDR2_REG_AE {
uint8_t byte;    struct {
uint8_t H4_DDR2_BIST_EXP_DATA:8;
};};
union DDR2_REG_AF {
uint8_t byte;    struct {
uint8_t H4_DDR2_BIST_EXP_DATA:8;
};};
union DDR2_REG_B0 {
uint8_t byte;    struct {
uint8_t H4_DDR2_BIST_EXP_DATA:8;
};};
union DDR2_REG_B1 {
uint8_t byte;    struct {
uint8_t H4_DDR2_BIST_EXP_DATA:8;
};};
union DDR2_REG_B2 {
uint8_t byte;    struct {
uint8_t H4_DDR2_BIST_EXP_DATA:8;
};};
union DDR2_REG_B3 {
uint8_t byte;    struct {
uint8_t H4_DDR2_BIST_EXP_DATA:8;
};};
union DDR2_REG_B4 {
uint8_t byte;    struct {
uint8_t H4_DDR2_BIST_FAIL_DATA:8;
};};
union DDR2_REG_B5 {
uint8_t byte;    struct {
uint8_t H4_DDR2_BIST_FAIL_DATA:8;
};};
union DDR2_REG_B6 {
uint8_t byte;    struct {
uint8_t H4_DDR2_BIST_FAIL_DATA:8;
};};
union DDR2_REG_B7 {
uint8_t byte;    struct {
uint8_t H4_DDR2_BIST_FAIL_DATA:8;
};};
union DDR2_REG_B8 {
uint8_t byte;    struct {
uint8_t H4_DDR2_BIST_FAIL_DATA:8;
};};
union DDR2_REG_B9 {
uint8_t byte;    struct {
uint8_t H4_DDR2_BIST_FAIL_DATA:8;
};};
union DDR2_REG_BA {
uint8_t byte;    struct {
uint8_t H4_DDR2_BIST_FAIL_DATA:8;
};};
union DDR2_REG_BB {
uint8_t byte;    struct {
uint8_t H4_DDR2_BIST_FAIL_DATA:8;
};};
union DDR2_REG_BC {
uint8_t byte;    struct {
uint8_t H4_DDR2_BIST_FAIL_DATA:8;
};};
union DDR2_REG_BD {
uint8_t byte;    struct {
uint8_t H4_DDR2_BIST_FAIL_DATA:8;
};};
union DDR2_REG_BE {
uint8_t byte;    struct {
uint8_t H4_DDR2_BIST_FAIL_DATA:8;
};};
union DDR2_REG_BF {
uint8_t byte;    struct {
uint8_t H4_DDR2_BIST_FAIL_DATA:8;
};};
union DDR2_REG_C0 {
uint8_t byte;    struct {
uint8_t H4_DDR2_BIST_FAIL_DATA:8;
};};
union DDR2_REG_C1 {
uint8_t byte;    struct {
uint8_t H4_DDR2_BIST_FAIL_DATA:8;
};};
union DDR2_REG_C2 {
uint8_t byte;    struct {
uint8_t H4_DDR2_BIST_FAIL_DATA:8;
};};
union DDR2_REG_C3 {
uint8_t byte;    struct {
uint8_t H4_DDR2_BIST_FAIL_DATA:8;
};};
union DDR2_REG_C4 {
uint8_t byte;    struct {
uint8_t H4_DDR2_BIST_FAIL_ADDR:8;
};};
union DDR2_REG_C5 {
uint8_t byte;    struct {
uint8_t H4_DDR2_BIST_FAIL_ADDR:8;
};};
union DDR2_REG_C6 {
uint8_t byte;    struct {
uint8_t H4_DDR2_BIST_FAIL_ADDR:8;
};};
union DDR2_REG_C7 {
uint8_t byte;    struct {
uint8_t H4_DDR2_BIST_FAIL_ADDR:8;
};};
union DDR2_REG_C8 {
uint8_t byte;    struct {
uint8_t H4_DDR2_PORT_CMD_ERROR_ADDR:8;
};};
union DDR2_REG_C9 {
uint8_t byte;    struct {
uint8_t H4_DDR2_PORT_CMD_ERROR_ADDR:8;
};};
union DDR2_REG_CA {
uint8_t byte;    struct {
uint8_t H4_DDR2_PORT_CMD_ERROR_ADDR:8;
};};
union DDR2_REG_CB {
uint8_t byte;    struct {
uint8_t H4_DDR2_PORT_CMD_ERROR_ADDR:8;
};};
union DDR2_REG_CC {
uint8_t byte;    struct {
uint8_t H4_DDR2_PORT_CMD_ERROR_ID:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_CD {
uint8_t byte;    struct {
uint8_t H4_DDR2_PORT_CMD_ERROR_TYPE:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_CE {
uint8_t byte;    struct {
uint8_t H4_DDR2_TODTL_2CMD:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_CF {
uint8_t byte;    struct {
uint8_t H4_DDR2_TODTH_WR:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_D0 {
uint8_t byte;    struct {
uint8_t H4_DDR2_ODT_EN:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_D1 {
uint8_t byte;    struct {
uint8_t H4_DDR2_ADD_ODT_CLK_R2W_SAMECS:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_D2 {
uint8_t byte;    struct {
uint8_t H4_DDR2_ADD_ODT_CLK_W2R_SAMECS:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_D3 {
uint8_t byte;    struct {
uint8_t H4_DDR2_R2R_SAMECS_DLY:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_D4 {
uint8_t byte;    struct {
uint8_t H4_DDR2_R2W_SAMECS_DLY:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_D5 {
uint8_t byte;    struct {
uint8_t H4_DDR2_W2R_SAMECS_DLY:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_D6 {
uint8_t byte;    struct {
uint8_t H4_DDR2_W2W_SAMECS_DLY:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_D7 {
uint8_t byte;    struct {
uint8_t H4_DDR2_OCD_ADJUST_PDN_CS_0:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_D8 {
uint8_t byte;    struct {
uint8_t H4_DDR2_OCD_ADJUST_PUP_CS_0:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_D9 {
uint8_t byte;    struct {
uint8_t H4_DDR2_AXI0_R_PRIORITY:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_DA {
uint8_t byte;    struct {
uint8_t H4_DDR2_AXI0_W_PRIORITY:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_DB {
uint8_t byte;    struct {
uint8_t H4_DDR2_AXI0_FIFO_TYPE_REG:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_DC {
uint8_t byte;    struct {
uint8_t H4_DDR2_CKE_STATUS:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_DD {
uint8_t byte;    struct {
uint8_t H4_DDR2_DLL_RST_DELAY:8;
};};
union DDR2_REG_DE {
uint8_t byte;    struct {
uint8_t H4_DDR2_DLL_RST_DELAY:8;
};};
union DDR2_REG_DF {
uint8_t byte;    struct {
uint8_t H4_DDR2_DLL_RST_ADJ_DLY:8;
};};
union DDR2_REG_E0 {
uint8_t byte;    struct {
uint8_t H4_DDR2_TDFI_PHY_WRLAT:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_E1 {
uint8_t byte;    struct {
uint8_t H4_DDR2_UPDATE_ERROR_STATUS:7;
uint8_t  :1;
};};
union DDR2_REG_E2 {
uint8_t byte;    struct {
uint8_t H4_DDR2_TDFI_PHY_RDLAT:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_E3 {
uint8_t byte;    struct {
uint8_t H4_DDR2_TDFI_RDDATA_EN:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_E4 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DRAM_CLK_DISABLE:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_E5 {
uint8_t byte;    struct {
uint8_t H4_DDR2_TDFI_CTRLUPD_MIN:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_E6 {
uint8_t byte;    struct {
uint8_t H4_DDR2_TDFI_CTRLUPD_MAX:8;
};};
union DDR2_REG_E7 {
uint8_t byte;    struct {
uint8_t H4_DDR2_TDFI_CTRLUPD_MAX:6;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_E8 {
uint8_t byte;    struct {
uint8_t H4_DDR2_TDFI_PHYUPD_TYPE0:8;
};};
union DDR2_REG_E9 {
uint8_t byte;    struct {
uint8_t H4_DDR2_TDFI_PHYUPD_TYPE0:8;
};};
union DDR2_REG_EA {
uint8_t byte;    struct {
uint8_t H4_DDR2_TDFI_PHYUPD_TYPE1:8;
};};
union DDR2_REG_EB {
uint8_t byte;    struct {
uint8_t H4_DDR2_TDFI_PHYUPD_TYPE1:8;
};};
union DDR2_REG_EC {
uint8_t byte;    struct {
uint8_t H4_DDR2_TDFI_PHYUPD_TYPE2:8;
};};
union DDR2_REG_ED {
uint8_t byte;    struct {
uint8_t H4_DDR2_TDFI_PHYUPD_TYPE2:8;
};};
union DDR2_REG_EE {
uint8_t byte;    struct {
uint8_t H4_DDR2_TDFI_PHYUPD_TYPE3:8;
};};
union DDR2_REG_EF {
uint8_t byte;    struct {
uint8_t H4_DDR2_TDFI_PHYUPD_TYPE3:8;
};};
union DDR2_REG_F0 {
uint8_t byte;    struct {
uint8_t H4_DDR2_TDFI_PHYUPD_RESP:8;
};};
union DDR2_REG_F1 {
uint8_t byte;    struct {
uint8_t H4_DDR2_TDFI_PHYUPD_RESP:6;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_F2 {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_F3 {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_F4 {
uint8_t byte;    struct {
uint8_t H4_DDR2_TDFI_CTRLUPD_INTERVAL:8;
};};
union DDR2_REG_F5 {
uint8_t byte;    struct {
uint8_t H4_DDR2_TDFI_CTRLUPD_INTERVAL:8;
};};
union DDR2_REG_F6 {
uint8_t byte;    struct {
uint8_t H4_DDR2_TDFI_CTRLUPD_INTERVAL:8;
};};
union DDR2_REG_F7 {
uint8_t byte;    struct {
uint8_t H4_DDR2_TDFI_CTRLUPD_INTERVAL:8;
};};
union DDR2_REG_F8 {
uint8_t byte;    struct {
uint8_t H4_DDR2_RDLAT_ADJ:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_F9 {
uint8_t byte;    struct {
uint8_t H4_DDR2_WRLAT_ADJ:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_FA {
uint8_t byte;    struct {
uint8_t H4_DDR2_TDFI_CTRL_DELAY:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_FB {
uint8_t byte;    struct {
uint8_t H4_DDR2_TDFI_DRAM_CLK_DISABLE:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_FC {
uint8_t byte;    struct {
uint8_t H4_DDR2_TDFI_DRAM_CLK_ENABLE:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_FD {
uint8_t byte;    struct {
uint8_t H4_DDR2_ODT_ALT_EN:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_FE {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_FF {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union DDR2_REG_100 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_DQ_TIMING_REG_0:8;
};};
union DDR2_REG_101 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_DQ_TIMING_REG_0:8;
};};
union DDR2_REG_102 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_DQ_TIMING_REG_0:8;
};};
union DDR2_REG_103 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_DQ_TIMING_REG_0:8;
};};
union DDR2_REG_104 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_DQS_TIMING_REG_0:8;
};};
union DDR2_REG_105 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_DQS_TIMING_REG_0:8;
};};
union DDR2_REG_106 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_DQS_TIMING_REG_0:8;
};};
union DDR2_REG_107 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_DQS_TIMING_REG_0:8;
};};
union DDR2_REG_108 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_GATE_LPBK_CTRL_REG_0:8;
};};
union DDR2_REG_109 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_GATE_LPBK_CTRL_REG_0:8;
};};
union DDR2_REG_10A {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_GATE_LPBK_CTRL_REG_0:8;
};};
union DDR2_REG_10B {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_GATE_LPBK_CTRL_REG_0:8;
};};
union DDR2_REG_10C {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_MASTER_CTRL_REG_0:8;
};};
union DDR2_REG_10D {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_MASTER_CTRL_REG_0:8;
};};
union DDR2_REG_10E {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_MASTER_CTRL_REG_0:8;
};};
union DDR2_REG_10F {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_MASTER_CTRL_REG_0:8;
};};
union DDR2_REG_110 {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_SLAVE_CTRL_REG_0:8;
};};
union DDR2_REG_111 {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_SLAVE_CTRL_REG_0:8;
};};
union DDR2_REG_112 {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_SLAVE_CTRL_REG_0:8;
};};
union DDR2_REG_113 {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_SLAVE_CTRL_REG_0:8;
};};
union DDR2_REG_114 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_OBS_REG_0_0:8;
};};
union DDR2_REG_115 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_OBS_REG_0_0:8;
};};
union DDR2_REG_116 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_OBS_REG_0_0:8;
};};
union DDR2_REG_117 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_OBS_REG_0_0:8;
};};
union DDR2_REG_118 {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_OBS_REG_0_0:8;
};};
union DDR2_REG_119 {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_OBS_REG_0_0:8;
};};
union DDR2_REG_11A {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_OBS_REG_0_0:8;
};};
union DDR2_REG_11B {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_OBS_REG_0_0:8;
};};
union DDR2_REG_11C {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_OBS_REG_1_0:8;
};};
union DDR2_REG_11D {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_OBS_REG_1_0:8;
};};
union DDR2_REG_11E {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_OBS_REG_1_0:8;
};};
union DDR2_REG_11F {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_OBS_REG_1_0:8;
};};
union DDR2_REG_120 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_DQ_TIMING_REG_1:8;
};};
union DDR2_REG_121 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_DQ_TIMING_REG_1:8;
};};
union DDR2_REG_122 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_DQ_TIMING_REG_1:8;
};};
union DDR2_REG_123 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_DQ_TIMING_REG_1:8;
};};
union DDR2_REG_124 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_DQS_TIMING_REG_1:8;
};};
union DDR2_REG_125 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_DQS_TIMING_REG_1:8;
};};
union DDR2_REG_126 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_DQS_TIMING_REG_1:8;
};};
union DDR2_REG_127 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_DQS_TIMING_REG_1:8;
};};
union DDR2_REG_128 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_GATE_LPBK_CTRL_REG_1:8;
};};
union DDR2_REG_129 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_GATE_LPBK_CTRL_REG_1:8;
};};
union DDR2_REG_12A {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_GATE_LPBK_CTRL_REG_1:8;
};};
union DDR2_REG_12B {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_GATE_LPBK_CTRL_REG_1:8;
};};
union DDR2_REG_12C {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_MASTER_CTRL_REG_1:8;
};};
union DDR2_REG_12D {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_MASTER_CTRL_REG_1:8;
};};
union DDR2_REG_12E {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_MASTER_CTRL_REG_1:8;
};};
union DDR2_REG_12F {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_MASTER_CTRL_REG_1:8;
};};
union DDR2_REG_130 {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_SLAVE_CTRL_REG_1:8;
};};
union DDR2_REG_131 {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_SLAVE_CTRL_REG_1:8;
};};
union DDR2_REG_132 {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_SLAVE_CTRL_REG_1:8;
};};
union DDR2_REG_133 {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_SLAVE_CTRL_REG_1:8;
};};
union DDR2_REG_134 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_OBS_REG_0_1:8;
};};
union DDR2_REG_135 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_OBS_REG_0_1:8;
};};
union DDR2_REG_136 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_OBS_REG_0_1:8;
};};
union DDR2_REG_137 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_OBS_REG_0_1:8;
};};
union DDR2_REG_138 {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_OBS_REG_0_1:8;
};};
union DDR2_REG_139 {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_OBS_REG_0_1:8;
};};
union DDR2_REG_13A {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_OBS_REG_0_1:8;
};};
union DDR2_REG_13B {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_OBS_REG_0_1:8;
};};
union DDR2_REG_13C {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_OBS_REG_1_1:8;
};};
union DDR2_REG_13D {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_OBS_REG_1_1:8;
};};
union DDR2_REG_13E {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_OBS_REG_1_1:8;
};};
union DDR2_REG_13F {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_OBS_REG_1_1:8;
};};
union DDR2_REG_140 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_DQ_TIMING_REG_2:8;
};};
union DDR2_REG_141 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_DQ_TIMING_REG_2:8;
};};
union DDR2_REG_142 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_DQ_TIMING_REG_2:8;
};};
union DDR2_REG_143 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_DQ_TIMING_REG_2:8;
};};
union DDR2_REG_144 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_DQS_TIMING_REG_2:8;
};};
union DDR2_REG_145 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_DQS_TIMING_REG_2:8;
};};
union DDR2_REG_146 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_DQS_TIMING_REG_2:8;
};};
union DDR2_REG_147 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_DQS_TIMING_REG_2:8;
};};
union DDR2_REG_148 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_GATE_LPBK_CTRL_REG_2:8;
};};
union DDR2_REG_149 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_GATE_LPBK_CTRL_REG_2:8;
};};
union DDR2_REG_14A {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_GATE_LPBK_CTRL_REG_2:8;
};};
union DDR2_REG_14B {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_GATE_LPBK_CTRL_REG_2:8;
};};
union DDR2_REG_14C {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_MASTER_CTRL_REG_2:8;
};};
union DDR2_REG_14D {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_MASTER_CTRL_REG_2:8;
};};
union DDR2_REG_14E {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_MASTER_CTRL_REG_2:8;
};};
union DDR2_REG_14F {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_MASTER_CTRL_REG_2:8;
};};
union DDR2_REG_150 {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_SLAVE_CTRL_REG_2:8;
};};
union DDR2_REG_151 {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_SLAVE_CTRL_REG_2:8;
};};
union DDR2_REG_152 {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_SLAVE_CTRL_REG_2:8;
};};
union DDR2_REG_153 {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_SLAVE_CTRL_REG_2:8;
};};
union DDR2_REG_154 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_OBS_REG_0_2:8;
};};
union DDR2_REG_155 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_OBS_REG_0_2:8;
};};
union DDR2_REG_156 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_OBS_REG_0_2:8;
};};
union DDR2_REG_157 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_OBS_REG_0_2:8;
};};
union DDR2_REG_158 {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_OBS_REG_0_2:8;
};};
union DDR2_REG_159 {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_OBS_REG_0_2:8;
};};
union DDR2_REG_15A {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_OBS_REG_0_2:8;
};};
union DDR2_REG_15B {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_OBS_REG_0_2:8;
};};
union DDR2_REG_15C {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_OBS_REG_1_2:8;
};};
union DDR2_REG_15D {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_OBS_REG_1_2:8;
};};
union DDR2_REG_15E {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_OBS_REG_1_2:8;
};};
union DDR2_REG_15F {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_OBS_REG_1_2:8;
};};
union DDR2_REG_160 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_DQ_TIMING_REG_3:8;
};};
union DDR2_REG_161 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_DQ_TIMING_REG_3:8;
};};
union DDR2_REG_162 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_DQ_TIMING_REG_3:8;
};};
union DDR2_REG_163 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_DQ_TIMING_REG_3:8;
};};
union DDR2_REG_164 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_DQS_TIMING_REG_3:8;
};};
union DDR2_REG_165 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_DQS_TIMING_REG_3:8;
};};
union DDR2_REG_166 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_DQS_TIMING_REG_3:8;
};};
union DDR2_REG_167 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_DQS_TIMING_REG_3:8;
};};
union DDR2_REG_168 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_GATE_LPBK_CTRL_REG_3:8;
};};
union DDR2_REG_169 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_GATE_LPBK_CTRL_REG_3:8;
};};
union DDR2_REG_16A {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_GATE_LPBK_CTRL_REG_3:8;
};};
union DDR2_REG_16B {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_GATE_LPBK_CTRL_REG_3:8;
};};
union DDR2_REG_16C {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_MASTER_CTRL_REG_3:8;
};};
union DDR2_REG_16D {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_MASTER_CTRL_REG_3:8;
};};
union DDR2_REG_16E {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_MASTER_CTRL_REG_3:8;
};};
union DDR2_REG_16F {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_MASTER_CTRL_REG_3:8;
};};
union DDR2_REG_170 {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_SLAVE_CTRL_REG_3:8;
};};
union DDR2_REG_171 {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_SLAVE_CTRL_REG_3:8;
};};
union DDR2_REG_172 {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_SLAVE_CTRL_REG_3:8;
};};
union DDR2_REG_173 {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_SLAVE_CTRL_REG_3:8;
};};
union DDR2_REG_174 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_OBS_REG_0_3:8;
};};
union DDR2_REG_175 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_OBS_REG_0_3:8;
};};
union DDR2_REG_176 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_OBS_REG_0_3:8;
};};
union DDR2_REG_177 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_OBS_REG_0_3:8;
};};
union DDR2_REG_178 {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_OBS_REG_0_3:8;
};};
union DDR2_REG_179 {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_OBS_REG_0_3:8;
};};
union DDR2_REG_17A {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_OBS_REG_0_3:8;
};};
union DDR2_REG_17B {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_OBS_REG_0_3:8;
};};
union DDR2_REG_17C {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_OBS_REG_1_3:8;
};};
union DDR2_REG_17D {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_OBS_REG_1_3:8;
};};
union DDR2_REG_17E {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_OBS_REG_1_3:8;
};};
union DDR2_REG_17F {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_DLL_OBS_REG_1_3:8;
};};
union DDR2_REG_180 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_CTRL_REG:8;
};};
union DDR2_REG_181 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_CTRL_REG:8;
};};
union DDR2_REG_182 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_CTRL_REG:8;
};};
union DDR2_REG_183 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_CTRL_REG:8;
};};
union DDR2_REG_184 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_PAD_TSEL_REG:8;
};};
union DDR2_REG_185 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_PAD_TSEL_REG:8;
};};
union DDR2_REG_186 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_PAD_TSEL_REG:8;
};};
union DDR2_REG_187 {
uint8_t byte;    struct {
uint8_t H4_DDR2_DEN_PHY_PAD_TSEL_REG:8;
};};
union DDR2_REG_188 {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_PAD_DRIVE_REG_0:8;
};};
union DDR2_REG_189 {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_PAD_DRIVE_REG_0:8;
};};
union DDR2_REG_18A {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_PAD_DRIVE_REG_0:8;
};};
union DDR2_REG_18B {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_PAD_DRIVE_REG_0:8;
};};
union DDR2_REG_18C {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_PAD_DRIVE_REG_1:8;
};};
union DDR2_REG_18D {
uint8_t byte;    struct {
uint8_t H4_DDR2_PHY_PAD_DRIVE_REG_1:8;
};};
typedef struct DDR2_T {
union DDR2_REG_00 reg00;
union DDR2_REG_01 reg01;
union DDR2_REG_02 reg02;
union DDR2_REG_03 reg03;
union DDR2_REG_04 reg04;
union DDR2_REG_05 reg05;
union DDR2_REG_06 reg06;
union DDR2_REG_07 reg07;
union DDR2_REG_08 reg08;
union DDR2_REG_09 reg09;
union DDR2_REG_0A reg0A;
union DDR2_REG_0B reg0B;
union DDR2_REG_0C reg0C;
union DDR2_REG_0D reg0D;
union DDR2_REG_0E reg0E;
union DDR2_REG_0F reg0F;
union DDR2_REG_10 reg10;
union DDR2_REG_11 reg11;
union DDR2_REG_12 reg12;
union DDR2_REG_13 reg13;
union DDR2_REG_14 reg14;
union DDR2_REG_15 reg15;
union DDR2_REG_16 reg16;
union DDR2_REG_17 reg17;
union DDR2_REG_18 reg18;
union DDR2_REG_19 reg19;
union DDR2_REG_1A reg1A;
union DDR2_REG_1B reg1B;
union DDR2_REG_1C reg1C;
union DDR2_REG_1D reg1D;
union DDR2_REG_1E reg1E;
union DDR2_REG_1F reg1F;
union DDR2_REG_20 reg20;
union DDR2_REG_21 reg21;
union DDR2_REG_22 reg22;
union DDR2_REG_23 reg23;
union DDR2_REG_24 reg24;
union DDR2_REG_25 reg25;
union DDR2_REG_26 reg26;
union DDR2_REG_27 reg27;
union DDR2_REG_28 reg28;
union DDR2_REG_29 reg29;
union DDR2_REG_2A reg2A;
union DDR2_REG_2B reg2B;
union DDR2_REG_2C reg2C;
union DDR2_REG_2D reg2D;
union DDR2_REG_2E reg2E;
union DDR2_REG_2F reg2F;
union DDR2_REG_30 reg30;
union DDR2_REG_31 reg31;
union DDR2_REG_32 reg32;
union DDR2_REG_33 reg33;
union DDR2_REG_34 reg34;
union DDR2_REG_35 reg35;
union DDR2_REG_36 reg36;
union DDR2_REG_37 reg37;
union DDR2_REG_38 reg38;
union DDR2_REG_39 reg39;
union DDR2_REG_3A reg3A;
union DDR2_REG_3B reg3B;
union DDR2_REG_3C reg3C;
union DDR2_REG_3D reg3D;
union DDR2_REG_3E reg3E;
union DDR2_REG_3F reg3F;
union DDR2_REG_40 reg40;
union DDR2_REG_41 reg41;
union DDR2_REG_42 reg42;
union DDR2_REG_43 reg43;
union DDR2_REG_44 reg44;
union DDR2_REG_45 reg45;
union DDR2_REG_46 reg46;
union DDR2_REG_47 reg47;
union DDR2_REG_48 reg48;
union DDR2_REG_49 reg49;
union DDR2_REG_4A reg4A;
union DDR2_REG_4B reg4B;
union DDR2_REG_4C reg4C;
union DDR2_REG_4D reg4D;
union DDR2_REG_4E reg4E;
union DDR2_REG_4F reg4F;
union DDR2_REG_50 reg50;
union DDR2_REG_51 reg51;
union DDR2_REG_52 reg52;
union DDR2_REG_53 reg53;
union DDR2_REG_54 reg54;
union DDR2_REG_55 reg55;
union DDR2_REG_56 reg56;
union DDR2_REG_57 reg57;
union DDR2_REG_58 reg58;
union DDR2_REG_59 reg59;
union DDR2_REG_5A reg5A;
union DDR2_REG_5B reg5B;
union DDR2_REG_5C reg5C;
union DDR2_REG_5D reg5D;
union DDR2_REG_5E reg5E;
union DDR2_REG_5F reg5F;
union DDR2_REG_60 reg60;
union DDR2_REG_61 reg61;
union DDR2_REG_62 reg62;
union DDR2_REG_63 reg63;
union DDR2_REG_64 reg64;
union DDR2_REG_65 reg65;
union DDR2_REG_66 reg66;
union DDR2_REG_67 reg67;
union DDR2_REG_68 reg68;
union DDR2_REG_69 reg69;
union DDR2_REG_6A reg6A;
union DDR2_REG_6B reg6B;
union DDR2_REG_6C reg6C;
union DDR2_REG_6D reg6D;
union DDR2_REG_6E reg6E;
union DDR2_REG_6F reg6F;
union DDR2_REG_70 reg70;
union DDR2_REG_71 reg71;
union DDR2_REG_72 reg72;
union DDR2_REG_73 reg73;
union DDR2_REG_74 reg74;
union DDR2_REG_75 reg75;
union DDR2_REG_76 reg76;
union DDR2_REG_77 reg77;
union DDR2_REG_78 reg78;
union DDR2_REG_79 reg79;
union DDR2_REG_7A reg7A;
union DDR2_REG_7B reg7B;
union DDR2_REG_7C reg7C;
union DDR2_REG_7D reg7D;
union DDR2_REG_7E reg7E;
union DDR2_REG_7F reg7F;
union DDR2_REG_80 reg80;
union DDR2_REG_81 reg81;
union DDR2_REG_82 reg82;
union DDR2_REG_83 reg83;
union DDR2_REG_84 reg84;
union DDR2_REG_85 reg85;
union DDR2_REG_86 reg86;
union DDR2_REG_87 reg87;
union DDR2_REG_88 reg88;
union DDR2_REG_89 reg89;
union DDR2_REG_8A reg8A;
union DDR2_REG_8B reg8B;
union DDR2_REG_8C reg8C;
union DDR2_REG_8D reg8D;
union DDR2_REG_8E reg8E;
union DDR2_REG_8F reg8F;
union DDR2_REG_90 reg90;
union DDR2_REG_91 reg91;
union DDR2_REG_92 reg92;
union DDR2_REG_93 reg93;
union DDR2_REG_94 reg94;
union DDR2_REG_95 reg95;
union DDR2_REG_96 reg96;
union DDR2_REG_97 reg97;
union DDR2_REG_98 reg98;
union DDR2_REG_99 reg99;
union DDR2_REG_9A reg9A;
union DDR2_REG_9B reg9B;
union DDR2_REG_9C reg9C;
union DDR2_REG_9D reg9D;
union DDR2_REG_9E reg9E;
union DDR2_REG_9F reg9F;
union DDR2_REG_A0 regA0;
union DDR2_REG_A1 regA1;
union DDR2_REG_A2 regA2;
union DDR2_REG_A3 regA3;
union DDR2_REG_A4 regA4;
union DDR2_REG_A5 regA5;
union DDR2_REG_A6 regA6;
union DDR2_REG_A7 regA7;
union DDR2_REG_A8 regA8;
union DDR2_REG_A9 regA9;
union DDR2_REG_AA regAA;
union DDR2_REG_AB regAB;
union DDR2_REG_AC regAC;
union DDR2_REG_AD regAD;
union DDR2_REG_AE regAE;
union DDR2_REG_AF regAF;
union DDR2_REG_B0 regB0;
union DDR2_REG_B1 regB1;
union DDR2_REG_B2 regB2;
union DDR2_REG_B3 regB3;
union DDR2_REG_B4 regB4;
union DDR2_REG_B5 regB5;
union DDR2_REG_B6 regB6;
union DDR2_REG_B7 regB7;
union DDR2_REG_B8 regB8;
union DDR2_REG_B9 regB9;
union DDR2_REG_BA regBA;
union DDR2_REG_BB regBB;
union DDR2_REG_BC regBC;
union DDR2_REG_BD regBD;
union DDR2_REG_BE regBE;
union DDR2_REG_BF regBF;
union DDR2_REG_C0 regC0;
union DDR2_REG_C1 regC1;
union DDR2_REG_C2 regC2;
union DDR2_REG_C3 regC3;
union DDR2_REG_C4 regC4;
union DDR2_REG_C5 regC5;
union DDR2_REG_C6 regC6;
union DDR2_REG_C7 regC7;
union DDR2_REG_C8 regC8;
union DDR2_REG_C9 regC9;
union DDR2_REG_CA regCA;
union DDR2_REG_CB regCB;
union DDR2_REG_CC regCC;
union DDR2_REG_CD regCD;
union DDR2_REG_CE regCE;
union DDR2_REG_CF regCF;
union DDR2_REG_D0 regD0;
union DDR2_REG_D1 regD1;
union DDR2_REG_D2 regD2;
union DDR2_REG_D3 regD3;
union DDR2_REG_D4 regD4;
union DDR2_REG_D5 regD5;
union DDR2_REG_D6 regD6;
union DDR2_REG_D7 regD7;
union DDR2_REG_D8 regD8;
union DDR2_REG_D9 regD9;
union DDR2_REG_DA regDA;
union DDR2_REG_DB regDB;
union DDR2_REG_DC regDC;
union DDR2_REG_DD regDD;
union DDR2_REG_DE regDE;
union DDR2_REG_DF regDF;
union DDR2_REG_E0 regE0;
union DDR2_REG_E1 regE1;
union DDR2_REG_E2 regE2;
union DDR2_REG_E3 regE3;
union DDR2_REG_E4 regE4;
union DDR2_REG_E5 regE5;
union DDR2_REG_E6 regE6;
union DDR2_REG_E7 regE7;
union DDR2_REG_E8 regE8;
union DDR2_REG_E9 regE9;
union DDR2_REG_EA regEA;
union DDR2_REG_EB regEB;
union DDR2_REG_EC regEC;
union DDR2_REG_ED regED;
union DDR2_REG_EE regEE;
union DDR2_REG_EF regEF;
union DDR2_REG_F0 regF0;
union DDR2_REG_F1 regF1;
union DDR2_REG_F2 regF2;
union DDR2_REG_F3 regF3;
union DDR2_REG_F4 regF4;
union DDR2_REG_F5 regF5;
union DDR2_REG_F6 regF6;
union DDR2_REG_F7 regF7;
union DDR2_REG_F8 regF8;
union DDR2_REG_F9 regF9;
union DDR2_REG_FA regFA;
union DDR2_REG_FB regFB;
union DDR2_REG_FC regFC;
union DDR2_REG_FD regFD;
union DDR2_REG_FE regFE;
union DDR2_REG_FF regFF;
union DDR2_REG_100 reg100;
union DDR2_REG_101 reg101;
union DDR2_REG_102 reg102;
union DDR2_REG_103 reg103;
union DDR2_REG_104 reg104;
union DDR2_REG_105 reg105;
union DDR2_REG_106 reg106;
union DDR2_REG_107 reg107;
union DDR2_REG_108 reg108;
union DDR2_REG_109 reg109;
union DDR2_REG_10A reg10A;
union DDR2_REG_10B reg10B;
union DDR2_REG_10C reg10C;
union DDR2_REG_10D reg10D;
union DDR2_REG_10E reg10E;
union DDR2_REG_10F reg10F;
union DDR2_REG_110 reg110;
union DDR2_REG_111 reg111;
union DDR2_REG_112 reg112;
union DDR2_REG_113 reg113;
union DDR2_REG_114 reg114;
union DDR2_REG_115 reg115;
union DDR2_REG_116 reg116;
union DDR2_REG_117 reg117;
union DDR2_REG_118 reg118;
union DDR2_REG_119 reg119;
union DDR2_REG_11A reg11A;
union DDR2_REG_11B reg11B;
union DDR2_REG_11C reg11C;
union DDR2_REG_11D reg11D;
union DDR2_REG_11E reg11E;
union DDR2_REG_11F reg11F;
union DDR2_REG_120 reg120;
union DDR2_REG_121 reg121;
union DDR2_REG_122 reg122;
union DDR2_REG_123 reg123;
union DDR2_REG_124 reg124;
union DDR2_REG_125 reg125;
union DDR2_REG_126 reg126;
union DDR2_REG_127 reg127;
union DDR2_REG_128 reg128;
union DDR2_REG_129 reg129;
union DDR2_REG_12A reg12A;
union DDR2_REG_12B reg12B;
union DDR2_REG_12C reg12C;
union DDR2_REG_12D reg12D;
union DDR2_REG_12E reg12E;
union DDR2_REG_12F reg12F;
union DDR2_REG_130 reg130;
union DDR2_REG_131 reg131;
union DDR2_REG_132 reg132;
union DDR2_REG_133 reg133;
union DDR2_REG_134 reg134;
union DDR2_REG_135 reg135;
union DDR2_REG_136 reg136;
union DDR2_REG_137 reg137;
union DDR2_REG_138 reg138;
union DDR2_REG_139 reg139;
union DDR2_REG_13A reg13A;
union DDR2_REG_13B reg13B;
union DDR2_REG_13C reg13C;
union DDR2_REG_13D reg13D;
union DDR2_REG_13E reg13E;
union DDR2_REG_13F reg13F;
union DDR2_REG_140 reg140;
union DDR2_REG_141 reg141;
union DDR2_REG_142 reg142;
union DDR2_REG_143 reg143;
union DDR2_REG_144 reg144;
union DDR2_REG_145 reg145;
union DDR2_REG_146 reg146;
union DDR2_REG_147 reg147;
union DDR2_REG_148 reg148;
union DDR2_REG_149 reg149;
union DDR2_REG_14A reg14A;
union DDR2_REG_14B reg14B;
union DDR2_REG_14C reg14C;
union DDR2_REG_14D reg14D;
union DDR2_REG_14E reg14E;
union DDR2_REG_14F reg14F;
union DDR2_REG_150 reg150;
union DDR2_REG_151 reg151;
union DDR2_REG_152 reg152;
union DDR2_REG_153 reg153;
union DDR2_REG_154 reg154;
union DDR2_REG_155 reg155;
union DDR2_REG_156 reg156;
union DDR2_REG_157 reg157;
union DDR2_REG_158 reg158;
union DDR2_REG_159 reg159;
union DDR2_REG_15A reg15A;
union DDR2_REG_15B reg15B;
union DDR2_REG_15C reg15C;
union DDR2_REG_15D reg15D;
union DDR2_REG_15E reg15E;
union DDR2_REG_15F reg15F;
union DDR2_REG_160 reg160;
union DDR2_REG_161 reg161;
union DDR2_REG_162 reg162;
union DDR2_REG_163 reg163;
union DDR2_REG_164 reg164;
union DDR2_REG_165 reg165;
union DDR2_REG_166 reg166;
union DDR2_REG_167 reg167;
union DDR2_REG_168 reg168;
union DDR2_REG_169 reg169;
union DDR2_REG_16A reg16A;
union DDR2_REG_16B reg16B;
union DDR2_REG_16C reg16C;
union DDR2_REG_16D reg16D;
union DDR2_REG_16E reg16E;
union DDR2_REG_16F reg16F;
union DDR2_REG_170 reg170;
union DDR2_REG_171 reg171;
union DDR2_REG_172 reg172;
union DDR2_REG_173 reg173;
union DDR2_REG_174 reg174;
union DDR2_REG_175 reg175;
union DDR2_REG_176 reg176;
union DDR2_REG_177 reg177;
union DDR2_REG_178 reg178;
union DDR2_REG_179 reg179;
union DDR2_REG_17A reg17A;
union DDR2_REG_17B reg17B;
union DDR2_REG_17C reg17C;
union DDR2_REG_17D reg17D;
union DDR2_REG_17E reg17E;
union DDR2_REG_17F reg17F;
union DDR2_REG_180 reg180;
union DDR2_REG_181 reg181;
union DDR2_REG_182 reg182;
union DDR2_REG_183 reg183;
union DDR2_REG_184 reg184;
union DDR2_REG_185 reg185;
union DDR2_REG_186 reg186;
union DDR2_REG_187 reg187;
union DDR2_REG_188 reg188;
union DDR2_REG_189 reg189;
union DDR2_REG_18A reg18A;
union DDR2_REG_18B reg18B;
union DDR2_REG_18C reg18C;
union DDR2_REG_18D reg18D;
} ddr2_t;

extern ddr2_t ddr2;

#endif
