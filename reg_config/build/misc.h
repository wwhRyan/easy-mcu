#ifndef __MISC_H__
#define __MISC_H__

#include <stdint.h>

#define MISC_BASE_ADDRESS 0x0000
#define MISC_REG_NUM 161
#define MISC_REG_ADDR(reg) REG_ADDR(MISC_BASE_ADDRESS,misc_t,reg)

union MISC_REG_00 {
uint8_t byte;    struct {
uint8_t GMPORT16_OE:1;
uint8_t GMPORT17_OE:1;
uint8_t GMPORT18_OE:1;
uint8_t GMPORT19_OE:1;
uint8_t GMPORT20_OE:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_01 {
uint8_t byte;    struct {
uint8_t GMPORT08_OE:1;
uint8_t GMPORT09_OE:1;
uint8_t GMPORT10_OE:1;
uint8_t  :1;
uint8_t GMPORT12_OE:1;
uint8_t GMPORT13_OE:1;
uint8_t GMPORT14_OE:1;
uint8_t GMPORT15_OE:1;
};};
union MISC_REG_02 {
uint8_t byte;    struct {
uint8_t GMPORT00_OE:1;
uint8_t GMPORT01_OE:1;
uint8_t GMPORT02_OE:1;
uint8_t GMPORT03_OE:1;
uint8_t GMPORT04_OE:1;
uint8_t GMPORT05_OE:1;
uint8_t GMPORT06_OE:1;
uint8_t GMPORT07_OE:1;
};};
union MISC_REG_03 {
uint8_t byte;    struct {
uint8_t GMPORT20_SEL:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_04 {
uint8_t byte;    struct {
uint8_t GMPORT16_SEL:2;
uint8_t GMPORT17_SEL:2;
uint8_t GMPORT18_SEL:2;
uint8_t GMPORT19_SEL:2;
};};
union MISC_REG_05 {
uint8_t byte;    struct {
uint8_t GMPORT12_SEL:2;
uint8_t GMPORT13_SEL:2;
uint8_t GMPORT14_SEL:2;
uint8_t GMPORT15_SEL:2;
};};
union MISC_REG_06 {
uint8_t byte;    struct {
uint8_t GMPORT08_SEL:2;
uint8_t GMPORT09_SEL:2;
uint8_t GMPORT10_SEL:2;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_07 {
uint8_t byte;    struct {
uint8_t GMPORT04_SEL:2;
uint8_t GMPORT05_SEL:2;
uint8_t GMPORT06_SEL:2;
uint8_t GMPORT07_SEL:2;
};};
union MISC_REG_08 {
uint8_t byte;    struct {
uint8_t GMPORT00_SEL:2;
uint8_t GMPORT01_SEL:2;
uint8_t GMPORT02_SEL:2;
uint8_t GMPORT03_SEL:2;
};};
union MISC_REG_09 {
uint8_t byte;    struct {
uint8_t GMPORT_COUT_SEL:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_0A {
uint8_t byte;    struct {
uint8_t GMPORT_COUT_DELAY:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_0B {
uint8_t byte;    struct {
uint8_t GMPORT_COUT_DELAY:8;
};};
union MISC_REG_0C {
uint8_t byte;    struct {
uint8_t GMPORT_COUT_WIDTH:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_0D {
uint8_t byte;    struct {
uint8_t GMPORT_COUT_WIDTH:8;
};};
union MISC_REG_0E {
uint8_t byte;    struct {
uint8_t GMPORT_FRP_DELAY:8;
};};
union MISC_REG_0F {
uint8_t byte;    struct {
uint8_t GMPORT_FTRG_POL:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t GMPORT_FTRG0_EN:1;
uint8_t GMPORT_FTRG1_EN:1;
uint8_t GMPORT_FTRG2_EN:1;
uint8_t GMPORT_FTRG3_EN:1;
};};
union MISC_REG_10 {
uint8_t byte;    struct {
uint8_t GMPORT_FTRG_WIDTH:8;
};};
union MISC_REG_11 {
uint8_t byte;    struct {
uint8_t GMPORT_FIDSEL_FTRG0:2;
uint8_t GMPORT_FIDSEL_FTRG1:2;
uint8_t GMPORT_FIDSEL_FTRG2:2;
uint8_t GMPORT_FIDSEL_FTRG3:2;
};};
union MISC_REG_12 {
uint8_t byte;    struct {
uint8_t GMPORT_DELAY_FTRG3:8;
};};
union MISC_REG_13 {
uint8_t byte;    struct {
uint8_t GMPORT_DELAY_FTRG3:8;
};};
union MISC_REG_14 {
uint8_t byte;    struct {
uint8_t GMPORT_DELAY_FTRG2:8;
};};
union MISC_REG_15 {
uint8_t byte;    struct {
uint8_t GMPORT_DELAY_FTRG2:8;
};};
union MISC_REG_16 {
uint8_t byte;    struct {
uint8_t GMPORT_DELAY_FTRG1:8;
};};
union MISC_REG_17 {
uint8_t byte;    struct {
uint8_t GMPORT_DELAY_FTRG1:8;
};};
union MISC_REG_18 {
uint8_t byte;    struct {
uint8_t GMPORT_DELAY_FTRG0:8;
};};
union MISC_REG_19 {
uint8_t byte;    struct {
uint8_t GMPORT_DELAY_FTRG0:8;
};};
union MISC_REG_1A {
uint8_t byte;    struct {
uint8_t GMPORT_PBID_U:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_1B {
uint8_t byte;    struct {
uint8_t GMPORT_PBID_U:8;
};};
union MISC_REG_1C {
uint8_t byte;    struct {
uint8_t GMPORT_PBID_D:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_1D {
uint8_t byte;    struct {
uint8_t GMPORT_PBID_D:8;
};};
union MISC_REG_1E {
uint8_t byte;    struct {
uint8_t GMPORT_ILL_ALL:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_1F {
uint8_t byte;    struct {
uint8_t GMPORT_INP_ILL:3;
uint8_t  :1;
uint8_t GMPORT_FRC_ILL:2;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_20 {
uint8_t byte;    struct {
uint8_t GMPORT_UNIT_TIME:8;
};};
union MISC_REG_21 {
uint8_t byte;    struct {
uint8_t GMPORT_UNIT_TIME:8;
};};
union MISC_REG_22 {
uint8_t byte;    struct {
uint8_t GMPORT_PRST_ONT:6;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_23 {
uint8_t byte;    struct {
uint8_t GMPORT_PRST_ONT:8;
};};
union MISC_REG_24 {
uint8_t byte;    struct {
uint8_t GMPORT_PWEN1_ONT:6;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_25 {
uint8_t byte;    struct {
uint8_t GMPORT_PWEN1_ONT:8;
};};
union MISC_REG_26 {
uint8_t byte;    struct {
uint8_t GMPORT_PWEN2_ONT:6;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_27 {
uint8_t byte;    struct {
uint8_t GMPORT_PWEN2_ONT:8;
};};
union MISC_REG_28 {
uint8_t byte;    struct {
uint8_t GMPORT_PWEN3_ONT:6;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_29 {
uint8_t byte;    struct {
uint8_t GMPORT_PWEN3_ONT:8;
};};
union MISC_REG_2A {
uint8_t byte;    struct {
uint8_t GMPORT_PWEN4_ONT:6;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_2B {
uint8_t byte;    struct {
uint8_t GMPORT_PWEN4_ONT:8;
};};
union MISC_REG_2C {
uint8_t byte;    struct {
uint8_t GMPORT_GPIO_03_ONT:6;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_2D {
uint8_t byte;    struct {
uint8_t GMPORT_GPIO_03_ONT:8;
};};
union MISC_REG_2E {
uint8_t byte;    struct {
uint8_t GMPORT_GPIO_04_ONT:6;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_2F {
uint8_t byte;    struct {
uint8_t GMPORT_GPIO_04_ONT:8;
};};
union MISC_REG_30 {
uint8_t byte;    struct {
uint8_t GMPORT_GPIO_09_ONT:6;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_31 {
uint8_t byte;    struct {
uint8_t GMPORT_GPIO_09_ONT:8;
};};
union MISC_REG_32 {
uint8_t byte;    struct {
uint8_t GMPORT_GPIO_10_ONT:6;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_33 {
uint8_t byte;    struct {
uint8_t GMPORT_GPIO_10_ONT:8;
};};
union MISC_REG_34 {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_35 {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_36 {
uint8_t byte;    struct {
uint8_t GMPORT_PRST_OFFT:6;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_37 {
uint8_t byte;    struct {
uint8_t GMPORT_PRST_OFFT:8;
};};
union MISC_REG_38 {
uint8_t byte;    struct {
uint8_t GMPORT_PWEN1_OFFT:6;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_39 {
uint8_t byte;    struct {
uint8_t GMPORT_PWEN1_OFFT:8;
};};
union MISC_REG_3A {
uint8_t byte;    struct {
uint8_t GMPORT_PWEN2_OFFT:6;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_3B {
uint8_t byte;    struct {
uint8_t GMPORT_PWEN2_OFFT:8;
};};
union MISC_REG_3C {
uint8_t byte;    struct {
uint8_t GMPORT_PWEN3_OFFT:6;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_3D {
uint8_t byte;    struct {
uint8_t GMPORT_PWEN3_OFFT:8;
};};
union MISC_REG_3E {
uint8_t byte;    struct {
uint8_t GMPORT_PWEN4_OFFT:6;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_3F {
uint8_t byte;    struct {
uint8_t GMPORT_PWEN4_OFFT:8;
};};
union MISC_REG_40 {
uint8_t byte;    struct {
uint8_t GMPORT_GPIO_03_OFFT:6;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_41 {
uint8_t byte;    struct {
uint8_t GMPORT_GPIO_03_OFFT:8;
};};
union MISC_REG_42 {
uint8_t byte;    struct {
uint8_t GMPORT_GPIO_04_OFFT:6;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_43 {
uint8_t byte;    struct {
uint8_t GMPORT_GPIO_04_OFFT:8;
};};
union MISC_REG_44 {
uint8_t byte;    struct {
uint8_t GMPORT_GPIO_09_OFFT:6;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_45 {
uint8_t byte;    struct {
uint8_t GMPORT_GPIO_09_OFFT:8;
};};
union MISC_REG_46 {
uint8_t byte;    struct {
uint8_t GMPORT_GPIO_10_OFFT:6;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_47 {
uint8_t byte;    struct {
uint8_t GMPORT_GPIO_10_OFFT:8;
};};
union MISC_REG_48 {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_49 {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_4A {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t GMPORT17_OUT:1;
uint8_t  :1;
uint8_t  :1;
uint8_t GMPORT20_OUT:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_4B {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t GMPORT09_OUT:1;
uint8_t GMPORT10_OUT:1;
uint8_t  :1;
uint8_t  :1;
uint8_t GMPORT13_OUT:1;
uint8_t GMPORT14_OUT:1;
uint8_t GMPORT15_OUT:1;
};};
union MISC_REG_4C {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t GMPORT03_OUT:1;
uint8_t GMPORT04_OUT:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_4D {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t GMPORT_PWEN4_EN:1;
uint8_t  :1;
uint8_t  :1;
uint8_t GMPORT_PRST_EN:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_4E {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t GMPORT_GPIO_09_EN:1;
uint8_t GMPORT_GPIO_10_EN:1;
uint8_t  :1;
uint8_t  :1;
uint8_t GMPORT_PWEN1_EN:1;
uint8_t GMPORT_PWEN2_EN:1;
uint8_t GMPORT_PWEN3_EN:1;
};};
union MISC_REG_4F {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t GMPORT_GPIO_03_EN:1;
uint8_t GMPORT_GPIO_04_EN:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_50 {
uint8_t byte;    struct {
uint8_t GMPORT_PW_ON:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_51 {
uint8_t byte;    struct {
uint8_t GMPORT_PW_OFF:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_52 {
uint8_t byte;    struct {
uint8_t GMPORT_OFF_FLG:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t GMPORT_ON_FLG:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_53 {
uint8_t byte;    struct {
uint8_t TREG_H_DBG_SEL:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_54 {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_55 {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_56 {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_57 {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_58 {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_59 {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_5A {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_5B {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_5C {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_5D {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_5E {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_5F {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_60 {
uint8_t byte;    struct {
uint8_t TREG_CKE_TPG:1;
uint8_t TREG_PATH_SEL_TPG:1;
uint8_t TREG_CKE_CNV:1;
uint8_t TREG_PATH_SEL_CNV:1;
uint8_t TREG_CKE_BCHS:1;
uint8_t TREG_PATH_SEL_BCHS:1;
uint8_t TREG_CKE_CE:1;
uint8_t TREG_PATH_SEL_CE:1;
};};
union MISC_REG_61 {
uint8_t byte;    struct {
uint8_t TREG_CKE_CABC:1;
uint8_t TREG_PATH_SEL_CABC:1;
uint8_t TREG_CKE_VKST:1;
uint8_t TREG_PATH_SEL_VKST:1;
uint8_t TREG_CKE_GETPIX:1;
uint8_t TREG_PATH_SEL_GETPIX:1;
uint8_t TREG_CKE_IDC:1;
uint8_t TREG_PATH_SEL_IDC:1;
};};
union MISC_REG_62 {
uint8_t byte;    struct {
uint8_t TREG_CKE_IPG:1;
uint8_t TREG_PATH_SEL_IPG:1;
uint8_t TREG_CKE_LGM:1;
uint8_t TREG_PATH_SEL_LGM:1;
uint8_t TREG_CKE_CSCO:1;
uint8_t TREG_PATH_SEL_CSCO:1;
uint8_t TREG_CKE_CRE:1;
uint8_t TREG_PATH_SEL_CRE:1;
};};
union MISC_REG_63 {
uint8_t byte;    struct {
uint8_t TREG_CKE_EB:1;
uint8_t TREG_PATH_SEL_EB:1;
uint8_t TREG_CKE_OGM:1;
uint8_t TREG_PATH_SEL_OGM:1;
uint8_t TREG_CKE_DIZ1:1;
uint8_t TREG_PATH_SEL_DIZ1:1;
uint8_t TREG_CKE_KST:1;
uint8_t TREG_PATH_SEL_KST:1;
};};
union MISC_REG_64 {
uint8_t byte;    struct {
uint8_t TREG_CKE_CEC:1;
uint8_t TREG_PATH_SEL_CEC:1;
uint8_t TREG_CKE_RGBW:1;
uint8_t TREG_PATH_SEL_RGBW:1;
uint8_t TREG_CKE_GAM:1;
uint8_t TREG_PATH_SEL_GAM:1;
uint8_t TREG_CKE_CSC:1;
uint8_t TREG_PATH_SEL_CSC:1;
};};
union MISC_REG_65 {
uint8_t byte;    struct {
uint8_t TREG_CKE_DIZ2:1;
uint8_t TREG_PATH_SEL_DIZ2:1;
uint8_t TREG_CKE_WEC:1;
uint8_t TREG_PATH_SEL_WEC:1;
uint8_t TREG_CKE_BP:1;
uint8_t TREG_PATH_SEL_BP:1;
uint8_t TREG_CKE_DC:1;
uint8_t TREG_PATH_SEL_DC:1;
};};
union MISC_REG_66 {
uint8_t byte;    struct {
uint8_t TREG_CKE_PI:1;
uint8_t TREG_PATH_SEL_PI:1;
uint8_t TREG_CKE_OVD:1;
uint8_t TREG_PATH_SEL_OVD:1;
uint8_t TREG_CKE_VXT:1;
uint8_t TREG_PATH_SEL_VXT:1;
uint8_t TREG_CKE_DIZ3:1;
uint8_t TREG_PATH_SEL_DIZ3:1;
};};
union MISC_REG_67 {
uint8_t byte;    struct {
uint8_t TREG_CKE_ODC:1;
uint8_t TREG_PATH_SEL_ODC:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_68 {
uint8_t byte;    struct {
uint8_t TREG_DYN_PATH_CTRL_EN:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_69 {
uint8_t byte;    struct {
uint8_t TREG_DYN_SWITCH_TIM:8;
};};
union MISC_REG_6A {
uint8_t byte;    struct {
uint8_t TREG_H1_BYP_SEL:8;
};};
union MISC_REG_6B {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t TREG_H1_BYP_SEL:1;
};};
union MISC_REG_6C {
uint8_t byte;    struct {
uint8_t TREG_H2_CKE_PIX:1;
uint8_t TREG_H2_CKE_FS:1;
uint8_t TREG_H3_CKE_FS:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_6D {
uint8_t byte;    struct {
uint8_t TREG_H3_CKE_PRBS:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_6E {
uint8_t byte;    struct {
uint8_t TREG_PATH_SEL_SHP:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_6F {
uint8_t byte;    struct {
uint8_t TREG_DYN_SEQ_FLG:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_70 {
uint8_t byte;    struct {
uint8_t TREG_MONI_SEL16:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_71 {
uint8_t byte;    struct {
uint8_t TREG_MONI_SEL15:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_72 {
uint8_t byte;    struct {
uint8_t TREG_MONI_SEL14:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_73 {
uint8_t byte;    struct {
uint8_t TREG_MONI_SEL13:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_74 {
uint8_t byte;    struct {
uint8_t TREG_MONI_SEL12:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_75 {
uint8_t byte;    struct {
uint8_t TREG_MONI_SEL11:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_76 {
uint8_t byte;    struct {
uint8_t TREG_MONI_SEL10:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_77 {
uint8_t byte;    struct {
uint8_t TREG_MONI_SEL09:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_78 {
uint8_t byte;    struct {
uint8_t TREG_MONI_SEL08:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_79 {
uint8_t byte;    struct {
uint8_t TREG_MONI_SEL07:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_7A {
uint8_t byte;    struct {
uint8_t TREG_MONI_SEL06:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_7B {
uint8_t byte;    struct {
uint8_t TREG_MONI_SEL05:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_7C {
uint8_t byte;    struct {
uint8_t TREG_MONI_SEL04:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_7D {
uint8_t byte;    struct {
uint8_t TREG_MONI_SEL03:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_7E {
uint8_t byte;    struct {
uint8_t TREG_MONI_SEL02:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_7F {
uint8_t byte;    struct {
uint8_t TREG_MONI_SEL01:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_80 {
uint8_t byte;    struct {
uint8_t HIF_SPI_READON:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_81 {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_82 {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_83 {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_84 {
uint8_t byte;    struct {
uint8_t HIF_SIZE_SEL:2;
uint8_t  :1;
uint8_t  :1;
uint8_t HIF_SPI_DMY:4;
};};
union MISC_REG_85 {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_86 {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_87 {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_88 {
uint8_t byte;    struct {
uint8_t H2M0_RST:1;
uint8_t H2M1_RST:1;
uint8_t H2M2_RST:1;
uint8_t  :1;
uint8_t H2S1_RST:1;
uint8_t H2S2_RST:1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_89 {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_8A {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_8B {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_8C {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_8D {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_8E {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_8F {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_90 {
uint8_t byte;    struct {
uint8_t TREG_RGT:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_91 {
uint8_t byte;    struct {
uint8_t TREG_DWN:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_92 {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_93 {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_94 {
uint8_t byte;    struct {
uint8_t TREG_FORCE_VD:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_95 {
uint8_t byte;    struct {
uint8_t TREG_VD_INHIBIT:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_96 {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_97 {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_98 {
uint8_t byte;    struct {
uint8_t TREG_INP_SEL:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_99 {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_9A {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_9B {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_9C {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_9D {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_9E {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_9F {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union MISC_REG_A0 {
uint8_t byte;    struct {
uint8_t TREG_LED_R_EN:1;
uint8_t TREG_LED_G_EN:1;
uint8_t TREG_LED_B_EN:1;
uint8_t TREG_LED_W_EN:1;
uint8_t TREG_LED_A_EN:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
typedef struct MISC_T {
union MISC_REG_00 reg00;
union MISC_REG_01 reg01;
union MISC_REG_02 reg02;
union MISC_REG_03 reg03;
union MISC_REG_04 reg04;
union MISC_REG_05 reg05;
union MISC_REG_06 reg06;
union MISC_REG_07 reg07;
union MISC_REG_08 reg08;
union MISC_REG_09 reg09;
union MISC_REG_0A reg0A;
union MISC_REG_0B reg0B;
union MISC_REG_0C reg0C;
union MISC_REG_0D reg0D;
union MISC_REG_0E reg0E;
union MISC_REG_0F reg0F;
union MISC_REG_10 reg10;
union MISC_REG_11 reg11;
union MISC_REG_12 reg12;
union MISC_REG_13 reg13;
union MISC_REG_14 reg14;
union MISC_REG_15 reg15;
union MISC_REG_16 reg16;
union MISC_REG_17 reg17;
union MISC_REG_18 reg18;
union MISC_REG_19 reg19;
union MISC_REG_1A reg1A;
union MISC_REG_1B reg1B;
union MISC_REG_1C reg1C;
union MISC_REG_1D reg1D;
union MISC_REG_1E reg1E;
union MISC_REG_1F reg1F;
union MISC_REG_20 reg20;
union MISC_REG_21 reg21;
union MISC_REG_22 reg22;
union MISC_REG_23 reg23;
union MISC_REG_24 reg24;
union MISC_REG_25 reg25;
union MISC_REG_26 reg26;
union MISC_REG_27 reg27;
union MISC_REG_28 reg28;
union MISC_REG_29 reg29;
union MISC_REG_2A reg2A;
union MISC_REG_2B reg2B;
union MISC_REG_2C reg2C;
union MISC_REG_2D reg2D;
union MISC_REG_2E reg2E;
union MISC_REG_2F reg2F;
union MISC_REG_30 reg30;
union MISC_REG_31 reg31;
union MISC_REG_32 reg32;
union MISC_REG_33 reg33;
union MISC_REG_34 reg34;
union MISC_REG_35 reg35;
union MISC_REG_36 reg36;
union MISC_REG_37 reg37;
union MISC_REG_38 reg38;
union MISC_REG_39 reg39;
union MISC_REG_3A reg3A;
union MISC_REG_3B reg3B;
union MISC_REG_3C reg3C;
union MISC_REG_3D reg3D;
union MISC_REG_3E reg3E;
union MISC_REG_3F reg3F;
union MISC_REG_40 reg40;
union MISC_REG_41 reg41;
union MISC_REG_42 reg42;
union MISC_REG_43 reg43;
union MISC_REG_44 reg44;
union MISC_REG_45 reg45;
union MISC_REG_46 reg46;
union MISC_REG_47 reg47;
union MISC_REG_48 reg48;
union MISC_REG_49 reg49;
union MISC_REG_4A reg4A;
union MISC_REG_4B reg4B;
union MISC_REG_4C reg4C;
union MISC_REG_4D reg4D;
union MISC_REG_4E reg4E;
union MISC_REG_4F reg4F;
union MISC_REG_50 reg50;
union MISC_REG_51 reg51;
union MISC_REG_52 reg52;
union MISC_REG_53 reg53;
union MISC_REG_54 reg54;
union MISC_REG_55 reg55;
union MISC_REG_56 reg56;
union MISC_REG_57 reg57;
union MISC_REG_58 reg58;
union MISC_REG_59 reg59;
union MISC_REG_5A reg5A;
union MISC_REG_5B reg5B;
union MISC_REG_5C reg5C;
union MISC_REG_5D reg5D;
union MISC_REG_5E reg5E;
union MISC_REG_5F reg5F;
union MISC_REG_60 reg60;
union MISC_REG_61 reg61;
union MISC_REG_62 reg62;
union MISC_REG_63 reg63;
union MISC_REG_64 reg64;
union MISC_REG_65 reg65;
union MISC_REG_66 reg66;
union MISC_REG_67 reg67;
union MISC_REG_68 reg68;
union MISC_REG_69 reg69;
union MISC_REG_6A reg6A;
union MISC_REG_6B reg6B;
union MISC_REG_6C reg6C;
union MISC_REG_6D reg6D;
union MISC_REG_6E reg6E;
union MISC_REG_6F reg6F;
union MISC_REG_70 reg70;
union MISC_REG_71 reg71;
union MISC_REG_72 reg72;
union MISC_REG_73 reg73;
union MISC_REG_74 reg74;
union MISC_REG_75 reg75;
union MISC_REG_76 reg76;
union MISC_REG_77 reg77;
union MISC_REG_78 reg78;
union MISC_REG_79 reg79;
union MISC_REG_7A reg7A;
union MISC_REG_7B reg7B;
union MISC_REG_7C reg7C;
union MISC_REG_7D reg7D;
union MISC_REG_7E reg7E;
union MISC_REG_7F reg7F;
union MISC_REG_80 reg80;
union MISC_REG_81 reg81;
union MISC_REG_82 reg82;
union MISC_REG_83 reg83;
union MISC_REG_84 reg84;
union MISC_REG_85 reg85;
union MISC_REG_86 reg86;
union MISC_REG_87 reg87;
union MISC_REG_88 reg88;
union MISC_REG_89 reg89;
union MISC_REG_8A reg8A;
union MISC_REG_8B reg8B;
union MISC_REG_8C reg8C;
union MISC_REG_8D reg8D;
union MISC_REG_8E reg8E;
union MISC_REG_8F reg8F;
union MISC_REG_90 reg90;
union MISC_REG_91 reg91;
union MISC_REG_92 reg92;
union MISC_REG_93 reg93;
union MISC_REG_94 reg94;
union MISC_REG_95 reg95;
union MISC_REG_96 reg96;
union MISC_REG_97 reg97;
union MISC_REG_98 reg98;
union MISC_REG_99 reg99;
union MISC_REG_9A reg9A;
union MISC_REG_9B reg9B;
union MISC_REG_9C reg9C;
union MISC_REG_9D reg9D;
union MISC_REG_9E reg9E;
union MISC_REG_9F reg9F;
union MISC_REG_A0 regA0;
} misc_t;

extern misc_t misc;

#endif
