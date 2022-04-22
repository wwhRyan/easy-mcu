#ifndef __PI_H__
#define __PI_H__

#include <stdint.h>

#define PI_BASE_ADDRESS 0x2E00
#define PI_REG_NUM 36
#define PI_REG_ADDR(reg) REG_ADDR(PI_BASE_ADDRESS,pi_t,reg)

union PI_REG_00 {
uint8_t byte;    struct {
uint8_t PI_PAT_MODE:2;
uint8_t PI_SEQ_MODE:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union PI_REG_01 {
uint8_t byte;    struct {
uint8_t PI_PAT:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union PI_REG_02 {
uint8_t byte;    struct {
uint8_t PI_OPG_R_ON:1;
uint8_t PI_OPG_G_ON:1;
uint8_t PI_OPG_B_ON:1;
uint8_t PI_OPG_W_ON:1;
uint8_t PI_OPG_A_ON:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union PI_REG_03 {
uint8_t byte;    struct {
uint8_t PI_OPG_R_SEL:1;
uint8_t PI_OPG_G_SEL:1;
uint8_t PI_OPG_B_SEL:1;
uint8_t PI_OPG_W_SEL:1;
uint8_t PI_OPG_A_SEL:1;
uint8_t PI_OPG_COM:1;
uint8_t PI_OPG_VXT_SW:1;
uint8_t  :1;
};};
union PI_REG_04 {
uint8_t byte;    struct {
uint8_t PI_HST:4;
uint8_t PI_HSTP:4;
};};
union PI_REG_05 {
uint8_t byte;    struct {
uint8_t PI_VST:4;
uint8_t PI_VSTP:4;
};};
union PI_REG_06 {
uint8_t byte;    struct {
uint8_t PI_HWST:4;
uint8_t PI_HWSTP:4;
};};
union PI_REG_07 {
uint8_t byte;    struct {
uint8_t PI_VWST:4;
uint8_t PI_VWSTP:4;
};};
union PI_REG_08 {
uint8_t byte;    struct {
uint8_t PI_HST:8;
};};
union PI_REG_09 {
uint8_t byte;    struct {
uint8_t PI_HSTP:8;
};};
union PI_REG_0A {
uint8_t byte;    struct {
uint8_t PI_VST:8;
};};
union PI_REG_0B {
uint8_t byte;    struct {
uint8_t PI_VSTP:8;
};};
union PI_REG_0C {
uint8_t byte;    struct {
uint8_t PI_HWST:8;
};};
union PI_REG_0D {
uint8_t byte;    struct {
uint8_t PI_HWSTP:8;
};};
union PI_REG_0E {
uint8_t byte;    struct {
uint8_t PI_VWST:8;
};};
union PI_REG_0F {
uint8_t byte;    struct {
uint8_t PI_VWSTP:8;
};};
union PI_REG_10 {
uint8_t byte;    struct {
uint8_t PI_OPG_SIG1R:8;
};};
union PI_REG_11 {
uint8_t byte;    struct {
uint8_t PI_OPG_SIG2R:8;
};};
union PI_REG_12 {
uint8_t byte;    struct {
uint8_t PI_OPG_SIG1G:8;
};};
union PI_REG_13 {
uint8_t byte;    struct {
uint8_t PI_OPG_SIG2G:8;
};};
union PI_REG_14 {
uint8_t byte;    struct {
uint8_t PI_OPG_SIG1B:8;
};};
union PI_REG_15 {
uint8_t byte;    struct {
uint8_t PI_OPG_SIG2B:8;
};};
union PI_REG_16 {
uint8_t byte;    struct {
uint8_t PI_OPG_SIG1W:8;
};};
union PI_REG_17 {
uint8_t byte;    struct {
uint8_t PI_OPG_SIG2W:8;
};};
union PI_REG_18 {
uint8_t byte;    struct {
uint8_t PI_OPG_SIG1A:8;
};};
union PI_REG_19 {
uint8_t byte;    struct {
uint8_t PI_OPG_SIG2A:8;
};};
union PI_REG_1A {
uint8_t byte;    struct {
uint8_t PI_OPG_STEP:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union PI_REG_1B {
uint8_t byte;    struct {
uint8_t PI_OPG_STEP:8;
};};
union PI_REG_1C {
uint8_t byte;    struct {
uint8_t PI_OPG_WIDTH:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union PI_REG_1D {
uint8_t byte;    struct {
uint8_t PI_OPG_WIDTH:8;
};};
union PI_REG_1E {
uint8_t byte;    struct {
uint8_t PI_OPG_BRT_INIT:8;
};};
union PI_REG_1F {
uint8_t byte;    struct {
uint8_t PI_OPG_BRT_WIDTH:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union PI_REG_20 {
uint8_t byte;    struct {
uint8_t PI_OPG_BRT_STEP:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union PI_REG_21 {
uint8_t byte;    struct {
uint8_t PI_OPG_BRT_STEP:8;
};};
union PI_REG_22 {
uint8_t byte;    struct {
uint8_t PI_OPG_CHK_HW:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union PI_REG_23 {
uint8_t byte;    struct {
uint8_t PI_OPG_CHK_HW:8;
};};
typedef struct PI_T {
union PI_REG_00 reg00;
union PI_REG_01 reg01;
union PI_REG_02 reg02;
union PI_REG_03 reg03;
union PI_REG_04 reg04;
union PI_REG_05 reg05;
union PI_REG_06 reg06;
union PI_REG_07 reg07;
union PI_REG_08 reg08;
union PI_REG_09 reg09;
union PI_REG_0A reg0A;
union PI_REG_0B reg0B;
union PI_REG_0C reg0C;
union PI_REG_0D reg0D;
union PI_REG_0E reg0E;
union PI_REG_0F reg0F;
union PI_REG_10 reg10;
union PI_REG_11 reg11;
union PI_REG_12 reg12;
union PI_REG_13 reg13;
union PI_REG_14 reg14;
union PI_REG_15 reg15;
union PI_REG_16 reg16;
union PI_REG_17 reg17;
union PI_REG_18 reg18;
union PI_REG_19 reg19;
union PI_REG_1A reg1A;
union PI_REG_1B reg1B;
union PI_REG_1C reg1C;
union PI_REG_1D reg1D;
union PI_REG_1E reg1E;
union PI_REG_1F reg1F;
union PI_REG_20 reg20;
union PI_REG_21 reg21;
union PI_REG_22 reg22;
union PI_REG_23 reg23;
} pi_t;

extern pi_t pi;

#endif
