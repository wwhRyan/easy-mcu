#ifndef __BP_H__
#define __BP_H__

#include <stdint.h>

#define BP_BASE_ADDRESS 0x20C0
#define BP_REG_NUM 11
#define BP_REG_ADDR(reg) REG_ADDR(BP_BASE_ADDRESS,bp_t,reg)

union BP_REG_00 {
uint8_t byte;    struct {
uint8_t BP_ON:1;
uint8_t BP_XH:1;
uint8_t BP_CLR:1;
uint8_t BP_DWN:1;
uint8_t BP_W_RGT:1;
uint8_t BP_B_RGT:1;
uint8_t BP_G_RGT:1;
uint8_t BP_R_RGT:1;
};};
union BP_REG_01 {
uint8_t byte;    struct {
uint8_t BP_GSEL:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union BP_REG_02 {
uint8_t byte;    struct {
uint8_t BP_R_CALC:8;
};};
union BP_REG_03 {
uint8_t byte;    struct {
uint8_t BP_G_CALC:8;
};};
union BP_REG_04 {
uint8_t byte;    struct {
uint8_t BP_B_CALC:8;
};};
union BP_REG_05 {
uint8_t byte;    struct {
uint8_t BP_W_CALC:8;
};};
union BP_REG_06 {
uint8_t byte;    struct {
uint8_t BP_XH_DAT:8;
};};
union BP_REG_07 {
uint8_t byte;    struct {
uint8_t BP_H_ADDR_TIME:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union BP_REG_08 {
uint8_t byte;    struct {
uint8_t BP_H_ADDR_TIME:8;
};};
union BP_REG_09 {
uint8_t byte;    struct {
uint8_t BP_V_ADDR_TIME:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union BP_REG_0A {
uint8_t byte;    struct {
uint8_t BP_V_ADDR_TIME:8;
};};
typedef struct BP_T {
union BP_REG_00 reg00;
union BP_REG_01 reg01;
union BP_REG_02 reg02;
union BP_REG_03 reg03;
union BP_REG_04 reg04;
union BP_REG_05 reg05;
union BP_REG_06 reg06;
union BP_REG_07 reg07;
union BP_REG_08 reg08;
union BP_REG_09 reg09;
union BP_REG_0A reg0A;
} bp_t;

extern bp_t bp;

#endif
