#ifndef __IPG_H__
#define __IPG_H__

#include <stdint.h>

#define IPG_BASE_ADDRESS 0x1860
#define IPG_REG_NUM 37
#define IPG_REG_ADDR(reg) REG_ADDR(IPG_BASE_ADDRESS,ipg_t,reg)

union IPG_REG_00 {
uint8_t byte;    struct {
uint8_t IPG_DPSW:1;
uint8_t IPG_ON:1;
uint8_t  :1;
uint8_t  :1;
uint8_t IPG_R_ON:1;
uint8_t IPG_G_ON:1;
uint8_t IPG_B_ON:1;
uint8_t IPG_W_ON:1;
};};
union IPG_REG_01 {
uint8_t byte;    struct {
uint8_t IPG_R_SEL:1;
uint8_t IPG_G_SEL:1;
uint8_t IPG_B_SEL:1;
uint8_t IPG_W_SEL:1;
uint8_t IPG_COM:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union IPG_REG_02 {
uint8_t byte;    struct {
uint8_t IPG_STRP_SW:1;
uint8_t IPG_VXT_SW:1;
uint8_t IPG_SIN:1;
uint8_t IPG_MIX:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union IPG_REG_03 {
uint8_t byte;    struct {
uint8_t IPG_ANI_ON:1;
uint8_t IPG_ANI_HON:1;
uint8_t IPG_ANI_VON:1;
uint8_t  :1;
uint8_t IPG_ANI_DIRH:1;
uint8_t IPG_ANI_DIRV:1;
uint8_t  :1;
uint8_t  :1;
};};
union IPG_REG_04 {
uint8_t byte;    struct {
uint8_t IPG_PAT:4;
uint8_t IPG_ANI_SPDV:2;
uint8_t IPG_ANI_SPDH:2;
};};
union IPG_REG_05 {
uint8_t byte;    struct {
uint8_t IPG_HST:4;
uint8_t IPG_HSTP:4;
};};
union IPG_REG_06 {
uint8_t byte;    struct {
uint8_t IPG_VST:4;
uint8_t IPG_VSTP:4;
};};
union IPG_REG_07 {
uint8_t byte;    struct {
uint8_t IPG_HWST:4;
uint8_t IPG_HWSTP:4;
};};
union IPG_REG_08 {
uint8_t byte;    struct {
uint8_t IPG_VWST:4;
uint8_t IPG_VWSTP:4;
};};
union IPG_REG_09 {
uint8_t byte;    struct {
uint8_t IPG_HST:8;
};};
union IPG_REG_0A {
uint8_t byte;    struct {
uint8_t IPG_HSTP:8;
};};
union IPG_REG_0B {
uint8_t byte;    struct {
uint8_t IPG_VST:8;
};};
union IPG_REG_0C {
uint8_t byte;    struct {
uint8_t IPG_VSTP:8;
};};
union IPG_REG_0D {
uint8_t byte;    struct {
uint8_t IPG_HWST:8;
};};
union IPG_REG_0E {
uint8_t byte;    struct {
uint8_t IPG_HWSTP:8;
};};
union IPG_REG_0F {
uint8_t byte;    struct {
uint8_t IPG_VWST:8;
};};
union IPG_REG_10 {
uint8_t byte;    struct {
uint8_t IPG_VWSTP:8;
};};
union IPG_REG_11 {
uint8_t byte;    struct {
uint8_t IPG_STEP:8;
};};
union IPG_REG_12 {
uint8_t byte;    struct {
uint8_t IPG_WIDTH:8;
};};
union IPG_REG_13 {
uint8_t byte;    struct {
uint8_t IPG_VXT_WIDTH:8;
};};
union IPG_REG_14 {
uint8_t byte;    struct {
uint8_t IPG_DOT_STEP:8;
};};
union IPG_REG_15 {
uint8_t byte;    struct {
uint8_t IPG_CHK_HW:8;
};};
union IPG_REG_16 {
uint8_t byte;    struct {
uint8_t IPG_CHK_VW:8;
};};
union IPG_REG_17 {
uint8_t byte;    struct {
uint8_t IPG_BRT_STEP:8;
};};
union IPG_REG_18 {
uint8_t byte;    struct {
uint8_t IPG_BRT_INIT:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union IPG_REG_19 {
uint8_t byte;    struct {
uint8_t IPG_BRT_INIT:8;
};};
union IPG_REG_1A {
uint8_t byte;    struct {
uint8_t IPG_SIG1R:2;
uint8_t IPG_SIG2R:2;
uint8_t IPG_SIG1G:2;
uint8_t IPG_SIG2G:2;
};};
union IPG_REG_1B {
uint8_t byte;    struct {
uint8_t IPG_SIG1B:2;
uint8_t IPG_SIG2B:2;
uint8_t IPG_SIG1W:2;
uint8_t IPG_SIG2W:2;
};};
union IPG_REG_1C {
uint8_t byte;    struct {
uint8_t IPG_SIG1R:8;
};};
union IPG_REG_1D {
uint8_t byte;    struct {
uint8_t IPG_SIG2R:8;
};};
union IPG_REG_1E {
uint8_t byte;    struct {
uint8_t IPG_SIG1G:8;
};};
union IPG_REG_1F {
uint8_t byte;    struct {
uint8_t IPG_SIG2G:8;
};};
union IPG_REG_20 {
uint8_t byte;    struct {
uint8_t IPG_SIG1B:8;
};};
union IPG_REG_21 {
uint8_t byte;    struct {
uint8_t IPG_SIG2B:8;
};};
union IPG_REG_22 {
uint8_t byte;    struct {
uint8_t IPG_SIG1W:8;
};};
union IPG_REG_23 {
uint8_t byte;    struct {
uint8_t IPG_SIG2W:8;
};};
union IPG_REG_24 {
uint8_t byte;    struct {
uint8_t IPG_HVRAMP_RSEL:2;
uint8_t IPG_HVRAMP_GSEL:2;
uint8_t IPG_HVRAMP_BSEL:2;
uint8_t  :1;
uint8_t  :1;
};};
typedef struct IPG_T {
union IPG_REG_00 reg00;
union IPG_REG_01 reg01;
union IPG_REG_02 reg02;
union IPG_REG_03 reg03;
union IPG_REG_04 reg04;
union IPG_REG_05 reg05;
union IPG_REG_06 reg06;
union IPG_REG_07 reg07;
union IPG_REG_08 reg08;
union IPG_REG_09 reg09;
union IPG_REG_0A reg0A;
union IPG_REG_0B reg0B;
union IPG_REG_0C reg0C;
union IPG_REG_0D reg0D;
union IPG_REG_0E reg0E;
union IPG_REG_0F reg0F;
union IPG_REG_10 reg10;
union IPG_REG_11 reg11;
union IPG_REG_12 reg12;
union IPG_REG_13 reg13;
union IPG_REG_14 reg14;
union IPG_REG_15 reg15;
union IPG_REG_16 reg16;
union IPG_REG_17 reg17;
union IPG_REG_18 reg18;
union IPG_REG_19 reg19;
union IPG_REG_1A reg1A;
union IPG_REG_1B reg1B;
union IPG_REG_1C reg1C;
union IPG_REG_1D reg1D;
union IPG_REG_1E reg1E;
union IPG_REG_1F reg1F;
union IPG_REG_20 reg20;
union IPG_REG_21 reg21;
union IPG_REG_22 reg22;
union IPG_REG_23 reg23;
union IPG_REG_24 reg24;
} ipg_t;

extern ipg_t ipg;

#endif
