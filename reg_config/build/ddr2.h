#ifndef __DDR2_H__
#define __DDR2_H__

#include <stdint.h>

#define DDR2_BASE_ADDRESS 0x0800
#define DDR2_REG_NUM 147
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
} ddr2_t;

extern ddr2_t ddr2;

#endif
