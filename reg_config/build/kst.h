#ifndef __KST_H__
#define __KST_H__

#include <stdint.h>

#define KST_BASE_ADDRESS 0x1A40
#define KST_REG_NUM 31
#define KST_REG_ADDR(reg) REG_ADDR(KST_BASE_ADDRESS,kst_t,reg)

union KST_REG_00 {
uint8_t byte;    struct {
uint8_t KST_ON:1;
uint8_t KST_ON_THRU:1;
uint8_t KST_LCZ_ON:1;
uint8_t KST_R_ADJ:1;
uint8_t KST_OUTSIDE:1;
uint8_t KST_RGT:1;
uint8_t KST_DWN:1;
uint8_t KST_STIL_ON:1;
};};
union KST_REG_01 {
uint8_t byte;    struct {
uint8_t KST_R:8;
};};
union KST_REG_02 {
uint8_t byte;    struct {
uint8_t KST_BACKSEL:1;
uint8_t KST_SPLINE_LINEAR:1;
uint8_t  :1;
uint8_t  :1;
uint8_t KST_DIST_LUT_OFF:1;
uint8_t KST_MV_LUT_OFF:1;
uint8_t KST_WP_LUT_OFF:1;
uint8_t  :1;
};};
union KST_REG_03 {
uint8_t byte;    struct {
uint8_t KST_BACKLVL_R:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union KST_REG_04 {
uint8_t byte;    struct {
uint8_t KST_BACKLVL_R:8;
};};
union KST_REG_05 {
uint8_t byte;    struct {
uint8_t KST_BACKLVL_G:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union KST_REG_06 {
uint8_t byte;    struct {
uint8_t KST_BACKLVL_G:8;
};};
union KST_REG_07 {
uint8_t byte;    struct {
uint8_t KST_BACKLVL_B:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union KST_REG_08 {
uint8_t byte;    struct {
uint8_t KST_BACKLVL_B:8;
};};
union KST_REG_09 {
uint8_t byte;    struct {
uint8_t KST_COEF_A:8;
};};
union KST_REG_0A {
uint8_t byte;    struct {
uint8_t KST_COEF_A:8;
};};
union KST_REG_0B {
uint8_t byte;    struct {
uint8_t KST_COEF_B:8;
};};
union KST_REG_0C {
uint8_t byte;    struct {
uint8_t KST_COEF_B:8;
};};
union KST_REG_0D {
uint8_t byte;    struct {
uint8_t KST_COEF_C:8;
};};
union KST_REG_0E {
uint8_t byte;    struct {
uint8_t KST_COEF_C:8;
};};
union KST_REG_0F {
uint8_t byte;    struct {
uint8_t KST_COEF_D:8;
};};
union KST_REG_10 {
uint8_t byte;    struct {
uint8_t KST_COEF_D:8;
};};
union KST_REG_11 {
uint8_t byte;    struct {
uint8_t KST_COEF_E:8;
};};
union KST_REG_12 {
uint8_t byte;    struct {
uint8_t KST_COEF_E:8;
};};
union KST_REG_13 {
uint8_t byte;    struct {
uint8_t KST_COEF_F:8;
};};
union KST_REG_14 {
uint8_t byte;    struct {
uint8_t KST_COEF_F:8;
};};
union KST_REG_15 {
uint8_t byte;    struct {
uint8_t KST_COEF_G:8;
};};
union KST_REG_16 {
uint8_t byte;    struct {
uint8_t KST_COEF_G:8;
};};
union KST_REG_17 {
uint8_t byte;    struct {
uint8_t KST_COEF_H:8;
};};
union KST_REG_18 {
uint8_t byte;    struct {
uint8_t KST_COEF_H:8;
};};
union KST_REG_19 {
uint8_t byte;    struct {
uint8_t KST_HDE_SIZE:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union KST_REG_1A {
uint8_t byte;    struct {
uint8_t KST_HDE_SIZE:8;
};};
union KST_REG_1B {
uint8_t byte;    struct {
uint8_t KST_VDE_SIZE:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union KST_REG_1C {
uint8_t byte;    struct {
uint8_t KST_VDE_SIZE:8;
};};
union KST_REG_1D {
uint8_t byte;    struct {
uint8_t KST_MV_HNUM:7;
uint8_t  :1;
};};
union KST_REG_1E {
uint8_t byte;    struct {
uint8_t KST_MV_VNUM:6;
uint8_t  :1;
uint8_t  :1;
};};
typedef struct KST_T {
union KST_REG_00 reg00;
union KST_REG_01 reg01;
union KST_REG_02 reg02;
union KST_REG_03 reg03;
union KST_REG_04 reg04;
union KST_REG_05 reg05;
union KST_REG_06 reg06;
union KST_REG_07 reg07;
union KST_REG_08 reg08;
union KST_REG_09 reg09;
union KST_REG_0A reg0A;
union KST_REG_0B reg0B;
union KST_REG_0C reg0C;
union KST_REG_0D reg0D;
union KST_REG_0E reg0E;
union KST_REG_0F reg0F;
union KST_REG_10 reg10;
union KST_REG_11 reg11;
union KST_REG_12 reg12;
union KST_REG_13 reg13;
union KST_REG_14 reg14;
union KST_REG_15 reg15;
union KST_REG_16 reg16;
union KST_REG_17 reg17;
union KST_REG_18 reg18;
union KST_REG_19 reg19;
union KST_REG_1A reg1A;
union KST_REG_1B reg1B;
union KST_REG_1C reg1C;
union KST_REG_1D reg1D;
union KST_REG_1E reg1E;
} kst_t;

extern kst_t kst;

#endif
