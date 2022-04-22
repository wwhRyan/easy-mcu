#ifndef __TPG_H__
#define __TPG_H__

#include <stdint.h>

#define TPG_BASE_ADDRESS 0x1480
#define TPG_REG_NUM 11
#define TPG_REG_ADDR(reg) REG_ADDR(TPG_BASE_ADDRESS,tpg_t,reg)

union TPG_REG_00 {
uint8_t byte;    struct {
uint8_t H1_TP_TEST_PAT2:4;
uint8_t H1_TP_TEST_PAT1:3;
uint8_t  :1;
};};
union TPG_REG_01 {
uint8_t byte;    struct {
uint8_t H1_TP_PURE_PAT:8;
};};
union TPG_REG_02 {
uint8_t byte;    struct {
uint8_t H1_TP_PURE_PAT:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union TPG_REG_03 {
uint8_t byte;    struct {
uint8_t H1_TP_HSIZE_CUST:8;
};};
union TPG_REG_04 {
uint8_t byte;    struct {
uint8_t H1_TP_HSIZE_CUST:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union TPG_REG_05 {
uint8_t byte;    struct {
uint8_t H1_TP_VSIZE_CUST:8;
};};
union TPG_REG_06 {
uint8_t byte;    struct {
uint8_t H1_TP_VSIZE_CUST:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union TPG_REG_07 {
uint8_t byte;    struct {
uint8_t H1_TP_HBASE_CUST:8;
};};
union TPG_REG_08 {
uint8_t byte;    struct {
uint8_t H1_TP_HBASE_CUST:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union TPG_REG_09 {
uint8_t byte;    struct {
uint8_t H1_TP_VBASE_CUST:8;
};};
union TPG_REG_0A {
uint8_t byte;    struct {
uint8_t H1_TP_VBASE_CUST:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
typedef struct TPG_T {
union TPG_REG_00 reg00;
union TPG_REG_01 reg01;
union TPG_REG_02 reg02;
union TPG_REG_03 reg03;
union TPG_REG_04 reg04;
union TPG_REG_05 reg05;
union TPG_REG_06 reg06;
union TPG_REG_07 reg07;
union TPG_REG_08 reg08;
union TPG_REG_09 reg09;
union TPG_REG_0A reg0A;
} tpg_t;

extern tpg_t tpg;

#endif
