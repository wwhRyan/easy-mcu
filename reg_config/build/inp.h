#ifndef __INP_H__
#define __INP_H__

#include <stdint.h>

#define INP_BASE_ADDRESS 0x1430
#define INP_REG_NUM 70
#define INP_REG_ADDR(reg) REG_ADDR(INP_BASE_ADDRESS,inp_t,reg)

union INP_REG_00 {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union INP_REG_01 {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union INP_REG_02 {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union INP_REG_03 {
uint8_t byte;    struct {
uint8_t H1_INP_V_TOTAL_TIME:8;
};};
union INP_REG_04 {
uint8_t byte;    struct {
uint8_t H1_INP_V_TOTAL_TIME:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union INP_REG_05 {
uint8_t byte;    struct {
uint8_t H1_INP_H_TOTAL_TIME:8;
};};
union INP_REG_06 {
uint8_t byte;    struct {
uint8_t H1_INP_H_TOTAL_TIME:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union INP_REG_07 {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union INP_REG_08 {
uint8_t byte;    struct {
uint8_t H1_INP_VSTPOS:7;
uint8_t  :1;
};};
union INP_REG_09 {
uint8_t byte;    struct {
uint8_t H1_INP_HSTPOS:8;
};};
union INP_REG_0A {
uint8_t byte;    struct {
uint8_t H1_INP_HSTPOS:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union INP_REG_0B {
uint8_t byte;    struct {
uint8_t H1_INP_V_ADDR_TIME:8;
};};
union INP_REG_0C {
uint8_t byte;    struct {
uint8_t H1_INP_V_ADDR_TIME:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union INP_REG_0D {
uint8_t byte;    struct {
uint8_t H1_INP_H_ADDR_TIME:8;
};};
union INP_REG_0E {
uint8_t byte;    struct {
uint8_t H1_INP_H_ADDR_TIME:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union INP_REG_0F {
uint8_t byte;    struct {
uint8_t H1_INP_VPACT_DMY:8;
};};
union INP_REG_10 {
uint8_t byte;    struct {
uint8_t H1_INP_HPACT_DMY:8;
};};
union INP_REG_11 {
uint8_t byte;    struct {
uint8_t H1_INP_BLANKSEL:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union INP_REG_12 {
uint8_t byte;    struct {
uint8_t H1_INP_BLKLVL_R:8;
};};
union INP_REG_13 {
uint8_t byte;    struct {
uint8_t H1_INP_BLKLVL_R:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union INP_REG_14 {
uint8_t byte;    struct {
uint8_t H1_INP_BLKLVL_G:8;
};};
union INP_REG_15 {
uint8_t byte;    struct {
uint8_t H1_INP_BLKLVL_G:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union INP_REG_16 {
uint8_t byte;    struct {
uint8_t H1_INP_BLKLVL_B:8;
};};
union INP_REG_17 {
uint8_t byte;    struct {
uint8_t H1_INP_BLKLVL_B:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union INP_REG_18 {
uint8_t byte;    struct {
uint8_t H1_INP_SYNCREP:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union INP_REG_19 {
uint8_t byte;    struct {
uint8_t H1_INP_FORCE:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union INP_REG_1A {
uint8_t byte;    struct {
uint8_t H1_INP_VSMIN:8;
};};
union INP_REG_1B {
uint8_t byte;    struct {
uint8_t H1_INP_VSMIN:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union INP_REG_1C {
uint8_t byte;    struct {
uint8_t H1_INP_VSMAX:8;
};};
union INP_REG_1D {
uint8_t byte;    struct {
uint8_t H1_INP_VSMAX:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union INP_REG_1E {
uint8_t byte;    struct {
uint8_t H1_INP_HSMIN:8;
};};
union INP_REG_1F {
uint8_t byte;    struct {
uint8_t H1_INP_HSMIN:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union INP_REG_20 {
uint8_t byte;    struct {
uint8_t H1_INP_HSMAX:8;
};};
union INP_REG_21 {
uint8_t byte;    struct {
uint8_t H1_INP_HSMAX:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union INP_REG_22 {
uint8_t byte;    struct {
uint8_t H1_INP_VILL_LONG:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union INP_REG_23 {
uint8_t byte;    struct {
uint8_t H1_INP_VILL_SHORT:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union INP_REG_24 {
uint8_t byte;    struct {
uint8_t H1_INP_HILL_LONG:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union INP_REG_25 {
uint8_t byte;    struct {
uint8_t H1_INP_HILL_SHORT:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union INP_REG_26 {
uint8_t byte;    struct {
uint8_t H1_INP_VILL_FR:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union INP_REG_27 {
uint8_t byte;    struct {
uint8_t H1_INP_HILL_FR:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union INP_REG_28 {
uint8_t byte;    struct {
uint8_t H1_INP_ILLHOLD:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union INP_REG_29 {
uint8_t byte;    struct {
uint8_t H1_INP_MASKON:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union INP_REG_2A {
uint8_t byte;    struct {
uint8_t H1_INP_FID_MODE:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union INP_REG_2B {
uint8_t byte;    struct {
uint8_t H1_INP_FID_RST:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union INP_REG_2C {
uint8_t byte;    struct {
uint8_t H1_INP_FID_SFT:8;
};};
union INP_REG_2D {
uint8_t byte;    struct {
uint8_t H1_INP_FID_DLY:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union INP_REG_2E {
uint8_t byte;    struct {
uint8_t H1_INP_OEFID_SEL:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union INP_REG_2F {
uint8_t byte;    struct {
uint8_t H1_INP_CAPHOLD:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union INP_REG_30 {
uint8_t byte;    struct {
uint8_t H1_INP_H_CAPSEL:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union INP_REG_31 {
uint8_t byte;    struct {
uint8_t H1_INP_CAP_V_TOTAL_TIME:8;
};};
union INP_REG_32 {
uint8_t byte;    struct {
uint8_t H1_INP_CAP_V_TOTAL_TIME:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union INP_REG_33 {
uint8_t byte;    struct {
uint8_t H1_INP_CAP_H_TOTAL_TIME:8;
};};
union INP_REG_34 {
uint8_t byte;    struct {
uint8_t H1_INP_CAP_H_TOTAL_TIME:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union INP_REG_35 {
uint8_t byte;    struct {
uint8_t H1_INP_CAP_V_START_TIME:8;
};};
union INP_REG_36 {
uint8_t byte;    struct {
uint8_t H1_INP_CAP_V_START_TIME:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union INP_REG_37 {
uint8_t byte;    struct {
uint8_t H1_INP_CAP_H_START_TIME:8;
};};
union INP_REG_38 {
uint8_t byte;    struct {
uint8_t H1_INP_CAP_H_START_TIME:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union INP_REG_39 {
uint8_t byte;    struct {
uint8_t H1_INP_CAP_V_ADDR_TIME:8;
};};
union INP_REG_3A {
uint8_t byte;    struct {
uint8_t H1_INP_CAP_V_ADDR_TIME:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union INP_REG_3B {
uint8_t byte;    struct {
uint8_t H1_INP_CAP_H_ADDR_TIME:8;
};};
union INP_REG_3C {
uint8_t byte;    struct {
uint8_t H1_INP_CAP_H_ADDR_TIME:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union INP_REG_3D {
uint8_t byte;    struct {
uint8_t H1_INP_MIPI_TRNS_ERR:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union INP_REG_3E {
uint8_t byte;    struct {
uint8_t H1_INP_MIPI_TRNS_ERR_CLR:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union INP_REG_3F {
uint8_t byte;    struct {
uint8_t H1_INP_2PORT_EN:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union INP_REG_40 {
uint8_t byte;    struct {
uint8_t H1_INP_FIRST_LBSIZE:8;
};};
union INP_REG_41 {
uint8_t byte;    struct {
uint8_t H1_INP_FIRST_LBSIZE:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union INP_REG_42 {
uint8_t byte;    struct {
uint8_t H1_INP_CAP_INPUT_SEL:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union INP_REG_43 {
uint8_t byte;    struct {
uint8_t H1_INP_FIFO_STATUS_EN:4;
uint8_t H1_INP_FIFO_STATUS_EN:4;
};};
union INP_REG_44 {
uint8_t byte;    struct {
uint8_t H1_INP_DBG_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union INP_REG_45 {
uint8_t byte;    struct {
uint8_t RESERVED:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
typedef struct INP_T {
union INP_REG_00 reg00;
union INP_REG_01 reg01;
union INP_REG_02 reg02;
union INP_REG_03 reg03;
union INP_REG_04 reg04;
union INP_REG_05 reg05;
union INP_REG_06 reg06;
union INP_REG_07 reg07;
union INP_REG_08 reg08;
union INP_REG_09 reg09;
union INP_REG_0A reg0A;
union INP_REG_0B reg0B;
union INP_REG_0C reg0C;
union INP_REG_0D reg0D;
union INP_REG_0E reg0E;
union INP_REG_0F reg0F;
union INP_REG_10 reg10;
union INP_REG_11 reg11;
union INP_REG_12 reg12;
union INP_REG_13 reg13;
union INP_REG_14 reg14;
union INP_REG_15 reg15;
union INP_REG_16 reg16;
union INP_REG_17 reg17;
union INP_REG_18 reg18;
union INP_REG_19 reg19;
union INP_REG_1A reg1A;
union INP_REG_1B reg1B;
union INP_REG_1C reg1C;
union INP_REG_1D reg1D;
union INP_REG_1E reg1E;
union INP_REG_1F reg1F;
union INP_REG_20 reg20;
union INP_REG_21 reg21;
union INP_REG_22 reg22;
union INP_REG_23 reg23;
union INP_REG_24 reg24;
union INP_REG_25 reg25;
union INP_REG_26 reg26;
union INP_REG_27 reg27;
union INP_REG_28 reg28;
union INP_REG_29 reg29;
union INP_REG_2A reg2A;
union INP_REG_2B reg2B;
union INP_REG_2C reg2C;
union INP_REG_2D reg2D;
union INP_REG_2E reg2E;
union INP_REG_2F reg2F;
union INP_REG_30 reg30;
union INP_REG_31 reg31;
union INP_REG_32 reg32;
union INP_REG_33 reg33;
union INP_REG_34 reg34;
union INP_REG_35 reg35;
union INP_REG_36 reg36;
union INP_REG_37 reg37;
union INP_REG_38 reg38;
union INP_REG_39 reg39;
union INP_REG_3A reg3A;
union INP_REG_3B reg3B;
union INP_REG_3C reg3C;
union INP_REG_3D reg3D;
union INP_REG_3E reg3E;
union INP_REG_3F reg3F;
union INP_REG_40 reg40;
union INP_REG_41 reg41;
union INP_REG_42 reg42;
union INP_REG_43 reg43;
union INP_REG_44 reg44;
union INP_REG_45 reg45;
} inp_t;

extern inp_t inp;

#endif
