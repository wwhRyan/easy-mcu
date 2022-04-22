#ifndef __MIPI_H__
#define __MIPI_H__

#include <stdint.h>

#define MIPI_BASE_ADDRESS 0x0300
#define MIPI_REG_NUM 512
#define MIPI_REG_ADDR(reg) REG_ADDR(MIPI_BASE_ADDRESS,mipi_t,reg)

union MIPI_REG_00 {
uint8_t byte;    struct {
uint8_t :1;
uint8_t H1_MIPI_L_LANE_NUM:1;
uint8_t :1;
uint8_t H1_MIPI_L_VC_MAIN:1;
uint8_t RESERVED:1;
uint8_t H1_MIPI_L_CD_DISABLE:1;
uint8_t RESERVED:1;
uint8_t RESERVED:1;
};};
union MIPI_REG_01 {
uint8_t byte;    struct {
uint8_t :1;
uint8_t RESERVED:1;
uint8_t :1;
uint8_t RESERVED:1;
uint8_t RESERVED:1;
uint8_t RESERVED:1;
uint8_t H1_MIPI_L_ECC_IGNORE:1;
uint8_t H1_MIPI_L_RXCRC_ENABLE:1;
};};
union MIPI_REG_02 {
uint8_t byte;    struct {
uint8_t RESERVED:1;
uint8_t H1_MIPI_L_NGATECLK:1;
uint8_t H1_MIPI_L_HS_ZERO_EN:1;
uint8_t H1_MIPI_L_HS_WAIT_EN:1;
uint8_t RESERVED:1;
uint8_t RESERVED:1;
uint8_t RESERVED:1;
uint8_t RESERVED:1;
};};
union MIPI_REG_03 {
uint8_t byte;    struct {
uint8_t :1;
uint8_t H1_MIPI_L_WD_TIMER:1;
uint8_t H1_MIPI_L_RSTTRIG_I:1;
uint8_t H1_MIPI_L_FIFO_BLANK:1;
uint8_t H1_MIPI_L_PN_CHANGE:1;
uint8_t H1_MIPI_L_RSTTRIG:1;
uint8_t :1;
uint8_t RESERVED:1;
};};
union MIPI_REG_04 {
uint8_t byte;    struct {
uint8_t RESERVED:1;
uint8_t H1_MIPI_L_SWCTRL_CLP:1;
uint8_t H1_MIPI_L_SWCTRL_CHSR:1;
uint8_t H1_MIPI_L_SWCTRL_CHS:1;
uint8_t H1_MIPI_L_SWCTRL_DLP:1;
uint8_t H1_MIPI_L_SWCTRL_DHSR:1;
uint8_t H1_MIPI_L_SWCTRL_DHSL:1;
uint8_t H1_MIPI_L_SWCTRL_DHS:1;
};};
union MIPI_REG_05 {
uint8_t byte;    struct {
uint8_t H1_MIPI_L_SWCTRL_DTX:1;
uint8_t H1_MIPI_L_SWCTRL_DTXO:1;
uint8_t H1_MIPI_L_SWCTRL_CD:1;
uint8_t RESERVED:1;
uint8_t RESERVED:1;
uint8_t :1;
uint8_t H1_MIPI_L_DBG_MUX_SW:1;
uint8_t H1_MIPI_L_CTRLPHYSW:1;
};};
union MIPI_REG_06 {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t H1_MIPI_L_HS_SETTLE:1;
uint8_t H1_MIPI_L_HS_D4_INV:1;
uint8_t :1;
uint8_t H1_MIPI_L_INI_TIME:1;
uint8_t :1;
uint8_t H1_MIPI_L_SOT_TOLAN:1;
};};
union MIPI_REG_07 {
uint8_t byte;    struct {
uint8_t H1_MIPI_L_ULPS_BYDL0:1;
uint8_t H1_MIPI_L_EOTPKT_EN:1;
uint8_t H1_MIPI_L_HSCLK_D2SEN:1;
uint8_t H1_MIPI_L_HSCLK_D2SEN_OPT:1;
uint8_t RESERVED:1;
uint8_t RESERVED:1;
uint8_t H1_MIPI_L_CD_DLY:1;
uint8_t H1_MIPI_L_VC_CHECK_EN:1;
};};
union MIPI_REG_08 {
uint8_t byte;    struct {
uint8_t RESERVED:1;
uint8_t RESERVED:1;
uint8_t RESERVED:1;
uint8_t :1;
uint8_t RESERVED:1;
uint8_t RESERVED:1;
uint8_t H1_MIPI_L_TXCRC_ENABLE:1;
uint8_t RESERVED:1;
};};
union MIPI_REG_09 {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t :1;
uint8_t :1;
uint8_t :1;
uint8_t :1;
uint8_t :1;
uint8_t RESERVED:1;
};};
union MIPI_REG_0A {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t :1;
uint8_t :1;
uint8_t :1;
uint8_t :1;
uint8_t :1;
uint8_t RESERVED:1;
};};
union MIPI_REG_0B {
uint8_t byte;    struct {
uint8_t RESERVED:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_0C {
uint8_t byte;    struct {
uint8_t H1_MIPI_L_DSI_ENABLE:1;
uint8_t :1;
uint8_t :1;
uint8_t :1;
uint8_t :1;
uint8_t :1;
uint8_t :1;
uint8_t RESERVED:1;
};};
union MIPI_REG_0D {
uint8_t byte;    struct {
uint8_t H1_MIPI_L_DBG_SEL_MIPI:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t :1;
uint8_t :1;
uint8_t :1;
uint8_t H1_MIPI_L_PROB_MIPI:1;
};};
union MIPI_REG_0E {
uint8_t byte;    struct {
uint8_t H1_MIPI_L_DBG_SEL_DSI2AHB:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t :1;
uint8_t :1;
uint8_t :1;
uint8_t H1_MIPI_L_PROB_DSI2AHB:1;
};};
union MIPI_REG_0F {
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
union MIPI_REG_10 {
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
union MIPI_REG_11 {
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
union MIPI_REG_12 {
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
union MIPI_REG_13 {
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
union MIPI_REG_14 {
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
union MIPI_REG_15 {
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
union MIPI_REG_16 {
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
union MIPI_REG_17 {
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
union MIPI_REG_18 {
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
union MIPI_REG_19 {
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
union MIPI_REG_1A {
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
union MIPI_REG_1B {
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
union MIPI_REG_1C {
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
union MIPI_REG_1D {
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
union MIPI_REG_1E {
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
union MIPI_REG_1F {
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
union MIPI_REG_20 {
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
union MIPI_REG_21 {
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
union MIPI_REG_22 {
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
union MIPI_REG_23 {
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
union MIPI_REG_24 {
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
union MIPI_REG_25 {
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
union MIPI_REG_26 {
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
union MIPI_REG_27 {
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
union MIPI_REG_28 {
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
union MIPI_REG_29 {
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
union MIPI_REG_2A {
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
union MIPI_REG_2B {
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
union MIPI_REG_2C {
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
union MIPI_REG_2D {
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
union MIPI_REG_2E {
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
union MIPI_REG_2F {
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
union MIPI_REG_30 {
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
union MIPI_REG_31 {
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
union MIPI_REG_32 {
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
union MIPI_REG_33 {
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
union MIPI_REG_34 {
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
union MIPI_REG_35 {
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
union MIPI_REG_36 {
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
union MIPI_REG_37 {
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
union MIPI_REG_38 {
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
union MIPI_REG_39 {
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
union MIPI_REG_3A {
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
union MIPI_REG_3B {
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
union MIPI_REG_3C {
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
union MIPI_REG_3D {
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
union MIPI_REG_3E {
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
union MIPI_REG_3F {
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
union MIPI_REG_40 {
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
union MIPI_REG_41 {
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
union MIPI_REG_42 {
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
union MIPI_REG_43 {
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
union MIPI_REG_44 {
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
union MIPI_REG_45 {
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
union MIPI_REG_46 {
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
union MIPI_REG_47 {
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
union MIPI_REG_48 {
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
union MIPI_REG_49 {
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
union MIPI_REG_4A {
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
union MIPI_REG_4B {
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
union MIPI_REG_4C {
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
union MIPI_REG_4D {
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
union MIPI_REG_4E {
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
union MIPI_REG_4F {
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
union MIPI_REG_50 {
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
union MIPI_REG_51 {
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
union MIPI_REG_52 {
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
union MIPI_REG_53 {
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
union MIPI_REG_54 {
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
union MIPI_REG_55 {
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
union MIPI_REG_56 {
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
union MIPI_REG_57 {
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
union MIPI_REG_58 {
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
union MIPI_REG_59 {
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
union MIPI_REG_5A {
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
union MIPI_REG_5B {
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
union MIPI_REG_5C {
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
union MIPI_REG_5D {
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
union MIPI_REG_5E {
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
union MIPI_REG_5F {
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
union MIPI_REG_60 {
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
union MIPI_REG_61 {
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
union MIPI_REG_62 {
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
union MIPI_REG_63 {
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
union MIPI_REG_64 {
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
union MIPI_REG_65 {
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
union MIPI_REG_66 {
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
union MIPI_REG_67 {
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
union MIPI_REG_68 {
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
union MIPI_REG_69 {
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
union MIPI_REG_6A {
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
union MIPI_REG_6B {
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
union MIPI_REG_6C {
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
union MIPI_REG_6D {
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
union MIPI_REG_6E {
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
union MIPI_REG_6F {
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
union MIPI_REG_70 {
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
union MIPI_REG_71 {
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
union MIPI_REG_72 {
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
union MIPI_REG_73 {
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
union MIPI_REG_74 {
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
union MIPI_REG_75 {
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
union MIPI_REG_76 {
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
union MIPI_REG_77 {
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
union MIPI_REG_78 {
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
union MIPI_REG_79 {
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
union MIPI_REG_7A {
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
union MIPI_REG_7B {
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
union MIPI_REG_7C {
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
union MIPI_REG_7D {
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
union MIPI_REG_7E {
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
union MIPI_REG_7F {
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
union MIPI_REG_80 {
uint8_t byte;    struct {
uint8_t H1_MIPI_L_HSRX_EN_CK:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_81 {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t :1;
uint8_t H1_MIPI_L_HSRX_EN_LN:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_82 {
uint8_t byte;    struct {
uint8_t H1_MIPI_L_HSRX_RT_EN_CK:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_83 {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t :1;
uint8_t H1_MIPI_L_HSRX_RT_EN_LN:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_84 {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t RESERVED:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_85 {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t RESERVED:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_86 {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t RESERVED:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_87 {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t RESERVED:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_88 {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t RESERVED:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_89 {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t RESERVED:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_8A {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t H1_MIPI_L_HSRX_SKEW_IN_LN0:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_8B {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t H1_MIPI_L_HSRX_SKEW_IN_LN1:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_8C {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t H1_MIPI_L_HSRX_SKEW_IN_LN2:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_8D {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t H1_MIPI_L_HSRX_SKEW_IN_LN3:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_8E {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t RESERVED:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_8F {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t RESERVED:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_90 {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t RESERVED:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_91 {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t RESERVED:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_92 {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t RESERVED:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_93 {
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
union MIPI_REG_94 {
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
union MIPI_REG_95 {
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
union MIPI_REG_96 {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t RESERVED:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_97 {
uint8_t byte;    struct {
uint8_t :1;
uint8_t RESERVED:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_98 {
uint8_t byte;    struct {
uint8_t :1;
uint8_t RESERVED:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_99 {
uint8_t byte;    struct {
uint8_t H1_MIPI_L_HSRX_CKINV:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_9A {
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
union MIPI_REG_9B {
uint8_t byte;    struct {
uint8_t H1_MIPI_L_HSRX_LDO_EN:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_9C {
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
union MIPI_REG_9D {
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
union MIPI_REG_9E {
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
union MIPI_REG_9F {
uint8_t byte;    struct {
uint8_t H1_MIPI_L_LPRX_EN_CK:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_A0 {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t :1;
uint8_t H1_MIPI_L_LPRX_EN_LN:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_A1 {
uint8_t byte;    struct {
uint8_t :1;
uint8_t H1_MIPI_L_LPRX_HYS:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_A2 {
uint8_t byte;    struct {
uint8_t :1;
uint8_t H1_MIPI_L_LPRX_LPF:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_A3 {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t :1;
uint8_t RESERVED:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_A4 {
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
union MIPI_REG_A5 {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t :1;
uint8_t H1_MIPI_L_LPTX_SR:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_A6 {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t :1;
uint8_t RESERVED:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_A7 {
uint8_t byte;    struct {
uint8_t :1;
uint8_t H1_MIPI_L_LPCD_LPF:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_A8 {
uint8_t byte;    struct {
uint8_t H1_MIPI_L_BIAS_EN:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_A9 {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t RESERVED:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_AA {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t H1_MIPI_L_LDO_SEL:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_AB {
uint8_t byte;    struct {
uint8_t :1;
uint8_t H1_MIPI_L_IB_SEL :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_AC {
uint8_t byte;    struct {
uint8_t :1;
uint8_t RESERVED:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_AD {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t RESERVED:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_AE {
uint8_t byte;    struct {
uint8_t H1_MIPI_L_PN_SWAP_CK:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_AF {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t :1;
uint8_t H1_MIPI_L_PN_SWAP_LN:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_B0 {
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
union MIPI_REG_B1 {
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
union MIPI_REG_B2 {
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
union MIPI_REG_B3 {
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
union MIPI_REG_B4 {
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
union MIPI_REG_B5 {
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
union MIPI_REG_B6 {
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
union MIPI_REG_B7 {
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
union MIPI_REG_B8 {
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
union MIPI_REG_B9 {
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
union MIPI_REG_BA {
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
union MIPI_REG_BB {
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
union MIPI_REG_BC {
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
union MIPI_REG_BD {
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
union MIPI_REG_BE {
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
union MIPI_REG_BF {
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
union MIPI_REG_C0 {
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
union MIPI_REG_C1 {
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
union MIPI_REG_C2 {
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
union MIPI_REG_C3 {
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
union MIPI_REG_C4 {
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
union MIPI_REG_C5 {
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
union MIPI_REG_C6 {
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
union MIPI_REG_C7 {
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
union MIPI_REG_C8 {
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
union MIPI_REG_C9 {
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
union MIPI_REG_CA {
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
union MIPI_REG_CB {
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
union MIPI_REG_CC {
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
union MIPI_REG_CD {
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
union MIPI_REG_CE {
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
union MIPI_REG_CF {
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
union MIPI_REG_D0 {
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
union MIPI_REG_D1 {
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
union MIPI_REG_D2 {
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
union MIPI_REG_D3 {
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
union MIPI_REG_D4 {
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
union MIPI_REG_D5 {
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
union MIPI_REG_D6 {
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
union MIPI_REG_D7 {
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
union MIPI_REG_D8 {
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
union MIPI_REG_D9 {
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
union MIPI_REG_DA {
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
union MIPI_REG_DB {
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
union MIPI_REG_DC {
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
union MIPI_REG_DD {
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
union MIPI_REG_DE {
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
union MIPI_REG_DF {
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
union MIPI_REG_E0 {
uint8_t byte;    struct {
uint8_t H1_MIPI_L_SOT_ERR:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_E1 {
uint8_t byte;    struct {
uint8_t H1_MIPI_L_SOT_SYNC_ERR:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_E2 {
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
union MIPI_REG_E3 {
uint8_t byte;    struct {
uint8_t H1_MIPI_L_ESC_MODE_ENTRY_CMD_ERR:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_E4 {
uint8_t byte;    struct {
uint8_t H1_MIPI_L_LP_TRANS_SYNC_ERR:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_E5 {
uint8_t byte;    struct {
uint8_t H1_MIPI_L_PERI_TO_ERR:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_E6 {
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
union MIPI_REG_E7 {
uint8_t byte;    struct {
uint8_t H1_MIPI_L_CONTENTION_DET:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_E8 {
uint8_t byte;    struct {
uint8_t H1_MIPI_L_ECC_SINGLE_ERR:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_E9 {
uint8_t byte;    struct {
uint8_t H1_MIPI_L_ECC_MULTI_ERR:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_EA {
uint8_t byte;    struct {
uint8_t H1_MIPI_L_CKSUM_ERR:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_EB {
uint8_t byte;    struct {
uint8_t H1_MIPI_L_DSI_DT_TYPE_NOT_RECOGNIZED:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_EC {
uint8_t byte;    struct {
uint8_t H1_MIPI_L_DSI_VC_ID_INVALID:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_ED {
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
union MIPI_REG_EE {
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
union MIPI_REG_EF {
uint8_t byte;    struct {
uint8_t H1_MIPI_L_DSI_PROTOCOL_VIO:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_F0 {
uint8_t byte;    struct {
uint8_t H1_MIPI_L_TRNS_ERR:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_F1 {
uint8_t byte;    struct {
uint8_t H1_MIPI_L_TRNS_ERR_CLR:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_F2 {
uint8_t byte;    struct {
uint8_t H1_MIPI_L_ILL_CMD:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_F3 {
uint8_t byte;    struct {
uint8_t H1_MIPI_L_ILL_CMD_CLR:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_F4 {
uint8_t byte;    struct {
uint8_t H1_MIPI_L_AHB_FIFO_OVF:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_F5 {
uint8_t byte;    struct {
uint8_t H1_MIPI_L_AHB_FIFO_OVR_CLR:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_F6 {
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
union MIPI_REG_F7 {
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
union MIPI_REG_F8 {
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
union MIPI_REG_F9 {
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
union MIPI_REG_FA {
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
union MIPI_REG_FB {
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
union MIPI_REG_FC {
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
union MIPI_REG_FD {
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
union MIPI_REG_FE {
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
union MIPI_REG_FF {
uint8_t byte;    struct {
uint8_t H1_MIPI_L_DPHY_SWCTRL_EN:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_100 {
uint8_t byte;    struct {
uint8_t :1;
uint8_t H1_MIPI_R_LANE_NUM:1;
uint8_t :1;
uint8_t H1_MIPI_R_VC_MAIN:1;
uint8_t RESERVED:1;
uint8_t H1_MIPI_R_CD_DISABLE:1;
uint8_t RESERVED:1;
uint8_t RESERVED:1;
};};
union MIPI_REG_101 {
uint8_t byte;    struct {
uint8_t :1;
uint8_t RESERVED:1;
uint8_t :1;
uint8_t RESERVED:1;
uint8_t RESERVED:1;
uint8_t RESERVED:1;
uint8_t H1_MIPI_R_ECC_IGNORE:1;
uint8_t H1_MIPI_R_RXCRC_ENABLE:1;
};};
union MIPI_REG_102 {
uint8_t byte;    struct {
uint8_t RESERVED:1;
uint8_t H1_MIPI_R_NGATECLK:1;
uint8_t H1_MIPI_R_HS_ZERO_EN:1;
uint8_t H1_MIPI_R_HS_WAIT_EN:1;
uint8_t RESERVED:1;
uint8_t RESERVED:1;
uint8_t RESERVED:1;
uint8_t RESERVED:1;
};};
union MIPI_REG_103 {
uint8_t byte;    struct {
uint8_t :1;
uint8_t H1_MIPI_R_WD_TIMER:1;
uint8_t H1_MIPI_R_RSTTRIG_I:1;
uint8_t H1_MIPI_R_FIFO_BLANK:1;
uint8_t H1_MIPI_R_PN_CHANGE:1;
uint8_t H1_MIPI_R_RSTTRIG:1;
uint8_t :1;
uint8_t RESERVED:1;
};};
union MIPI_REG_104 {
uint8_t byte;    struct {
uint8_t RESERVED:1;
uint8_t H1_MIPI_R_SWCTRL_CLP:1;
uint8_t H1_MIPI_R_SWCTRL_CHSR:1;
uint8_t H1_MIPI_R_SWCTRL_CHS:1;
uint8_t H1_MIPI_R_SWCTRL_DLP:1;
uint8_t H1_MIPI_R_SWCTRL_DHSR:1;
uint8_t H1_MIPI_R_SWCTRL_DHSL:1;
uint8_t H1_MIPI_R_SWCTRL_DHS:1;
};};
union MIPI_REG_105 {
uint8_t byte;    struct {
uint8_t H1_MIPI_R_SWCTRL_DTX:1;
uint8_t H1_MIPI_R_SWCTRL_DTXO:1;
uint8_t H1_MIPI_R_SWCTRL_CD:1;
uint8_t RESERVED:1;
uint8_t RESERVED:1;
uint8_t :1;
uint8_t H1_MIPI_R_DBG_MUX_SW:1;
uint8_t H1_MIPI_R_CTRLPHYSW:1;
};};
union MIPI_REG_106 {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t H1_MIPI_R_HS_SETTLE:1;
uint8_t H1_MIPI_R_HS_D4_INV:1;
uint8_t :1;
uint8_t H1_MIPI_R_INI_TIME:1;
uint8_t :1;
uint8_t H1_MIPI_R_SOT_TOLAN:1;
};};
union MIPI_REG_107 {
uint8_t byte;    struct {
uint8_t H1_MIPI_R_ULPS_BYDL0:1;
uint8_t H1_MIPI_R_EOTPKT_EN:1;
uint8_t H1_MIPI_R_HSCLK_D2SEN:1;
uint8_t H1_MIPI_R_HSCLK_D2SEN_OPT:1;
uint8_t RESERVED:1;
uint8_t RESERVED:1;
uint8_t H1_MIPI_R_CD_DLY:1;
uint8_t H1_MIPI_R_VC_CHECK_EN:1;
};};
union MIPI_REG_108 {
uint8_t byte;    struct {
uint8_t RESERVED:1;
uint8_t RESERVED:1;
uint8_t RESERVED:1;
uint8_t :1;
uint8_t RESERVED:1;
uint8_t RESERVED:1;
uint8_t H1_MIPI_R_TXCRC_ENABLE:1;
uint8_t RESERVED:1;
};};
union MIPI_REG_109 {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t :1;
uint8_t :1;
uint8_t :1;
uint8_t :1;
uint8_t :1;
uint8_t RESERVED:1;
};};
union MIPI_REG_10A {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t :1;
uint8_t :1;
uint8_t :1;
uint8_t :1;
uint8_t :1;
uint8_t RESERVED:1;
};};
union MIPI_REG_10B {
uint8_t byte;    struct {
uint8_t RESERVED:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_10C {
uint8_t byte;    struct {
uint8_t H1_MIPI_R_DSI_ENABLE:1;
uint8_t :1;
uint8_t :1;
uint8_t :1;
uint8_t :1;
uint8_t :1;
uint8_t :1;
uint8_t RESERVED:1;
};};
union MIPI_REG_10D {
uint8_t byte;    struct {
uint8_t H1_MIPI_R_DBG_SEL_MIPI:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t :1;
uint8_t :1;
uint8_t :1;
uint8_t H1_MIPI_R_PROB_MIPI:1;
};};
union MIPI_REG_10E {
uint8_t byte;    struct {
uint8_t H1_MIPI_R_DBG_SEL_DSI2AHB:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t :1;
uint8_t :1;
uint8_t :1;
uint8_t H1_MIPI_R_PROB_DSI2AHB:1;
};};
union MIPI_REG_10F {
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
union MIPI_REG_110 {
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
union MIPI_REG_111 {
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
union MIPI_REG_112 {
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
union MIPI_REG_113 {
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
union MIPI_REG_114 {
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
union MIPI_REG_115 {
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
union MIPI_REG_116 {
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
union MIPI_REG_117 {
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
union MIPI_REG_118 {
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
union MIPI_REG_119 {
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
union MIPI_REG_11A {
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
union MIPI_REG_11B {
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
union MIPI_REG_11C {
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
union MIPI_REG_11D {
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
union MIPI_REG_11E {
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
union MIPI_REG_11F {
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
union MIPI_REG_120 {
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
union MIPI_REG_121 {
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
union MIPI_REG_122 {
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
union MIPI_REG_123 {
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
union MIPI_REG_124 {
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
union MIPI_REG_125 {
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
union MIPI_REG_126 {
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
union MIPI_REG_127 {
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
union MIPI_REG_128 {
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
union MIPI_REG_129 {
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
union MIPI_REG_12A {
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
union MIPI_REG_12B {
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
union MIPI_REG_12C {
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
union MIPI_REG_12D {
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
union MIPI_REG_12E {
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
union MIPI_REG_12F {
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
union MIPI_REG_130 {
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
union MIPI_REG_131 {
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
union MIPI_REG_132 {
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
union MIPI_REG_133 {
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
union MIPI_REG_134 {
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
union MIPI_REG_135 {
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
union MIPI_REG_136 {
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
union MIPI_REG_137 {
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
union MIPI_REG_138 {
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
union MIPI_REG_139 {
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
union MIPI_REG_13A {
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
union MIPI_REG_13B {
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
union MIPI_REG_13C {
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
union MIPI_REG_13D {
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
union MIPI_REG_13E {
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
union MIPI_REG_13F {
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
union MIPI_REG_140 {
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
union MIPI_REG_141 {
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
union MIPI_REG_142 {
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
union MIPI_REG_143 {
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
union MIPI_REG_144 {
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
union MIPI_REG_145 {
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
union MIPI_REG_146 {
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
union MIPI_REG_147 {
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
union MIPI_REG_148 {
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
union MIPI_REG_149 {
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
union MIPI_REG_14A {
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
union MIPI_REG_14B {
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
union MIPI_REG_14C {
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
union MIPI_REG_14D {
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
union MIPI_REG_14E {
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
union MIPI_REG_14F {
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
union MIPI_REG_150 {
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
union MIPI_REG_151 {
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
union MIPI_REG_152 {
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
union MIPI_REG_153 {
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
union MIPI_REG_154 {
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
union MIPI_REG_155 {
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
union MIPI_REG_156 {
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
union MIPI_REG_157 {
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
union MIPI_REG_158 {
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
union MIPI_REG_159 {
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
union MIPI_REG_15A {
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
union MIPI_REG_15B {
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
union MIPI_REG_15C {
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
union MIPI_REG_15D {
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
union MIPI_REG_15E {
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
union MIPI_REG_15F {
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
union MIPI_REG_160 {
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
union MIPI_REG_161 {
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
union MIPI_REG_162 {
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
union MIPI_REG_163 {
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
union MIPI_REG_164 {
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
union MIPI_REG_165 {
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
union MIPI_REG_166 {
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
union MIPI_REG_167 {
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
union MIPI_REG_168 {
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
union MIPI_REG_169 {
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
union MIPI_REG_16A {
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
union MIPI_REG_16B {
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
union MIPI_REG_16C {
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
union MIPI_REG_16D {
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
union MIPI_REG_16E {
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
union MIPI_REG_16F {
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
union MIPI_REG_170 {
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
union MIPI_REG_171 {
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
union MIPI_REG_172 {
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
union MIPI_REG_173 {
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
union MIPI_REG_174 {
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
union MIPI_REG_175 {
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
union MIPI_REG_176 {
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
union MIPI_REG_177 {
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
union MIPI_REG_178 {
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
union MIPI_REG_179 {
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
union MIPI_REG_17A {
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
union MIPI_REG_17B {
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
union MIPI_REG_17C {
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
union MIPI_REG_17D {
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
union MIPI_REG_17E {
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
union MIPI_REG_17F {
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
union MIPI_REG_180 {
uint8_t byte;    struct {
uint8_t H1_MIPI_R_HSRX_EN_CK:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_181 {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t :1;
uint8_t H1_MIPI_R_HSRX_EN_LN:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_182 {
uint8_t byte;    struct {
uint8_t H1_MIPI_R_HSRX_RT_EN_CK:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_183 {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t :1;
uint8_t H1_MIPI_R_HSRX_RT_EN_LN:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_184 {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t RESERVED:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_185 {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t RESERVED:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_186 {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t RESERVED:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_187 {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t RESERVED:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_188 {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t RESERVED:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_189 {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t RESERVED:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_18A {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t H1_MIPI_R_HSRX_SKEW_IN_LN0:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_18B {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t H1_MIPI_R_HSRX_SKEW_IN_LN1:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_18C {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t H1_MIPI_R_HSRX_SKEW_IN_LN2:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_18D {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t H1_MIPI_R_HSRX_SKEW_IN_LN3:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_18E {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t RESERVED:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_18F {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t RESERVED:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_190 {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t RESERVED:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_191 {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t RESERVED:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_192 {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t RESERVED:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_193 {
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
union MIPI_REG_194 {
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
union MIPI_REG_195 {
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
union MIPI_REG_196 {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t RESERVED:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_197 {
uint8_t byte;    struct {
uint8_t :1;
uint8_t RESERVED:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_198 {
uint8_t byte;    struct {
uint8_t :1;
uint8_t RESERVED:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_199 {
uint8_t byte;    struct {
uint8_t H1_MIPI_R_HSRX_CKINV:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_19A {
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
union MIPI_REG_19B {
uint8_t byte;    struct {
uint8_t H1_MIPI_R_HSRX_LDO_EN:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_19C {
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
union MIPI_REG_19D {
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
union MIPI_REG_19E {
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
union MIPI_REG_19F {
uint8_t byte;    struct {
uint8_t H1_MIPI_R_LPRX_EN_CK:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_1A0 {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t :1;
uint8_t H1_MIPI_R_LPRX_EN_LN:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_1A1 {
uint8_t byte;    struct {
uint8_t :1;
uint8_t H1_MIPI_R_LPRX_HYS:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_1A2 {
uint8_t byte;    struct {
uint8_t :1;
uint8_t H1_MIPI_R_LPRX_LPF:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_1A3 {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t :1;
uint8_t RESERVED:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_1A4 {
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
union MIPI_REG_1A5 {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t :1;
uint8_t H1_MIPI_R_LPTX_SR:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_1A6 {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t :1;
uint8_t RESERVED:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_1A7 {
uint8_t byte;    struct {
uint8_t :1;
uint8_t H1_MIPI_R_LPCD_LPF:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_1A8 {
uint8_t byte;    struct {
uint8_t H1_MIPI_R_BIAS_EN:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_1A9 {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t RESERVED:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_1AA {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t H1_MIPI_R_LDO_SEL:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_1AB {
uint8_t byte;    struct {
uint8_t :1;
uint8_t H1_MIPI_R_IB_SEL :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_1AC {
uint8_t byte;    struct {
uint8_t :1;
uint8_t RESERVED:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_1AD {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t RESERVED:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_1AE {
uint8_t byte;    struct {
uint8_t H1_MIPI_R_PN_SWAP_CK:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_1AF {
uint8_t byte;    struct {
uint8_t :1;
uint8_t :1;
uint8_t :1;
uint8_t H1_MIPI_R_PN_SWAP_LN:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_1B0 {
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
union MIPI_REG_1B1 {
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
union MIPI_REG_1B2 {
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
union MIPI_REG_1B3 {
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
union MIPI_REG_1B4 {
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
union MIPI_REG_1B5 {
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
union MIPI_REG_1B6 {
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
union MIPI_REG_1B7 {
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
union MIPI_REG_1B8 {
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
union MIPI_REG_1B9 {
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
union MIPI_REG_1BA {
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
union MIPI_REG_1BB {
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
union MIPI_REG_1BC {
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
union MIPI_REG_1BD {
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
union MIPI_REG_1BE {
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
union MIPI_REG_1BF {
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
union MIPI_REG_1C0 {
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
union MIPI_REG_1C1 {
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
union MIPI_REG_1C2 {
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
union MIPI_REG_1C3 {
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
union MIPI_REG_1C4 {
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
union MIPI_REG_1C5 {
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
union MIPI_REG_1C6 {
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
union MIPI_REG_1C7 {
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
union MIPI_REG_1C8 {
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
union MIPI_REG_1C9 {
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
union MIPI_REG_1CA {
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
union MIPI_REG_1CB {
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
union MIPI_REG_1CC {
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
union MIPI_REG_1CD {
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
union MIPI_REG_1CE {
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
union MIPI_REG_1CF {
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
union MIPI_REG_1D0 {
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
union MIPI_REG_1D1 {
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
union MIPI_REG_1D2 {
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
union MIPI_REG_1D3 {
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
union MIPI_REG_1D4 {
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
union MIPI_REG_1D5 {
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
union MIPI_REG_1D6 {
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
union MIPI_REG_1D7 {
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
union MIPI_REG_1D8 {
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
union MIPI_REG_1D9 {
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
union MIPI_REG_1DA {
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
union MIPI_REG_1DB {
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
union MIPI_REG_1DC {
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
union MIPI_REG_1DD {
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
union MIPI_REG_1DE {
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
union MIPI_REG_1DF {
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
union MIPI_REG_1E0 {
uint8_t byte;    struct {
uint8_t H1_MIPI_R_SOT_ERR:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_1E1 {
uint8_t byte;    struct {
uint8_t H1_MIPI_R_SOT_SYNC_ERR:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_1E2 {
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
union MIPI_REG_1E3 {
uint8_t byte;    struct {
uint8_t H1_MIPI_R_ESC_MODE_ENTRY_CMD_ERR:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_1E4 {
uint8_t byte;    struct {
uint8_t H1_MIPI_R_LP_TRANS_SYNC_ERR:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_1E5 {
uint8_t byte;    struct {
uint8_t H1_MIPI_R_PERI_TO_ERR:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_1E6 {
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
union MIPI_REG_1E7 {
uint8_t byte;    struct {
uint8_t H1_MIPI_R_CONTENTION_DET:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_1E8 {
uint8_t byte;    struct {
uint8_t H1_MIPI_R_ECC_SINGLE_ERR:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_1E9 {
uint8_t byte;    struct {
uint8_t H1_MIPI_R_ECC_MULTI_ERR:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_1EA {
uint8_t byte;    struct {
uint8_t H1_MIPI_R_CKSUM_ERR:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_1EB {
uint8_t byte;    struct {
uint8_t H1_MIPI_R_DSI_DT_TYPE_NOT_RECOGNIZED:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_1EC {
uint8_t byte;    struct {
uint8_t H1_MIPI_R_DSI_VC_ID_INVALID:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_1ED {
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
union MIPI_REG_1EE {
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
union MIPI_REG_1EF {
uint8_t byte;    struct {
uint8_t H1_MIPI_R_DSI_PROTOCOL_VIO:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_1F0 {
uint8_t byte;    struct {
uint8_t H1_MIPI_R_TRNS_ERR:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_1F1 {
uint8_t byte;    struct {
uint8_t H1_MIPI_R_TRNS_ERR_CLR:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_1F2 {
uint8_t byte;    struct {
uint8_t H1_MIPI_R_ILL_CMD:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_1F3 {
uint8_t byte;    struct {
uint8_t H1_MIPI_R_ILL_CMD_CLR:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MIPI_REG_1F4 {
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
union MIPI_REG_1F5 {
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
union MIPI_REG_1F6 {
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
union MIPI_REG_1F7 {
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
union MIPI_REG_1F8 {
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
union MIPI_REG_1F9 {
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
union MIPI_REG_1FA {
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
union MIPI_REG_1FB {
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
union MIPI_REG_1FC {
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
union MIPI_REG_1FD {
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
union MIPI_REG_1FE {
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
union MIPI_REG_1FF {
uint8_t byte;    struct {
uint8_t H1_MIPI_R_DPHY_SWCTRL_EN:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
typedef struct MIPI_T {
union MIPI_REG_00 reg00;
union MIPI_REG_01 reg01;
union MIPI_REG_02 reg02;
union MIPI_REG_03 reg03;
union MIPI_REG_04 reg04;
union MIPI_REG_05 reg05;
union MIPI_REG_06 reg06;
union MIPI_REG_07 reg07;
union MIPI_REG_08 reg08;
union MIPI_REG_09 reg09;
union MIPI_REG_0A reg0A;
union MIPI_REG_0B reg0B;
union MIPI_REG_0C reg0C;
union MIPI_REG_0D reg0D;
union MIPI_REG_0E reg0E;
union MIPI_REG_0F reg0F;
union MIPI_REG_10 reg10;
union MIPI_REG_11 reg11;
union MIPI_REG_12 reg12;
union MIPI_REG_13 reg13;
union MIPI_REG_14 reg14;
union MIPI_REG_15 reg15;
union MIPI_REG_16 reg16;
union MIPI_REG_17 reg17;
union MIPI_REG_18 reg18;
union MIPI_REG_19 reg19;
union MIPI_REG_1A reg1A;
union MIPI_REG_1B reg1B;
union MIPI_REG_1C reg1C;
union MIPI_REG_1D reg1D;
union MIPI_REG_1E reg1E;
union MIPI_REG_1F reg1F;
union MIPI_REG_20 reg20;
union MIPI_REG_21 reg21;
union MIPI_REG_22 reg22;
union MIPI_REG_23 reg23;
union MIPI_REG_24 reg24;
union MIPI_REG_25 reg25;
union MIPI_REG_26 reg26;
union MIPI_REG_27 reg27;
union MIPI_REG_28 reg28;
union MIPI_REG_29 reg29;
union MIPI_REG_2A reg2A;
union MIPI_REG_2B reg2B;
union MIPI_REG_2C reg2C;
union MIPI_REG_2D reg2D;
union MIPI_REG_2E reg2E;
union MIPI_REG_2F reg2F;
union MIPI_REG_30 reg30;
union MIPI_REG_31 reg31;
union MIPI_REG_32 reg32;
union MIPI_REG_33 reg33;
union MIPI_REG_34 reg34;
union MIPI_REG_35 reg35;
union MIPI_REG_36 reg36;
union MIPI_REG_37 reg37;
union MIPI_REG_38 reg38;
union MIPI_REG_39 reg39;
union MIPI_REG_3A reg3A;
union MIPI_REG_3B reg3B;
union MIPI_REG_3C reg3C;
union MIPI_REG_3D reg3D;
union MIPI_REG_3E reg3E;
union MIPI_REG_3F reg3F;
union MIPI_REG_40 reg40;
union MIPI_REG_41 reg41;
union MIPI_REG_42 reg42;
union MIPI_REG_43 reg43;
union MIPI_REG_44 reg44;
union MIPI_REG_45 reg45;
union MIPI_REG_46 reg46;
union MIPI_REG_47 reg47;
union MIPI_REG_48 reg48;
union MIPI_REG_49 reg49;
union MIPI_REG_4A reg4A;
union MIPI_REG_4B reg4B;
union MIPI_REG_4C reg4C;
union MIPI_REG_4D reg4D;
union MIPI_REG_4E reg4E;
union MIPI_REG_4F reg4F;
union MIPI_REG_50 reg50;
union MIPI_REG_51 reg51;
union MIPI_REG_52 reg52;
union MIPI_REG_53 reg53;
union MIPI_REG_54 reg54;
union MIPI_REG_55 reg55;
union MIPI_REG_56 reg56;
union MIPI_REG_57 reg57;
union MIPI_REG_58 reg58;
union MIPI_REG_59 reg59;
union MIPI_REG_5A reg5A;
union MIPI_REG_5B reg5B;
union MIPI_REG_5C reg5C;
union MIPI_REG_5D reg5D;
union MIPI_REG_5E reg5E;
union MIPI_REG_5F reg5F;
union MIPI_REG_60 reg60;
union MIPI_REG_61 reg61;
union MIPI_REG_62 reg62;
union MIPI_REG_63 reg63;
union MIPI_REG_64 reg64;
union MIPI_REG_65 reg65;
union MIPI_REG_66 reg66;
union MIPI_REG_67 reg67;
union MIPI_REG_68 reg68;
union MIPI_REG_69 reg69;
union MIPI_REG_6A reg6A;
union MIPI_REG_6B reg6B;
union MIPI_REG_6C reg6C;
union MIPI_REG_6D reg6D;
union MIPI_REG_6E reg6E;
union MIPI_REG_6F reg6F;
union MIPI_REG_70 reg70;
union MIPI_REG_71 reg71;
union MIPI_REG_72 reg72;
union MIPI_REG_73 reg73;
union MIPI_REG_74 reg74;
union MIPI_REG_75 reg75;
union MIPI_REG_76 reg76;
union MIPI_REG_77 reg77;
union MIPI_REG_78 reg78;
union MIPI_REG_79 reg79;
union MIPI_REG_7A reg7A;
union MIPI_REG_7B reg7B;
union MIPI_REG_7C reg7C;
union MIPI_REG_7D reg7D;
union MIPI_REG_7E reg7E;
union MIPI_REG_7F reg7F;
union MIPI_REG_80 reg80;
union MIPI_REG_81 reg81;
union MIPI_REG_82 reg82;
union MIPI_REG_83 reg83;
union MIPI_REG_84 reg84;
union MIPI_REG_85 reg85;
union MIPI_REG_86 reg86;
union MIPI_REG_87 reg87;
union MIPI_REG_88 reg88;
union MIPI_REG_89 reg89;
union MIPI_REG_8A reg8A;
union MIPI_REG_8B reg8B;
union MIPI_REG_8C reg8C;
union MIPI_REG_8D reg8D;
union MIPI_REG_8E reg8E;
union MIPI_REG_8F reg8F;
union MIPI_REG_90 reg90;
union MIPI_REG_91 reg91;
union MIPI_REG_92 reg92;
union MIPI_REG_93 reg93;
union MIPI_REG_94 reg94;
union MIPI_REG_95 reg95;
union MIPI_REG_96 reg96;
union MIPI_REG_97 reg97;
union MIPI_REG_98 reg98;
union MIPI_REG_99 reg99;
union MIPI_REG_9A reg9A;
union MIPI_REG_9B reg9B;
union MIPI_REG_9C reg9C;
union MIPI_REG_9D reg9D;
union MIPI_REG_9E reg9E;
union MIPI_REG_9F reg9F;
union MIPI_REG_A0 regA0;
union MIPI_REG_A1 regA1;
union MIPI_REG_A2 regA2;
union MIPI_REG_A3 regA3;
union MIPI_REG_A4 regA4;
union MIPI_REG_A5 regA5;
union MIPI_REG_A6 regA6;
union MIPI_REG_A7 regA7;
union MIPI_REG_A8 regA8;
union MIPI_REG_A9 regA9;
union MIPI_REG_AA regAA;
union MIPI_REG_AB regAB;
union MIPI_REG_AC regAC;
union MIPI_REG_AD regAD;
union MIPI_REG_AE regAE;
union MIPI_REG_AF regAF;
union MIPI_REG_B0 regB0;
union MIPI_REG_B1 regB1;
union MIPI_REG_B2 regB2;
union MIPI_REG_B3 regB3;
union MIPI_REG_B4 regB4;
union MIPI_REG_B5 regB5;
union MIPI_REG_B6 regB6;
union MIPI_REG_B7 regB7;
union MIPI_REG_B8 regB8;
union MIPI_REG_B9 regB9;
union MIPI_REG_BA regBA;
union MIPI_REG_BB regBB;
union MIPI_REG_BC regBC;
union MIPI_REG_BD regBD;
union MIPI_REG_BE regBE;
union MIPI_REG_BF regBF;
union MIPI_REG_C0 regC0;
union MIPI_REG_C1 regC1;
union MIPI_REG_C2 regC2;
union MIPI_REG_C3 regC3;
union MIPI_REG_C4 regC4;
union MIPI_REG_C5 regC5;
union MIPI_REG_C6 regC6;
union MIPI_REG_C7 regC7;
union MIPI_REG_C8 regC8;
union MIPI_REG_C9 regC9;
union MIPI_REG_CA regCA;
union MIPI_REG_CB regCB;
union MIPI_REG_CC regCC;
union MIPI_REG_CD regCD;
union MIPI_REG_CE regCE;
union MIPI_REG_CF regCF;
union MIPI_REG_D0 regD0;
union MIPI_REG_D1 regD1;
union MIPI_REG_D2 regD2;
union MIPI_REG_D3 regD3;
union MIPI_REG_D4 regD4;
union MIPI_REG_D5 regD5;
union MIPI_REG_D6 regD6;
union MIPI_REG_D7 regD7;
union MIPI_REG_D8 regD8;
union MIPI_REG_D9 regD9;
union MIPI_REG_DA regDA;
union MIPI_REG_DB regDB;
union MIPI_REG_DC regDC;
union MIPI_REG_DD regDD;
union MIPI_REG_DE regDE;
union MIPI_REG_DF regDF;
union MIPI_REG_E0 regE0;
union MIPI_REG_E1 regE1;
union MIPI_REG_E2 regE2;
union MIPI_REG_E3 regE3;
union MIPI_REG_E4 regE4;
union MIPI_REG_E5 regE5;
union MIPI_REG_E6 regE6;
union MIPI_REG_E7 regE7;
union MIPI_REG_E8 regE8;
union MIPI_REG_E9 regE9;
union MIPI_REG_EA regEA;
union MIPI_REG_EB regEB;
union MIPI_REG_EC regEC;
union MIPI_REG_ED regED;
union MIPI_REG_EE regEE;
union MIPI_REG_EF regEF;
union MIPI_REG_F0 regF0;
union MIPI_REG_F1 regF1;
union MIPI_REG_F2 regF2;
union MIPI_REG_F3 regF3;
union MIPI_REG_F4 regF4;
union MIPI_REG_F5 regF5;
union MIPI_REG_F6 regF6;
union MIPI_REG_F7 regF7;
union MIPI_REG_F8 regF8;
union MIPI_REG_F9 regF9;
union MIPI_REG_FA regFA;
union MIPI_REG_FB regFB;
union MIPI_REG_FC regFC;
union MIPI_REG_FD regFD;
union MIPI_REG_FE regFE;
union MIPI_REG_FF regFF;
union MIPI_REG_100 reg100;
union MIPI_REG_101 reg101;
union MIPI_REG_102 reg102;
union MIPI_REG_103 reg103;
union MIPI_REG_104 reg104;
union MIPI_REG_105 reg105;
union MIPI_REG_106 reg106;
union MIPI_REG_107 reg107;
union MIPI_REG_108 reg108;
union MIPI_REG_109 reg109;
union MIPI_REG_10A reg10A;
union MIPI_REG_10B reg10B;
union MIPI_REG_10C reg10C;
union MIPI_REG_10D reg10D;
union MIPI_REG_10E reg10E;
union MIPI_REG_10F reg10F;
union MIPI_REG_110 reg110;
union MIPI_REG_111 reg111;
union MIPI_REG_112 reg112;
union MIPI_REG_113 reg113;
union MIPI_REG_114 reg114;
union MIPI_REG_115 reg115;
union MIPI_REG_116 reg116;
union MIPI_REG_117 reg117;
union MIPI_REG_118 reg118;
union MIPI_REG_119 reg119;
union MIPI_REG_11A reg11A;
union MIPI_REG_11B reg11B;
union MIPI_REG_11C reg11C;
union MIPI_REG_11D reg11D;
union MIPI_REG_11E reg11E;
union MIPI_REG_11F reg11F;
union MIPI_REG_120 reg120;
union MIPI_REG_121 reg121;
union MIPI_REG_122 reg122;
union MIPI_REG_123 reg123;
union MIPI_REG_124 reg124;
union MIPI_REG_125 reg125;
union MIPI_REG_126 reg126;
union MIPI_REG_127 reg127;
union MIPI_REG_128 reg128;
union MIPI_REG_129 reg129;
union MIPI_REG_12A reg12A;
union MIPI_REG_12B reg12B;
union MIPI_REG_12C reg12C;
union MIPI_REG_12D reg12D;
union MIPI_REG_12E reg12E;
union MIPI_REG_12F reg12F;
union MIPI_REG_130 reg130;
union MIPI_REG_131 reg131;
union MIPI_REG_132 reg132;
union MIPI_REG_133 reg133;
union MIPI_REG_134 reg134;
union MIPI_REG_135 reg135;
union MIPI_REG_136 reg136;
union MIPI_REG_137 reg137;
union MIPI_REG_138 reg138;
union MIPI_REG_139 reg139;
union MIPI_REG_13A reg13A;
union MIPI_REG_13B reg13B;
union MIPI_REG_13C reg13C;
union MIPI_REG_13D reg13D;
union MIPI_REG_13E reg13E;
union MIPI_REG_13F reg13F;
union MIPI_REG_140 reg140;
union MIPI_REG_141 reg141;
union MIPI_REG_142 reg142;
union MIPI_REG_143 reg143;
union MIPI_REG_144 reg144;
union MIPI_REG_145 reg145;
union MIPI_REG_146 reg146;
union MIPI_REG_147 reg147;
union MIPI_REG_148 reg148;
union MIPI_REG_149 reg149;
union MIPI_REG_14A reg14A;
union MIPI_REG_14B reg14B;
union MIPI_REG_14C reg14C;
union MIPI_REG_14D reg14D;
union MIPI_REG_14E reg14E;
union MIPI_REG_14F reg14F;
union MIPI_REG_150 reg150;
union MIPI_REG_151 reg151;
union MIPI_REG_152 reg152;
union MIPI_REG_153 reg153;
union MIPI_REG_154 reg154;
union MIPI_REG_155 reg155;
union MIPI_REG_156 reg156;
union MIPI_REG_157 reg157;
union MIPI_REG_158 reg158;
union MIPI_REG_159 reg159;
union MIPI_REG_15A reg15A;
union MIPI_REG_15B reg15B;
union MIPI_REG_15C reg15C;
union MIPI_REG_15D reg15D;
union MIPI_REG_15E reg15E;
union MIPI_REG_15F reg15F;
union MIPI_REG_160 reg160;
union MIPI_REG_161 reg161;
union MIPI_REG_162 reg162;
union MIPI_REG_163 reg163;
union MIPI_REG_164 reg164;
union MIPI_REG_165 reg165;
union MIPI_REG_166 reg166;
union MIPI_REG_167 reg167;
union MIPI_REG_168 reg168;
union MIPI_REG_169 reg169;
union MIPI_REG_16A reg16A;
union MIPI_REG_16B reg16B;
union MIPI_REG_16C reg16C;
union MIPI_REG_16D reg16D;
union MIPI_REG_16E reg16E;
union MIPI_REG_16F reg16F;
union MIPI_REG_170 reg170;
union MIPI_REG_171 reg171;
union MIPI_REG_172 reg172;
union MIPI_REG_173 reg173;
union MIPI_REG_174 reg174;
union MIPI_REG_175 reg175;
union MIPI_REG_176 reg176;
union MIPI_REG_177 reg177;
union MIPI_REG_178 reg178;
union MIPI_REG_179 reg179;
union MIPI_REG_17A reg17A;
union MIPI_REG_17B reg17B;
union MIPI_REG_17C reg17C;
union MIPI_REG_17D reg17D;
union MIPI_REG_17E reg17E;
union MIPI_REG_17F reg17F;
union MIPI_REG_180 reg180;
union MIPI_REG_181 reg181;
union MIPI_REG_182 reg182;
union MIPI_REG_183 reg183;
union MIPI_REG_184 reg184;
union MIPI_REG_185 reg185;
union MIPI_REG_186 reg186;
union MIPI_REG_187 reg187;
union MIPI_REG_188 reg188;
union MIPI_REG_189 reg189;
union MIPI_REG_18A reg18A;
union MIPI_REG_18B reg18B;
union MIPI_REG_18C reg18C;
union MIPI_REG_18D reg18D;
union MIPI_REG_18E reg18E;
union MIPI_REG_18F reg18F;
union MIPI_REG_190 reg190;
union MIPI_REG_191 reg191;
union MIPI_REG_192 reg192;
union MIPI_REG_193 reg193;
union MIPI_REG_194 reg194;
union MIPI_REG_195 reg195;
union MIPI_REG_196 reg196;
union MIPI_REG_197 reg197;
union MIPI_REG_198 reg198;
union MIPI_REG_199 reg199;
union MIPI_REG_19A reg19A;
union MIPI_REG_19B reg19B;
union MIPI_REG_19C reg19C;
union MIPI_REG_19D reg19D;
union MIPI_REG_19E reg19E;
union MIPI_REG_19F reg19F;
union MIPI_REG_1A0 reg1A0;
union MIPI_REG_1A1 reg1A1;
union MIPI_REG_1A2 reg1A2;
union MIPI_REG_1A3 reg1A3;
union MIPI_REG_1A4 reg1A4;
union MIPI_REG_1A5 reg1A5;
union MIPI_REG_1A6 reg1A6;
union MIPI_REG_1A7 reg1A7;
union MIPI_REG_1A8 reg1A8;
union MIPI_REG_1A9 reg1A9;
union MIPI_REG_1AA reg1AA;
union MIPI_REG_1AB reg1AB;
union MIPI_REG_1AC reg1AC;
union MIPI_REG_1AD reg1AD;
union MIPI_REG_1AE reg1AE;
union MIPI_REG_1AF reg1AF;
union MIPI_REG_1B0 reg1B0;
union MIPI_REG_1B1 reg1B1;
union MIPI_REG_1B2 reg1B2;
union MIPI_REG_1B3 reg1B3;
union MIPI_REG_1B4 reg1B4;
union MIPI_REG_1B5 reg1B5;
union MIPI_REG_1B6 reg1B6;
union MIPI_REG_1B7 reg1B7;
union MIPI_REG_1B8 reg1B8;
union MIPI_REG_1B9 reg1B9;
union MIPI_REG_1BA reg1BA;
union MIPI_REG_1BB reg1BB;
union MIPI_REG_1BC reg1BC;
union MIPI_REG_1BD reg1BD;
union MIPI_REG_1BE reg1BE;
union MIPI_REG_1BF reg1BF;
union MIPI_REG_1C0 reg1C0;
union MIPI_REG_1C1 reg1C1;
union MIPI_REG_1C2 reg1C2;
union MIPI_REG_1C3 reg1C3;
union MIPI_REG_1C4 reg1C4;
union MIPI_REG_1C5 reg1C5;
union MIPI_REG_1C6 reg1C6;
union MIPI_REG_1C7 reg1C7;
union MIPI_REG_1C8 reg1C8;
union MIPI_REG_1C9 reg1C9;
union MIPI_REG_1CA reg1CA;
union MIPI_REG_1CB reg1CB;
union MIPI_REG_1CC reg1CC;
union MIPI_REG_1CD reg1CD;
union MIPI_REG_1CE reg1CE;
union MIPI_REG_1CF reg1CF;
union MIPI_REG_1D0 reg1D0;
union MIPI_REG_1D1 reg1D1;
union MIPI_REG_1D2 reg1D2;
union MIPI_REG_1D3 reg1D3;
union MIPI_REG_1D4 reg1D4;
union MIPI_REG_1D5 reg1D5;
union MIPI_REG_1D6 reg1D6;
union MIPI_REG_1D7 reg1D7;
union MIPI_REG_1D8 reg1D8;
union MIPI_REG_1D9 reg1D9;
union MIPI_REG_1DA reg1DA;
union MIPI_REG_1DB reg1DB;
union MIPI_REG_1DC reg1DC;
union MIPI_REG_1DD reg1DD;
union MIPI_REG_1DE reg1DE;
union MIPI_REG_1DF reg1DF;
union MIPI_REG_1E0 reg1E0;
union MIPI_REG_1E1 reg1E1;
union MIPI_REG_1E2 reg1E2;
union MIPI_REG_1E3 reg1E3;
union MIPI_REG_1E4 reg1E4;
union MIPI_REG_1E5 reg1E5;
union MIPI_REG_1E6 reg1E6;
union MIPI_REG_1E7 reg1E7;
union MIPI_REG_1E8 reg1E8;
union MIPI_REG_1E9 reg1E9;
union MIPI_REG_1EA reg1EA;
union MIPI_REG_1EB reg1EB;
union MIPI_REG_1EC reg1EC;
union MIPI_REG_1ED reg1ED;
union MIPI_REG_1EE reg1EE;
union MIPI_REG_1EF reg1EF;
union MIPI_REG_1F0 reg1F0;
union MIPI_REG_1F1 reg1F1;
union MIPI_REG_1F2 reg1F2;
union MIPI_REG_1F3 reg1F3;
union MIPI_REG_1F4 reg1F4;
union MIPI_REG_1F5 reg1F5;
union MIPI_REG_1F6 reg1F6;
union MIPI_REG_1F7 reg1F7;
union MIPI_REG_1F8 reg1F8;
union MIPI_REG_1F9 reg1F9;
union MIPI_REG_1FA reg1FA;
union MIPI_REG_1FB reg1FB;
union MIPI_REG_1FC reg1FC;
union MIPI_REG_1FD reg1FD;
union MIPI_REG_1FE reg1FE;
union MIPI_REG_1FF reg1FF;
} mipi_t;

extern mipi_t mipi;

#endif
