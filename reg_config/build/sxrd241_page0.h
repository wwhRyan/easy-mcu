#ifndef __SXRD241_Page0_H__
#define __SXRD241_Page0_H__

#include <stdint.h>

#define SXRD241_Page0_BASE_ADDRESS 0x0000
#define SXRD241_Page0_REG_NUM 255
#define SXRD241_Page0_REG_ADDR(reg) REG_ADDR(SXRD241_Page0_BASE_ADDRESS,sxrd241_page0_t,reg)

union SXRD241_Page0_REG_00 {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t DSI_BGREN:1;
uint8_t SC_IS_XCH:2;
uint8_t GMAR_EN:1;
uint8_t RT_EN:1;
uint8_t DSI_EN:1;
uint8_t PTAT_EN:1;
};};
union SXRD241_Page0_REG_01 {
uint8_t byte;    struct {
uint8_t THBG_ENA:1;
uint8_t TC_ENA:1;
uint8_t TC_EXT_ENA:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union SXRD241_Page0_REG_02 {
uint8_t byte;    struct {
uint8_t HC_I2C:1;
uint8_t HA_I2C:1;
uint8_t H_ENA:1;
uint8_t H_SEL:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union SXRD241_Page0_REG_03 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_04 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_05 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_06 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_07 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_08 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_09 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_0A {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_0B {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_0C {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_0D {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_0E {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_0F {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_10 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_11 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_12 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_13 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_14 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_15 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_16 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_17 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_18 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_19 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_1A {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_1B {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_1C {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_1D {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_1E {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_1F {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_20 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_21 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_22 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_23 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_24 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_25 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_26 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_27 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_28 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_29 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_2A {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_2B {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_2C {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_2D {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_2E {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_2F {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_30 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_31 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_32 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_33 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_34 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_35 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_36 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_37 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_38 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_39 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_3A {
uint8_t byte;    struct {
uint8_t SEL_A:8;
};};
union SXRD241_Page0_REG_3B {
uint8_t byte;    struct {
uint8_t SEL_B:8;
};};
union SXRD241_Page0_REG_3C {
uint8_t byte;    struct {
uint8_t SEL_C:8;
};};
union SXRD241_Page0_REG_3D {
uint8_t byte;    struct {
uint8_t SEL_HC:4;
uint8_t SEL_HA:4;
};};
union SXRD241_Page0_REG_3E {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_3F {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_40 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_41 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_42 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_43 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_44 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_45 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_46 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_47 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_48 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_49 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_4A {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_4B {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_4C {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_4D {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_4E {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_4F {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_50 {
uint8_t byte;    struct {
uint8_t PERI_P:8;
};};
union SXRD241_Page0_REG_51 {
uint8_t byte;    struct {
uint8_t PERI_N:8;
};};
union SXRD241_Page0_REG_52 {
uint8_t byte;    struct {
uint8_t RINP:8;
};};
union SXRD241_Page0_REG_53 {
uint8_t byte;    struct {
uint8_t RINN:8;
};};
union SXRD241_Page0_REG_54 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_55 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_56 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_57 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_58 {
uint8_t byte;    struct {
uint8_t GMAR1P:8;
};};
union SXRD241_Page0_REG_59 {
uint8_t byte;    struct {
uint8_t GMAG1P:8;
};};
union SXRD241_Page0_REG_5A {
uint8_t byte;    struct {
uint8_t GMAB1P:8;
};};
union SXRD241_Page0_REG_5B {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_5C {
uint8_t byte;    struct {
uint8_t GMAR1N:8;
};};
union SXRD241_Page0_REG_5D {
uint8_t byte;    struct {
uint8_t GMAG1N:8;
};};
union SXRD241_Page0_REG_5E {
uint8_t byte;    struct {
uint8_t GMAB1N:8;
};};
union SXRD241_Page0_REG_5F {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_60 {
uint8_t byte;    struct {
uint8_t GMAR2P:8;
};};
union SXRD241_Page0_REG_61 {
uint8_t byte;    struct {
uint8_t GMAG2P:8;
};};
union SXRD241_Page0_REG_62 {
uint8_t byte;    struct {
uint8_t GMAB2P:8;
};};
union SXRD241_Page0_REG_63 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_64 {
uint8_t byte;    struct {
uint8_t GMAR2N:8;
};};
union SXRD241_Page0_REG_65 {
uint8_t byte;    struct {
uint8_t GMAG2N:8;
};};
union SXRD241_Page0_REG_66 {
uint8_t byte;    struct {
uint8_t GMAB2N:8;
};};
union SXRD241_Page0_REG_67 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_68 {
uint8_t byte;    struct {
uint8_t GMAR3P:8;
};};
union SXRD241_Page0_REG_69 {
uint8_t byte;    struct {
uint8_t GMAG3P:8;
};};
union SXRD241_Page0_REG_6A {
uint8_t byte;    struct {
uint8_t GMAB3P:8;
};};
union SXRD241_Page0_REG_6B {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_6C {
uint8_t byte;    struct {
uint8_t GMAR3N:8;
};};
union SXRD241_Page0_REG_6D {
uint8_t byte;    struct {
uint8_t GMAG3N:8;
};};
union SXRD241_Page0_REG_6E {
uint8_t byte;    struct {
uint8_t GMAB3N:8;
};};
union SXRD241_Page0_REG_6F {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_70 {
uint8_t byte;    struct {
uint8_t GMAR4P:8;
};};
union SXRD241_Page0_REG_71 {
uint8_t byte;    struct {
uint8_t GMAG4P:8;
};};
union SXRD241_Page0_REG_72 {
uint8_t byte;    struct {
uint8_t GMAB4P:8;
};};
union SXRD241_Page0_REG_73 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_74 {
uint8_t byte;    struct {
uint8_t GMAR4N:8;
};};
union SXRD241_Page0_REG_75 {
uint8_t byte;    struct {
uint8_t GMAG4N:8;
};};
union SXRD241_Page0_REG_76 {
uint8_t byte;    struct {
uint8_t GMAB4N:8;
};};
union SXRD241_Page0_REG_77 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_78 {
uint8_t byte;    struct {
uint8_t GMAR5P:8;
};};
union SXRD241_Page0_REG_79 {
uint8_t byte;    struct {
uint8_t GMAG5P:8;
};};
union SXRD241_Page0_REG_7A {
uint8_t byte;    struct {
uint8_t GMAB5P:8;
};};
union SXRD241_Page0_REG_7B {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_7C {
uint8_t byte;    struct {
uint8_t GMAR5N:8;
};};
union SXRD241_Page0_REG_7D {
uint8_t byte;    struct {
uint8_t GMAG5N:8;
};};
union SXRD241_Page0_REG_7E {
uint8_t byte;    struct {
uint8_t GMAB5N:8;
};};
union SXRD241_Page0_REG_7F {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_80 {
uint8_t byte;    struct {
uint8_t GMAR6P:8;
};};
union SXRD241_Page0_REG_81 {
uint8_t byte;    struct {
uint8_t GMAG6P:8;
};};
union SXRD241_Page0_REG_82 {
uint8_t byte;    struct {
uint8_t GMAB6P:8;
};};
union SXRD241_Page0_REG_83 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_84 {
uint8_t byte;    struct {
uint8_t GMAR6N:8;
};};
union SXRD241_Page0_REG_85 {
uint8_t byte;    struct {
uint8_t GMAG6N:8;
};};
union SXRD241_Page0_REG_86 {
uint8_t byte;    struct {
uint8_t GMAB6N:8;
};};
union SXRD241_Page0_REG_87 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_88 {
uint8_t byte;    struct {
uint8_t GMAR7P:8;
};};
union SXRD241_Page0_REG_89 {
uint8_t byte;    struct {
uint8_t GMAG7P:8;
};};
union SXRD241_Page0_REG_8A {
uint8_t byte;    struct {
uint8_t GMAB7P:8;
};};
union SXRD241_Page0_REG_8B {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_8C {
uint8_t byte;    struct {
uint8_t GMAR7N:8;
};};
union SXRD241_Page0_REG_8D {
uint8_t byte;    struct {
uint8_t GMAG7N:8;
};};
union SXRD241_Page0_REG_8E {
uint8_t byte;    struct {
uint8_t GMAB7N:8;
};};
union SXRD241_Page0_REG_8F {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_90 {
uint8_t byte;    struct {
uint8_t GMAR8P:8;
};};
union SXRD241_Page0_REG_91 {
uint8_t byte;    struct {
uint8_t GMAG8P:8;
};};
union SXRD241_Page0_REG_92 {
uint8_t byte;    struct {
uint8_t GMAB8P:8;
};};
union SXRD241_Page0_REG_93 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_94 {
uint8_t byte;    struct {
uint8_t GMAR8N:8;
};};
union SXRD241_Page0_REG_95 {
uint8_t byte;    struct {
uint8_t GMAG8N:8;
};};
union SXRD241_Page0_REG_96 {
uint8_t byte;    struct {
uint8_t GMAB8N:8;
};};
union SXRD241_Page0_REG_97 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_98 {
uint8_t byte;    struct {
uint8_t GMAR9P:8;
};};
union SXRD241_Page0_REG_99 {
uint8_t byte;    struct {
uint8_t GMAG9P:8;
};};
union SXRD241_Page0_REG_9A {
uint8_t byte;    struct {
uint8_t GMAB9P:8;
};};
union SXRD241_Page0_REG_9B {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_9C {
uint8_t byte;    struct {
uint8_t GMAR9N:8;
};};
union SXRD241_Page0_REG_9D {
uint8_t byte;    struct {
uint8_t GMAG9N:8;
};};
union SXRD241_Page0_REG_9E {
uint8_t byte;    struct {
uint8_t GMAB9N:8;
};};
union SXRD241_Page0_REG_9F {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_A0 {
uint8_t byte;    struct {
uint8_t GMAR10P:8;
};};
union SXRD241_Page0_REG_A1 {
uint8_t byte;    struct {
uint8_t GMAG10P:8;
};};
union SXRD241_Page0_REG_A2 {
uint8_t byte;    struct {
uint8_t GMAB10P:8;
};};
union SXRD241_Page0_REG_A3 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_A4 {
uint8_t byte;    struct {
uint8_t GMAR10N:8;
};};
union SXRD241_Page0_REG_A5 {
uint8_t byte;    struct {
uint8_t GMAG10N:8;
};};
union SXRD241_Page0_REG_A6 {
uint8_t byte;    struct {
uint8_t GMAB10N:8;
};};
union SXRD241_Page0_REG_A7 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_A8 {
uint8_t byte;    struct {
uint8_t GMAR11P:8;
};};
union SXRD241_Page0_REG_A9 {
uint8_t byte;    struct {
uint8_t GMAG11P:8;
};};
union SXRD241_Page0_REG_AA {
uint8_t byte;    struct {
uint8_t GMAB11P:8;
};};
union SXRD241_Page0_REG_AB {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_AC {
uint8_t byte;    struct {
uint8_t GMAR11N:8;
};};
union SXRD241_Page0_REG_AD {
uint8_t byte;    struct {
uint8_t GMAG11N:8;
};};
union SXRD241_Page0_REG_AE {
uint8_t byte;    struct {
uint8_t GMAB11N:8;
};};
union SXRD241_Page0_REG_AF {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_B0 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_B1 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_B2 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_B3 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_B4 {
uint8_t byte;    struct {
uint8_t CAL_I:8;
};};
union SXRD241_Page0_REG_B5 {
uint8_t byte;    struct {
uint8_t THBG_I:8;
};};
union SXRD241_Page0_REG_B6 {
uint8_t byte;    struct {
uint8_t ITUNE_I:8;
};};
union SXRD241_Page0_REG_B7 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_B8 {
uint8_t byte;    struct {
uint8_t OSC1:8;
};};
union SXRD241_Page0_REG_B9 {
uint8_t byte;    struct {
uint8_t OSC2:8;
};};
union SXRD241_Page0_REG_BA {
uint8_t byte;    struct {
uint8_t RTUNE:6;
uint8_t  :1;
uint8_t  :1;
};};
union SXRD241_Page0_REG_BB {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_BC {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_BD {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_BE {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_BF {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_C0 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_C1 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_C2 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_C3 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_C4 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_C5 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_C6 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_C7 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_C8 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_C9 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_CA {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_CB {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_CC {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_CD {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_CE {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_CF {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_D0 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_D1 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_D2 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_D3 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_D4 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_D5 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_D6 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_D7 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_D8 {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t PPROG:1;
uint8_t  :1;
uint8_t OTP_EN:1;
uint8_t POR:1;
uint8_t  :1;
uint8_t PWE:1;
};};
union SXRD241_Page0_REG_D9 {
uint8_t byte;    struct {
uint8_t XA:5;
uint8_t XY:3;
};};
union SXRD241_Page0_REG_DA {
uint8_t byte;    struct {
uint8_t PDA:8;
};};
union SXRD241_Page0_REG_DB {
uint8_t byte;    struct {
uint8_t PDB:8;
};};
union SXRD241_Page0_REG_DC {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_DD {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_DE {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_DF {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_E0 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_E1 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_E2 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_E3 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_E4 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_E5 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_E6 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_E7 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_E8 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_E9 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_EA {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_EB {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_EC {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_ED {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_EE {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_EF {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_F0 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_F1 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_F2 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_F3 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_F4 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_F5 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_F6 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_F7 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_F8 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_F9 {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_FA {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_FB {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_FC {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_FD {
uint8_t byte;    struct {
uint8_t  :8;
};};
union SXRD241_Page0_REG_FE {
uint8_t byte;    struct {
uint8_t  :8;
};};
typedef struct SXRD241_Page0_T {
union SXRD241_Page0_REG_00 reg00;
union SXRD241_Page0_REG_01 reg01;
union SXRD241_Page0_REG_02 reg02;
union SXRD241_Page0_REG_03 reg03;
union SXRD241_Page0_REG_04 reg04;
union SXRD241_Page0_REG_05 reg05;
union SXRD241_Page0_REG_06 reg06;
union SXRD241_Page0_REG_07 reg07;
union SXRD241_Page0_REG_08 reg08;
union SXRD241_Page0_REG_09 reg09;
union SXRD241_Page0_REG_0A reg0A;
union SXRD241_Page0_REG_0B reg0B;
union SXRD241_Page0_REG_0C reg0C;
union SXRD241_Page0_REG_0D reg0D;
union SXRD241_Page0_REG_0E reg0E;
union SXRD241_Page0_REG_0F reg0F;
union SXRD241_Page0_REG_10 reg10;
union SXRD241_Page0_REG_11 reg11;
union SXRD241_Page0_REG_12 reg12;
union SXRD241_Page0_REG_13 reg13;
union SXRD241_Page0_REG_14 reg14;
union SXRD241_Page0_REG_15 reg15;
union SXRD241_Page0_REG_16 reg16;
union SXRD241_Page0_REG_17 reg17;
union SXRD241_Page0_REG_18 reg18;
union SXRD241_Page0_REG_19 reg19;
union SXRD241_Page0_REG_1A reg1A;
union SXRD241_Page0_REG_1B reg1B;
union SXRD241_Page0_REG_1C reg1C;
union SXRD241_Page0_REG_1D reg1D;
union SXRD241_Page0_REG_1E reg1E;
union SXRD241_Page0_REG_1F reg1F;
union SXRD241_Page0_REG_20 reg20;
union SXRD241_Page0_REG_21 reg21;
union SXRD241_Page0_REG_22 reg22;
union SXRD241_Page0_REG_23 reg23;
union SXRD241_Page0_REG_24 reg24;
union SXRD241_Page0_REG_25 reg25;
union SXRD241_Page0_REG_26 reg26;
union SXRD241_Page0_REG_27 reg27;
union SXRD241_Page0_REG_28 reg28;
union SXRD241_Page0_REG_29 reg29;
union SXRD241_Page0_REG_2A reg2A;
union SXRD241_Page0_REG_2B reg2B;
union SXRD241_Page0_REG_2C reg2C;
union SXRD241_Page0_REG_2D reg2D;
union SXRD241_Page0_REG_2E reg2E;
union SXRD241_Page0_REG_2F reg2F;
union SXRD241_Page0_REG_30 reg30;
union SXRD241_Page0_REG_31 reg31;
union SXRD241_Page0_REG_32 reg32;
union SXRD241_Page0_REG_33 reg33;
union SXRD241_Page0_REG_34 reg34;
union SXRD241_Page0_REG_35 reg35;
union SXRD241_Page0_REG_36 reg36;
union SXRD241_Page0_REG_37 reg37;
union SXRD241_Page0_REG_38 reg38;
union SXRD241_Page0_REG_39 reg39;
union SXRD241_Page0_REG_3A reg3A;
union SXRD241_Page0_REG_3B reg3B;
union SXRD241_Page0_REG_3C reg3C;
union SXRD241_Page0_REG_3D reg3D;
union SXRD241_Page0_REG_3E reg3E;
union SXRD241_Page0_REG_3F reg3F;
union SXRD241_Page0_REG_40 reg40;
union SXRD241_Page0_REG_41 reg41;
union SXRD241_Page0_REG_42 reg42;
union SXRD241_Page0_REG_43 reg43;
union SXRD241_Page0_REG_44 reg44;
union SXRD241_Page0_REG_45 reg45;
union SXRD241_Page0_REG_46 reg46;
union SXRD241_Page0_REG_47 reg47;
union SXRD241_Page0_REG_48 reg48;
union SXRD241_Page0_REG_49 reg49;
union SXRD241_Page0_REG_4A reg4A;
union SXRD241_Page0_REG_4B reg4B;
union SXRD241_Page0_REG_4C reg4C;
union SXRD241_Page0_REG_4D reg4D;
union SXRD241_Page0_REG_4E reg4E;
union SXRD241_Page0_REG_4F reg4F;
union SXRD241_Page0_REG_50 reg50;
union SXRD241_Page0_REG_51 reg51;
union SXRD241_Page0_REG_52 reg52;
union SXRD241_Page0_REG_53 reg53;
union SXRD241_Page0_REG_54 reg54;
union SXRD241_Page0_REG_55 reg55;
union SXRD241_Page0_REG_56 reg56;
union SXRD241_Page0_REG_57 reg57;
union SXRD241_Page0_REG_58 reg58;
union SXRD241_Page0_REG_59 reg59;
union SXRD241_Page0_REG_5A reg5A;
union SXRD241_Page0_REG_5B reg5B;
union SXRD241_Page0_REG_5C reg5C;
union SXRD241_Page0_REG_5D reg5D;
union SXRD241_Page0_REG_5E reg5E;
union SXRD241_Page0_REG_5F reg5F;
union SXRD241_Page0_REG_60 reg60;
union SXRD241_Page0_REG_61 reg61;
union SXRD241_Page0_REG_62 reg62;
union SXRD241_Page0_REG_63 reg63;
union SXRD241_Page0_REG_64 reg64;
union SXRD241_Page0_REG_65 reg65;
union SXRD241_Page0_REG_66 reg66;
union SXRD241_Page0_REG_67 reg67;
union SXRD241_Page0_REG_68 reg68;
union SXRD241_Page0_REG_69 reg69;
union SXRD241_Page0_REG_6A reg6A;
union SXRD241_Page0_REG_6B reg6B;
union SXRD241_Page0_REG_6C reg6C;
union SXRD241_Page0_REG_6D reg6D;
union SXRD241_Page0_REG_6E reg6E;
union SXRD241_Page0_REG_6F reg6F;
union SXRD241_Page0_REG_70 reg70;
union SXRD241_Page0_REG_71 reg71;
union SXRD241_Page0_REG_72 reg72;
union SXRD241_Page0_REG_73 reg73;
union SXRD241_Page0_REG_74 reg74;
union SXRD241_Page0_REG_75 reg75;
union SXRD241_Page0_REG_76 reg76;
union SXRD241_Page0_REG_77 reg77;
union SXRD241_Page0_REG_78 reg78;
union SXRD241_Page0_REG_79 reg79;
union SXRD241_Page0_REG_7A reg7A;
union SXRD241_Page0_REG_7B reg7B;
union SXRD241_Page0_REG_7C reg7C;
union SXRD241_Page0_REG_7D reg7D;
union SXRD241_Page0_REG_7E reg7E;
union SXRD241_Page0_REG_7F reg7F;
union SXRD241_Page0_REG_80 reg80;
union SXRD241_Page0_REG_81 reg81;
union SXRD241_Page0_REG_82 reg82;
union SXRD241_Page0_REG_83 reg83;
union SXRD241_Page0_REG_84 reg84;
union SXRD241_Page0_REG_85 reg85;
union SXRD241_Page0_REG_86 reg86;
union SXRD241_Page0_REG_87 reg87;
union SXRD241_Page0_REG_88 reg88;
union SXRD241_Page0_REG_89 reg89;
union SXRD241_Page0_REG_8A reg8A;
union SXRD241_Page0_REG_8B reg8B;
union SXRD241_Page0_REG_8C reg8C;
union SXRD241_Page0_REG_8D reg8D;
union SXRD241_Page0_REG_8E reg8E;
union SXRD241_Page0_REG_8F reg8F;
union SXRD241_Page0_REG_90 reg90;
union SXRD241_Page0_REG_91 reg91;
union SXRD241_Page0_REG_92 reg92;
union SXRD241_Page0_REG_93 reg93;
union SXRD241_Page0_REG_94 reg94;
union SXRD241_Page0_REG_95 reg95;
union SXRD241_Page0_REG_96 reg96;
union SXRD241_Page0_REG_97 reg97;
union SXRD241_Page0_REG_98 reg98;
union SXRD241_Page0_REG_99 reg99;
union SXRD241_Page0_REG_9A reg9A;
union SXRD241_Page0_REG_9B reg9B;
union SXRD241_Page0_REG_9C reg9C;
union SXRD241_Page0_REG_9D reg9D;
union SXRD241_Page0_REG_9E reg9E;
union SXRD241_Page0_REG_9F reg9F;
union SXRD241_Page0_REG_A0 regA0;
union SXRD241_Page0_REG_A1 regA1;
union SXRD241_Page0_REG_A2 regA2;
union SXRD241_Page0_REG_A3 regA3;
union SXRD241_Page0_REG_A4 regA4;
union SXRD241_Page0_REG_A5 regA5;
union SXRD241_Page0_REG_A6 regA6;
union SXRD241_Page0_REG_A7 regA7;
union SXRD241_Page0_REG_A8 regA8;
union SXRD241_Page0_REG_A9 regA9;
union SXRD241_Page0_REG_AA regAA;
union SXRD241_Page0_REG_AB regAB;
union SXRD241_Page0_REG_AC regAC;
union SXRD241_Page0_REG_AD regAD;
union SXRD241_Page0_REG_AE regAE;
union SXRD241_Page0_REG_AF regAF;
union SXRD241_Page0_REG_B0 regB0;
union SXRD241_Page0_REG_B1 regB1;
union SXRD241_Page0_REG_B2 regB2;
union SXRD241_Page0_REG_B3 regB3;
union SXRD241_Page0_REG_B4 regB4;
union SXRD241_Page0_REG_B5 regB5;
union SXRD241_Page0_REG_B6 regB6;
union SXRD241_Page0_REG_B7 regB7;
union SXRD241_Page0_REG_B8 regB8;
union SXRD241_Page0_REG_B9 regB9;
union SXRD241_Page0_REG_BA regBA;
union SXRD241_Page0_REG_BB regBB;
union SXRD241_Page0_REG_BC regBC;
union SXRD241_Page0_REG_BD regBD;
union SXRD241_Page0_REG_BE regBE;
union SXRD241_Page0_REG_BF regBF;
union SXRD241_Page0_REG_C0 regC0;
union SXRD241_Page0_REG_C1 regC1;
union SXRD241_Page0_REG_C2 regC2;
union SXRD241_Page0_REG_C3 regC3;
union SXRD241_Page0_REG_C4 regC4;
union SXRD241_Page0_REG_C5 regC5;
union SXRD241_Page0_REG_C6 regC6;
union SXRD241_Page0_REG_C7 regC7;
union SXRD241_Page0_REG_C8 regC8;
union SXRD241_Page0_REG_C9 regC9;
union SXRD241_Page0_REG_CA regCA;
union SXRD241_Page0_REG_CB regCB;
union SXRD241_Page0_REG_CC regCC;
union SXRD241_Page0_REG_CD regCD;
union SXRD241_Page0_REG_CE regCE;
union SXRD241_Page0_REG_CF regCF;
union SXRD241_Page0_REG_D0 regD0;
union SXRD241_Page0_REG_D1 regD1;
union SXRD241_Page0_REG_D2 regD2;
union SXRD241_Page0_REG_D3 regD3;
union SXRD241_Page0_REG_D4 regD4;
union SXRD241_Page0_REG_D5 regD5;
union SXRD241_Page0_REG_D6 regD6;
union SXRD241_Page0_REG_D7 regD7;
union SXRD241_Page0_REG_D8 regD8;
union SXRD241_Page0_REG_D9 regD9;
union SXRD241_Page0_REG_DA regDA;
union SXRD241_Page0_REG_DB regDB;
union SXRD241_Page0_REG_DC regDC;
union SXRD241_Page0_REG_DD regDD;
union SXRD241_Page0_REG_DE regDE;
union SXRD241_Page0_REG_DF regDF;
union SXRD241_Page0_REG_E0 regE0;
union SXRD241_Page0_REG_E1 regE1;
union SXRD241_Page0_REG_E2 regE2;
union SXRD241_Page0_REG_E3 regE3;
union SXRD241_Page0_REG_E4 regE4;
union SXRD241_Page0_REG_E5 regE5;
union SXRD241_Page0_REG_E6 regE6;
union SXRD241_Page0_REG_E7 regE7;
union SXRD241_Page0_REG_E8 regE8;
union SXRD241_Page0_REG_E9 regE9;
union SXRD241_Page0_REG_EA regEA;
union SXRD241_Page0_REG_EB regEB;
union SXRD241_Page0_REG_EC regEC;
union SXRD241_Page0_REG_ED regED;
union SXRD241_Page0_REG_EE regEE;
union SXRD241_Page0_REG_EF regEF;
union SXRD241_Page0_REG_F0 regF0;
union SXRD241_Page0_REG_F1 regF1;
union SXRD241_Page0_REG_F2 regF2;
union SXRD241_Page0_REG_F3 regF3;
union SXRD241_Page0_REG_F4 regF4;
union SXRD241_Page0_REG_F5 regF5;
union SXRD241_Page0_REG_F6 regF6;
union SXRD241_Page0_REG_F7 regF7;
union SXRD241_Page0_REG_F8 regF8;
union SXRD241_Page0_REG_F9 regF9;
union SXRD241_Page0_REG_FA regFA;
union SXRD241_Page0_REG_FB regFB;
union SXRD241_Page0_REG_FC regFC;
union SXRD241_Page0_REG_FD regFD;
union SXRD241_Page0_REG_FE regFE;
} sxrd241_page0_t;

extern sxrd241_page0_t sxrd241_page0;

#endif
