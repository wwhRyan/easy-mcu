#ifndef __TX_H__
#define __TX_H__

#include <stdint.h>

#define TX_BASE_ADDRESS 0x3100
#define TX_REG_NUM 12
#define TX_REG_ADDR(reg) REG_ADDR(TX_BASE_ADDRESS,tx_t,reg)

union TX_REG_00 {
uint8_t byte;    struct {
uint8_t H3_TX_DSI_EN:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union TX_REG_01 {
uint8_t byte;    struct {
uint8_t H3_TX_DE_EN:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union TX_REG_02 {
uint8_t byte;    struct {
uint8_t H3_TX_PORT_SWAP:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union TX_REG_03 {
uint8_t byte;    struct {
uint8_t H3_TX_BIT_SWAP:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union TX_REG_04 {
uint8_t byte;    struct {
uint8_t H3_TX_PANEL_MODE:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union TX_REG_05 {
uint8_t byte;    struct {
uint8_t H3_TX_BLK_OE:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union TX_REG_06 {
uint8_t byte;    struct {
uint8_t H3_TX_BLK_DATA:8;
};};
union TX_REG_07 {
uint8_t byte;    struct {
uint8_t H3_TX_PD_RGAIN:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union TX_REG_08 {
uint8_t byte;    struct {
uint8_t H3_TX_PD_GGAIN:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union TX_REG_09 {
uint8_t byte;    struct {
uint8_t H3_TX_PD_BGAIN:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union TX_REG_0A {
uint8_t byte;    struct {
uint8_t H3_TX_PD_WGAIN:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union TX_REG_0B {
uint8_t byte;    struct {
uint8_t H3_TX_FID_SEL:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
typedef struct TX_T {
union TX_REG_00 reg00;
union TX_REG_01 reg01;
union TX_REG_02 reg02;
union TX_REG_03 reg03;
union TX_REG_04 reg04;
union TX_REG_05 reg05;
union TX_REG_06 reg06;
union TX_REG_07 reg07;
union TX_REG_08 reg08;
union TX_REG_09 reg09;
union TX_REG_0A reg0A;
union TX_REG_0B reg0B;
} tx_t;

extern tx_t tx;

#endif
