#ifndef __mini_DSI_H__
#define __mini_DSI_H__

#include <stdint.h>

#define mini_DSI_BASE_ADDRESS 0x0500
#define mini_DSI_REG_NUM 1
#define mini_DSI_REG_ADDR(reg) REG_ADDR(mini_DSI_BASE_ADDRESS,mini_dsi_t,reg)

union mini_DSI_REG_00 {
uint8_t byte;    struct {
uint8_t H3_CR_MIPITX_PWD:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t H3_CR_TX_CLK_PN_SWAP:1;
uint8_t H3_CR_TX_DE_PN_SWAP:1;
uint8_t  :2;
};};
typedef struct mini_DSI_T {
union mini_DSI_REG_00 reg00;
} mini_dsi_t;

extern mini_dsi_t mini_dsi;

#endif
