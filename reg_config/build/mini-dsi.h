#ifndef __mini-DSI_H__
#define __mini-DSI_H__

#include <stdint.h>

#define mini-DSI_BASE_ADDRESS 0x0500
#define mini-DSI_REG_NUM 1
#define mini-DSI_REG_ADDR(reg) REG_ADDR(mini-DSI_BASE_ADDRESS,mini-dsi_t,reg)

union mini-DSI_REG_00 {
uint8_t byte;    struct {
uint8_t H3_CR_MIPITX_PWD:1;
uint8_t RESERVED:1;
uint8_t RESERVED:1;
uint8_t  :1;
uint8_t H3_CR_TX_CLK_PN_SWAP:1;
uint8_t H3_CR_TX_DE_PN_SWAP:1;
uint8_t RESERVED:2;
};};
typedef struct mini-DSI_T {
union mini-DSI_REG_00 reg00;
} mini-dsi_t;

extern mini-dsi_t mini-dsi;

#endif
