#ifndef __LED_H__
#define __LED_H__

#include <stdint.h>

#define LED_BASE_ADDRESS 0x3200
#define LED_REG_NUM 428
#define LED_REG_ADDR(reg) REG_ADDR(LED_BASE_ADDRESS,led_t,reg)

union LED_REG_00 {
uint8_t byte;    struct {
uint8_t H3_LED_SF_MODE:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_01 {
uint8_t byte;    struct {
uint8_t H3_LED_SF_FID_SEL:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_02 {
uint8_t byte;    struct {
uint8_t H3_LED_SF_MODE_UQ:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_03 {
uint8_t byte;    struct {
uint8_t H3_LED_SF_DELAY:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_04 {
uint8_t byte;    struct {
uint8_t H3_LED_LINE_DELAY:8;
};};
union LED_REG_05 {
uint8_t byte;    struct {
uint8_t H3_LED_LINE_DELAY:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_06 {
uint8_t byte;    struct {
uint8_t H3_LED_OUT_INV:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_07 {
uint8_t byte;    struct {
uint8_t H3_LED_ROUT_OE:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_08 {
uint8_t byte;    struct {
uint8_t H3_LED_GOUT_OE:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_09 {
uint8_t byte;    struct {
uint8_t H3_LED_BOUT_OE:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_0A {
uint8_t byte;    struct {
uint8_t H3_LED_WOUT_OE:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_0B {
uint8_t byte;    struct {
uint8_t H3_LED_AOUT_OE:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_0C {
uint8_t byte;    struct {
uint8_t H3_LED_DISPLACE_COLOR_SEL_1F:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_0D {
uint8_t byte;    struct {
uint8_t H3_LED_DISPLACE_COLOR_SEL_2F:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_0E {
uint8_t byte;    struct {
uint8_t H3_LED_DISPLACE_COLOR_RDUTY:8;
};};
union LED_REG_0F {
uint8_t byte;    struct {
uint8_t H3_LED_DISPLACE_COLOR_RDUTY:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_10 {
uint8_t byte;    struct {
uint8_t H3_LED_DISPLACE_COLOR_GDUTY:8;
};};
union LED_REG_11 {
uint8_t byte;    struct {
uint8_t H3_LED_DISPLACE_COLOR_GDUTY:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_12 {
uint8_t byte;    struct {
uint8_t H3_LED_DISPLACE_COLOR_BDUTY:8;
};};
union LED_REG_13 {
uint8_t byte;    struct {
uint8_t H3_LED_DISPLACE_COLOR_BDUTY:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_14 {
uint8_t byte;    struct {
uint8_t H3_LED_DISPLACE_COLOR_REPEAT:8;
};};
union LED_REG_15 {
uint8_t byte;    struct {
uint8_t H3_LED_DISPLACE_COLOR_REPEAT:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_16 {
uint8_t byte;    struct {
uint8_t H3_LED_R_GAIN:8;
};};
union LED_REG_17 {
uint8_t byte;    struct {
uint8_t H3_LED_G_GAIN:8;
};};
union LED_REG_18 {
uint8_t byte;    struct {
uint8_t H3_LED_B_GAIN:8;
};};
union LED_REG_19 {
uint8_t byte;    struct {
uint8_t H3_LED_W_GAIN:8;
};};
union LED_REG_1A {
uint8_t byte;    struct {
uint8_t H3_LED_GAIN_MODE:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_1B {
uint8_t byte;    struct {
uint8_t H3_LED_CABC_GAIN:8;
};};
union LED_REG_1C {
uint8_t byte;    struct {
uint8_t H3_LED_P0_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_1D {
uint8_t byte;    struct {
uint8_t H3_LED_P1_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_1E {
uint8_t byte;    struct {
uint8_t H3_LED_P2_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_1F {
uint8_t byte;    struct {
uint8_t H3_LED_P3_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_20 {
uint8_t byte;    struct {
uint8_t H3_LED_P4_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_21 {
uint8_t byte;    struct {
uint8_t H3_LED_P5_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_22 {
uint8_t byte;    struct {
uint8_t H3_LED_P6_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_23 {
uint8_t byte;    struct {
uint8_t H3_LED_P7_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_24 {
uint8_t byte;    struct {
uint8_t H3_LED_P8_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_25 {
uint8_t byte;    struct {
uint8_t H3_LED_P9_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_26 {
uint8_t byte;    struct {
uint8_t H3_LED_P10_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_27 {
uint8_t byte;    struct {
uint8_t H3_LED_P11_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_28 {
uint8_t byte;    struct {
uint8_t H3_LED_P12_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_29 {
uint8_t byte;    struct {
uint8_t H3_LED_P13_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_2A {
uint8_t byte;    struct {
uint8_t H3_LED_P14_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_2B {
uint8_t byte;    struct {
uint8_t H3_LED_P15_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_2C {
uint8_t byte;    struct {
uint8_t H3_LED_P16_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_2D {
uint8_t byte;    struct {
uint8_t H3_LED_P17_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_2E {
uint8_t byte;    struct {
uint8_t H3_LED_P18_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_2F {
uint8_t byte;    struct {
uint8_t H3_LED_P19_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_30 {
uint8_t byte;    struct {
uint8_t H3_LED_P20_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_31 {
uint8_t byte;    struct {
uint8_t H3_LED_P21_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_32 {
uint8_t byte;    struct {
uint8_t H3_LED_P22_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_33 {
uint8_t byte;    struct {
uint8_t H3_LED_P23_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_34 {
uint8_t byte;    struct {
uint8_t H3_LED_P0_ON_ADD:8;
};};
union LED_REG_35 {
uint8_t byte;    struct {
uint8_t H3_LED_P0_ON_ADD:8;
};};
union LED_REG_36 {
uint8_t byte;    struct {
uint8_t H3_LED_P0_OFF_ADD:8;
};};
union LED_REG_37 {
uint8_t byte;    struct {
uint8_t H3_LED_P0_OFF_ADD:8;
};};
union LED_REG_38 {
uint8_t byte;    struct {
uint8_t H3_LED_P1_ON_ADD:8;
};};
union LED_REG_39 {
uint8_t byte;    struct {
uint8_t H3_LED_P1_ON_ADD:8;
};};
union LED_REG_3A {
uint8_t byte;    struct {
uint8_t H3_LED_P1_OFF_ADD:8;
};};
union LED_REG_3B {
uint8_t byte;    struct {
uint8_t H3_LED_P1_OFF_ADD:8;
};};
union LED_REG_3C {
uint8_t byte;    struct {
uint8_t H3_LED_P2_ON_ADD:8;
};};
union LED_REG_3D {
uint8_t byte;    struct {
uint8_t H3_LED_P2_ON_ADD:8;
};};
union LED_REG_3E {
uint8_t byte;    struct {
uint8_t H3_LED_P2_OFF_ADD:8;
};};
union LED_REG_3F {
uint8_t byte;    struct {
uint8_t H3_LED_P2_OFF_ADD:8;
};};
union LED_REG_40 {
uint8_t byte;    struct {
uint8_t H3_LED_P3_ON_ADD:8;
};};
union LED_REG_41 {
uint8_t byte;    struct {
uint8_t H3_LED_P3_ON_ADD:8;
};};
union LED_REG_42 {
uint8_t byte;    struct {
uint8_t H3_LED_P3_OFF_ADD:8;
};};
union LED_REG_43 {
uint8_t byte;    struct {
uint8_t H3_LED_P3_OFF_ADD:8;
};};
union LED_REG_44 {
uint8_t byte;    struct {
uint8_t H3_LED_P4_ON_ADD:8;
};};
union LED_REG_45 {
uint8_t byte;    struct {
uint8_t H3_LED_P4_ON_ADD:8;
};};
union LED_REG_46 {
uint8_t byte;    struct {
uint8_t H3_LED_P4_OFF_ADD:8;
};};
union LED_REG_47 {
uint8_t byte;    struct {
uint8_t H3_LED_P4_OFF_ADD:8;
};};
union LED_REG_48 {
uint8_t byte;    struct {
uint8_t H3_LED_P5_ON_ADD:8;
};};
union LED_REG_49 {
uint8_t byte;    struct {
uint8_t H3_LED_P5_ON_ADD:8;
};};
union LED_REG_4A {
uint8_t byte;    struct {
uint8_t H3_LED_P5_OFF_ADD:8;
};};
union LED_REG_4B {
uint8_t byte;    struct {
uint8_t H3_LED_P5_OFF_ADD:8;
};};
union LED_REG_4C {
uint8_t byte;    struct {
uint8_t H3_LED_P6_ON_ADD:8;
};};
union LED_REG_4D {
uint8_t byte;    struct {
uint8_t H3_LED_P6_ON_ADD:8;
};};
union LED_REG_4E {
uint8_t byte;    struct {
uint8_t H3_LED_P6_OFF_ADD:8;
};};
union LED_REG_4F {
uint8_t byte;    struct {
uint8_t H3_LED_P6_OFF_ADD:8;
};};
union LED_REG_50 {
uint8_t byte;    struct {
uint8_t H3_LED_P7_ON_ADD:8;
};};
union LED_REG_51 {
uint8_t byte;    struct {
uint8_t H3_LED_P7_ON_ADD:8;
};};
union LED_REG_52 {
uint8_t byte;    struct {
uint8_t H3_LED_P7_OFF_ADD:8;
};};
union LED_REG_53 {
uint8_t byte;    struct {
uint8_t H3_LED_P7_OFF_ADD:8;
};};
union LED_REG_54 {
uint8_t byte;    struct {
uint8_t H3_LED_P8_ON_ADD:8;
};};
union LED_REG_55 {
uint8_t byte;    struct {
uint8_t H3_LED_P8_ON_ADD:8;
};};
union LED_REG_56 {
uint8_t byte;    struct {
uint8_t H3_LED_P8_OFF_ADD:8;
};};
union LED_REG_57 {
uint8_t byte;    struct {
uint8_t H3_LED_P8_OFF_ADD:8;
};};
union LED_REG_58 {
uint8_t byte;    struct {
uint8_t H3_LED_P9_ON_ADD:8;
};};
union LED_REG_59 {
uint8_t byte;    struct {
uint8_t H3_LED_P9_ON_ADD:8;
};};
union LED_REG_5A {
uint8_t byte;    struct {
uint8_t H3_LED_P9_OFF_ADD:8;
};};
union LED_REG_5B {
uint8_t byte;    struct {
uint8_t H3_LED_P9_OFF_ADD:8;
};};
union LED_REG_5C {
uint8_t byte;    struct {
uint8_t H3_LED_P10_ON_ADD:8;
};};
union LED_REG_5D {
uint8_t byte;    struct {
uint8_t H3_LED_P10_ON_ADD:8;
};};
union LED_REG_5E {
uint8_t byte;    struct {
uint8_t H3_LED_P10_OFF_ADD:8;
};};
union LED_REG_5F {
uint8_t byte;    struct {
uint8_t H3_LED_P10_OFF_ADD:8;
};};
union LED_REG_60 {
uint8_t byte;    struct {
uint8_t H3_LED_P11_ON_ADD:8;
};};
union LED_REG_61 {
uint8_t byte;    struct {
uint8_t H3_LED_P11_ON_ADD:8;
};};
union LED_REG_62 {
uint8_t byte;    struct {
uint8_t H3_LED_P11_OFF_ADD:8;
};};
union LED_REG_63 {
uint8_t byte;    struct {
uint8_t H3_LED_P11_OFF_ADD:8;
};};
union LED_REG_64 {
uint8_t byte;    struct {
uint8_t H3_LED_P12_ON_ADD:8;
};};
union LED_REG_65 {
uint8_t byte;    struct {
uint8_t H3_LED_P12_ON_ADD:8;
};};
union LED_REG_66 {
uint8_t byte;    struct {
uint8_t H3_LED_P12_OFF_ADD:8;
};};
union LED_REG_67 {
uint8_t byte;    struct {
uint8_t H3_LED_P12_OFF_ADD:8;
};};
union LED_REG_68 {
uint8_t byte;    struct {
uint8_t H3_LED_P13_ON_ADD:8;
};};
union LED_REG_69 {
uint8_t byte;    struct {
uint8_t H3_LED_P13_ON_ADD:8;
};};
union LED_REG_6A {
uint8_t byte;    struct {
uint8_t H3_LED_P13_OFF_ADD:8;
};};
union LED_REG_6B {
uint8_t byte;    struct {
uint8_t H3_LED_P13_OFF_ADD:8;
};};
union LED_REG_6C {
uint8_t byte;    struct {
uint8_t H3_LED_P14_ON_ADD:8;
};};
union LED_REG_6D {
uint8_t byte;    struct {
uint8_t H3_LED_P14_ON_ADD:8;
};};
union LED_REG_6E {
uint8_t byte;    struct {
uint8_t H3_LED_P14_OFF_ADD:8;
};};
union LED_REG_6F {
uint8_t byte;    struct {
uint8_t H3_LED_P14_OFF_ADD:8;
};};
union LED_REG_70 {
uint8_t byte;    struct {
uint8_t H3_LED_P15_ON_ADD:8;
};};
union LED_REG_71 {
uint8_t byte;    struct {
uint8_t H3_LED_P15_ON_ADD:8;
};};
union LED_REG_72 {
uint8_t byte;    struct {
uint8_t H3_LED_P15_OFF_ADD:8;
};};
union LED_REG_73 {
uint8_t byte;    struct {
uint8_t H3_LED_P15_OFF_ADD:8;
};};
union LED_REG_74 {
uint8_t byte;    struct {
uint8_t H3_LED_P16_ON_ADD:8;
};};
union LED_REG_75 {
uint8_t byte;    struct {
uint8_t H3_LED_P16_ON_ADD:8;
};};
union LED_REG_76 {
uint8_t byte;    struct {
uint8_t H3_LED_P16_OFF_ADD:8;
};};
union LED_REG_77 {
uint8_t byte;    struct {
uint8_t H3_LED_P16_OFF_ADD:8;
};};
union LED_REG_78 {
uint8_t byte;    struct {
uint8_t H3_LED_P17_ON_ADD:8;
};};
union LED_REG_79 {
uint8_t byte;    struct {
uint8_t H3_LED_P17_ON_ADD:8;
};};
union LED_REG_7A {
uint8_t byte;    struct {
uint8_t H3_LED_P17_OFF_ADD:8;
};};
union LED_REG_7B {
uint8_t byte;    struct {
uint8_t H3_LED_P17_OFF_ADD:8;
};};
union LED_REG_7C {
uint8_t byte;    struct {
uint8_t H3_LED_P18_ON_ADD:8;
};};
union LED_REG_7D {
uint8_t byte;    struct {
uint8_t H3_LED_P18_ON_ADD:8;
};};
union LED_REG_7E {
uint8_t byte;    struct {
uint8_t H3_LED_P18_OFF_ADD:8;
};};
union LED_REG_7F {
uint8_t byte;    struct {
uint8_t H3_LED_P18_OFF_ADD:8;
};};
union LED_REG_80 {
uint8_t byte;    struct {
uint8_t H3_LED_P19_ON_ADD:8;
};};
union LED_REG_81 {
uint8_t byte;    struct {
uint8_t H3_LED_P19_ON_ADD:8;
};};
union LED_REG_82 {
uint8_t byte;    struct {
uint8_t H3_LED_P19_OFF_ADD:8;
};};
union LED_REG_83 {
uint8_t byte;    struct {
uint8_t H3_LED_P19_OFF_ADD:8;
};};
union LED_REG_84 {
uint8_t byte;    struct {
uint8_t H3_LED_P20_ON_ADD:8;
};};
union LED_REG_85 {
uint8_t byte;    struct {
uint8_t H3_LED_P20_ON_ADD:8;
};};
union LED_REG_86 {
uint8_t byte;    struct {
uint8_t H3_LED_P20_OFF_ADD:8;
};};
union LED_REG_87 {
uint8_t byte;    struct {
uint8_t H3_LED_P20_OFF_ADD:8;
};};
union LED_REG_88 {
uint8_t byte;    struct {
uint8_t H3_LED_P21_ON_ADD:8;
};};
union LED_REG_89 {
uint8_t byte;    struct {
uint8_t H3_LED_P21_ON_ADD:8;
};};
union LED_REG_8A {
uint8_t byte;    struct {
uint8_t H3_LED_P21_OFF_ADD:8;
};};
union LED_REG_8B {
uint8_t byte;    struct {
uint8_t H3_LED_P21_OFF_ADD:8;
};};
union LED_REG_8C {
uint8_t byte;    struct {
uint8_t H3_LED_P22_ON_ADD:8;
};};
union LED_REG_8D {
uint8_t byte;    struct {
uint8_t H3_LED_P22_ON_ADD:8;
};};
union LED_REG_8E {
uint8_t byte;    struct {
uint8_t H3_LED_P22_OFF_ADD:8;
};};
union LED_REG_8F {
uint8_t byte;    struct {
uint8_t H3_LED_P22_OFF_ADD:8;
};};
union LED_REG_90 {
uint8_t byte;    struct {
uint8_t H3_LED_P23_ON_ADD:8;
};};
union LED_REG_91 {
uint8_t byte;    struct {
uint8_t H3_LED_P23_ON_ADD:8;
};};
union LED_REG_92 {
uint8_t byte;    struct {
uint8_t H3_LED_P23_OFF_ADD:8;
};};
union LED_REG_93 {
uint8_t byte;    struct {
uint8_t H3_LED_P23_OFF_ADD:8;
};};
union LED_REG_94 {
uint8_t byte;    struct {
uint8_t H3_LED_B0_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_95 {
uint8_t byte;    struct {
uint8_t H3_LED_B1_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_96 {
uint8_t byte;    struct {
uint8_t H3_LED_B2_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_97 {
uint8_t byte;    struct {
uint8_t H3_LED_B3_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_98 {
uint8_t byte;    struct {
uint8_t H3_LED_B4_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_99 {
uint8_t byte;    struct {
uint8_t H3_LED_B5_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_9A {
uint8_t byte;    struct {
uint8_t H3_LED_B6_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_9B {
uint8_t byte;    struct {
uint8_t H3_LED_B7_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_9C {
uint8_t byte;    struct {
uint8_t H3_LED_B8_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_9D {
uint8_t byte;    struct {
uint8_t H3_LED_B9_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_9E {
uint8_t byte;    struct {
uint8_t H3_LED_B10_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_9F {
uint8_t byte;    struct {
uint8_t H3_LED_B11_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_A0 {
uint8_t byte;    struct {
uint8_t H3_LED_B12_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_A1 {
uint8_t byte;    struct {
uint8_t H3_LED_B13_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_A2 {
uint8_t byte;    struct {
uint8_t H3_LED_B14_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_A3 {
uint8_t byte;    struct {
uint8_t H3_LED_B15_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_A4 {
uint8_t byte;    struct {
uint8_t H3_LED_B16_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_A5 {
uint8_t byte;    struct {
uint8_t H3_LED_B17_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_A6 {
uint8_t byte;    struct {
uint8_t H3_LED_B18_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_A7 {
uint8_t byte;    struct {
uint8_t H3_LED_B19_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_A8 {
uint8_t byte;    struct {
uint8_t H3_LED_B20_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_A9 {
uint8_t byte;    struct {
uint8_t H3_LED_B21_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_AA {
uint8_t byte;    struct {
uint8_t H3_LED_B22_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_AB {
uint8_t byte;    struct {
uint8_t H3_LED_B23_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_AC {
uint8_t byte;    struct {
uint8_t H3_LED_B24_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_AD {
uint8_t byte;    struct {
uint8_t H3_LED_B25_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_AE {
uint8_t byte;    struct {
uint8_t H3_LED_B26_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_AF {
uint8_t byte;    struct {
uint8_t H3_LED_B27_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_B0 {
uint8_t byte;    struct {
uint8_t H3_LED_B28_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_B1 {
uint8_t byte;    struct {
uint8_t H3_LED_B29_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_B2 {
uint8_t byte;    struct {
uint8_t H3_LED_B30_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_B3 {
uint8_t byte;    struct {
uint8_t H3_LED_B31_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_B4 {
uint8_t byte;    struct {
uint8_t H3_LED_B0_ON_ADD:8;
};};
union LED_REG_B5 {
uint8_t byte;    struct {
uint8_t H3_LED_B0_ON_ADD:8;
};};
union LED_REG_B6 {
uint8_t byte;    struct {
uint8_t H3_LED_B0_OFF_ADD:8;
};};
union LED_REG_B7 {
uint8_t byte;    struct {
uint8_t H3_LED_B0_OFF_ADD:8;
};};
union LED_REG_B8 {
uint8_t byte;    struct {
uint8_t H3_LED_B1_ON_ADD:8;
};};
union LED_REG_B9 {
uint8_t byte;    struct {
uint8_t H3_LED_B1_ON_ADD:8;
};};
union LED_REG_BA {
uint8_t byte;    struct {
uint8_t H3_LED_B1_OFF_ADD:8;
};};
union LED_REG_BB {
uint8_t byte;    struct {
uint8_t H3_LED_B1_OFF_ADD:8;
};};
union LED_REG_BC {
uint8_t byte;    struct {
uint8_t H3_LED_B2_ON_ADD:8;
};};
union LED_REG_BD {
uint8_t byte;    struct {
uint8_t H3_LED_B2_ON_ADD:8;
};};
union LED_REG_BE {
uint8_t byte;    struct {
uint8_t H3_LED_B2_OFF_ADD:8;
};};
union LED_REG_BF {
uint8_t byte;    struct {
uint8_t H3_LED_B2_OFF_ADD:8;
};};
union LED_REG_C0 {
uint8_t byte;    struct {
uint8_t H3_LED_B3_ON_ADD:8;
};};
union LED_REG_C1 {
uint8_t byte;    struct {
uint8_t H3_LED_B3_ON_ADD:8;
};};
union LED_REG_C2 {
uint8_t byte;    struct {
uint8_t H3_LED_B3_OFF_ADD:8;
};};
union LED_REG_C3 {
uint8_t byte;    struct {
uint8_t H3_LED_B3_OFF_ADD:8;
};};
union LED_REG_C4 {
uint8_t byte;    struct {
uint8_t H3_LED_B4_ON_ADD:8;
};};
union LED_REG_C5 {
uint8_t byte;    struct {
uint8_t H3_LED_B4_ON_ADD:8;
};};
union LED_REG_C6 {
uint8_t byte;    struct {
uint8_t H3_LED_B4_OFF_ADD:8;
};};
union LED_REG_C7 {
uint8_t byte;    struct {
uint8_t H3_LED_B4_OFF_ADD:8;
};};
union LED_REG_C8 {
uint8_t byte;    struct {
uint8_t H3_LED_B5_ON_ADD:8;
};};
union LED_REG_C9 {
uint8_t byte;    struct {
uint8_t H3_LED_B5_ON_ADD:8;
};};
union LED_REG_CA {
uint8_t byte;    struct {
uint8_t H3_LED_B5_OFF_ADD:8;
};};
union LED_REG_CB {
uint8_t byte;    struct {
uint8_t H3_LED_B5_OFF_ADD:8;
};};
union LED_REG_CC {
uint8_t byte;    struct {
uint8_t H3_LED_B6_ON_ADD:8;
};};
union LED_REG_CD {
uint8_t byte;    struct {
uint8_t H3_LED_B6_ON_ADD:8;
};};
union LED_REG_CE {
uint8_t byte;    struct {
uint8_t H3_LED_B6_OFF_ADD:8;
};};
union LED_REG_CF {
uint8_t byte;    struct {
uint8_t H3_LED_B6_OFF_ADD:8;
};};
union LED_REG_D0 {
uint8_t byte;    struct {
uint8_t H3_LED_B7_ON_ADD:8;
};};
union LED_REG_D1 {
uint8_t byte;    struct {
uint8_t H3_LED_B7_ON_ADD:8;
};};
union LED_REG_D2 {
uint8_t byte;    struct {
uint8_t H3_LED_B7_OFF_ADD:8;
};};
union LED_REG_D3 {
uint8_t byte;    struct {
uint8_t H3_LED_B7_OFF_ADD:8;
};};
union LED_REG_D4 {
uint8_t byte;    struct {
uint8_t H3_LED_B8_ON_ADD:8;
};};
union LED_REG_D5 {
uint8_t byte;    struct {
uint8_t H3_LED_B8_ON_ADD:8;
};};
union LED_REG_D6 {
uint8_t byte;    struct {
uint8_t H3_LED_B8_OFF_ADD:8;
};};
union LED_REG_D7 {
uint8_t byte;    struct {
uint8_t H3_LED_B8_OFF_ADD:8;
};};
union LED_REG_D8 {
uint8_t byte;    struct {
uint8_t H3_LED_B9_ON_ADD:8;
};};
union LED_REG_D9 {
uint8_t byte;    struct {
uint8_t H3_LED_B9_ON_ADD:8;
};};
union LED_REG_DA {
uint8_t byte;    struct {
uint8_t H3_LED_B9_OFF_ADD:8;
};};
union LED_REG_DB {
uint8_t byte;    struct {
uint8_t H3_LED_B9_OFF_ADD:8;
};};
union LED_REG_DC {
uint8_t byte;    struct {
uint8_t H3_LED_B10_ON_ADD:8;
};};
union LED_REG_DD {
uint8_t byte;    struct {
uint8_t H3_LED_B10_ON_ADD:8;
};};
union LED_REG_DE {
uint8_t byte;    struct {
uint8_t H3_LED_B10_OFF_ADD:8;
};};
union LED_REG_DF {
uint8_t byte;    struct {
uint8_t H3_LED_B10_OFF_ADD:8;
};};
union LED_REG_E0 {
uint8_t byte;    struct {
uint8_t H3_LED_B11_ON_ADD:8;
};};
union LED_REG_E1 {
uint8_t byte;    struct {
uint8_t H3_LED_B11_ON_ADD:8;
};};
union LED_REG_E2 {
uint8_t byte;    struct {
uint8_t H3_LED_B11_OFF_ADD:8;
};};
union LED_REG_E3 {
uint8_t byte;    struct {
uint8_t H3_LED_B11_OFF_ADD:8;
};};
union LED_REG_E4 {
uint8_t byte;    struct {
uint8_t H3_LED_B12_ON_ADD:8;
};};
union LED_REG_E5 {
uint8_t byte;    struct {
uint8_t H3_LED_B12_ON_ADD:8;
};};
union LED_REG_E6 {
uint8_t byte;    struct {
uint8_t H3_LED_B12_OFF_ADD:8;
};};
union LED_REG_E7 {
uint8_t byte;    struct {
uint8_t H3_LED_B12_OFF_ADD:8;
};};
union LED_REG_E8 {
uint8_t byte;    struct {
uint8_t H3_LED_B13_ON_ADD:8;
};};
union LED_REG_E9 {
uint8_t byte;    struct {
uint8_t H3_LED_B13_ON_ADD:8;
};};
union LED_REG_EA {
uint8_t byte;    struct {
uint8_t H3_LED_B13_OFF_ADD:8;
};};
union LED_REG_EB {
uint8_t byte;    struct {
uint8_t H3_LED_B13_OFF_ADD:8;
};};
union LED_REG_EC {
uint8_t byte;    struct {
uint8_t H3_LED_B14_ON_ADD:8;
};};
union LED_REG_ED {
uint8_t byte;    struct {
uint8_t H3_LED_B14_ON_ADD:8;
};};
union LED_REG_EE {
uint8_t byte;    struct {
uint8_t H3_LED_B14_OFF_ADD:8;
};};
union LED_REG_EF {
uint8_t byte;    struct {
uint8_t H3_LED_B14_OFF_ADD:8;
};};
union LED_REG_F0 {
uint8_t byte;    struct {
uint8_t H3_LED_B15_ON_ADD:8;
};};
union LED_REG_F1 {
uint8_t byte;    struct {
uint8_t H3_LED_B15_ON_ADD:8;
};};
union LED_REG_F2 {
uint8_t byte;    struct {
uint8_t H3_LED_B15_OFF_ADD:8;
};};
union LED_REG_F3 {
uint8_t byte;    struct {
uint8_t H3_LED_B15_OFF_ADD:8;
};};
union LED_REG_F4 {
uint8_t byte;    struct {
uint8_t H3_LED_B16_ON_ADD:8;
};};
union LED_REG_F5 {
uint8_t byte;    struct {
uint8_t H3_LED_B16_ON_ADD:8;
};};
union LED_REG_F6 {
uint8_t byte;    struct {
uint8_t H3_LED_B16_OFF_ADD:8;
};};
union LED_REG_F7 {
uint8_t byte;    struct {
uint8_t H3_LED_B16_OFF_ADD:8;
};};
union LED_REG_F8 {
uint8_t byte;    struct {
uint8_t H3_LED_B17_ON_ADD:8;
};};
union LED_REG_F9 {
uint8_t byte;    struct {
uint8_t H3_LED_B17_ON_ADD:8;
};};
union LED_REG_FA {
uint8_t byte;    struct {
uint8_t H3_LED_B17_OFF_ADD:8;
};};
union LED_REG_FB {
uint8_t byte;    struct {
uint8_t H3_LED_B17_OFF_ADD:8;
};};
union LED_REG_FC {
uint8_t byte;    struct {
uint8_t H3_LED_B18_ON_ADD:8;
};};
union LED_REG_FD {
uint8_t byte;    struct {
uint8_t H3_LED_B18_ON_ADD:8;
};};
union LED_REG_FE {
uint8_t byte;    struct {
uint8_t H3_LED_B18_OFF_ADD:8;
};};
union LED_REG_FF {
uint8_t byte;    struct {
uint8_t H3_LED_B18_OFF_ADD:8;
};};
union LED_REG_100 {
uint8_t byte;    struct {
uint8_t H3_LED_B19_ON_ADD:8;
};};
union LED_REG_101 {
uint8_t byte;    struct {
uint8_t H3_LED_B19_ON_ADD:8;
};};
union LED_REG_102 {
uint8_t byte;    struct {
uint8_t H3_LED_B19_OFF_ADD:8;
};};
union LED_REG_103 {
uint8_t byte;    struct {
uint8_t H3_LED_B19_OFF_ADD:8;
};};
union LED_REG_104 {
uint8_t byte;    struct {
uint8_t H3_LED_B20_ON_ADD:8;
};};
union LED_REG_105 {
uint8_t byte;    struct {
uint8_t H3_LED_B20_ON_ADD:8;
};};
union LED_REG_106 {
uint8_t byte;    struct {
uint8_t H3_LED_B20_OFF_ADD:8;
};};
union LED_REG_107 {
uint8_t byte;    struct {
uint8_t H3_LED_B20_OFF_ADD:8;
};};
union LED_REG_108 {
uint8_t byte;    struct {
uint8_t H3_LED_B21_ON_ADD:8;
};};
union LED_REG_109 {
uint8_t byte;    struct {
uint8_t H3_LED_B21_ON_ADD:8;
};};
union LED_REG_10A {
uint8_t byte;    struct {
uint8_t H3_LED_B21_OFF_ADD:8;
};};
union LED_REG_10B {
uint8_t byte;    struct {
uint8_t H3_LED_B21_OFF_ADD:8;
};};
union LED_REG_10C {
uint8_t byte;    struct {
uint8_t H3_LED_B22_ON_ADD:8;
};};
union LED_REG_10D {
uint8_t byte;    struct {
uint8_t H3_LED_B22_ON_ADD:8;
};};
union LED_REG_10E {
uint8_t byte;    struct {
uint8_t H3_LED_B22_OFF_ADD:8;
};};
union LED_REG_10F {
uint8_t byte;    struct {
uint8_t H3_LED_B22_OFF_ADD:8;
};};
union LED_REG_110 {
uint8_t byte;    struct {
uint8_t H3_LED_B23_ON_ADD:8;
};};
union LED_REG_111 {
uint8_t byte;    struct {
uint8_t H3_LED_B23_ON_ADD:8;
};};
union LED_REG_112 {
uint8_t byte;    struct {
uint8_t H3_LED_B23_OFF_ADD:8;
};};
union LED_REG_113 {
uint8_t byte;    struct {
uint8_t H3_LED_B23_OFF_ADD:8;
};};
union LED_REG_114 {
uint8_t byte;    struct {
uint8_t H3_LED_B24_ON_ADD:8;
};};
union LED_REG_115 {
uint8_t byte;    struct {
uint8_t H3_LED_B24_ON_ADD:8;
};};
union LED_REG_116 {
uint8_t byte;    struct {
uint8_t H3_LED_B24_OFF_ADD:8;
};};
union LED_REG_117 {
uint8_t byte;    struct {
uint8_t H3_LED_B24_OFF_ADD:8;
};};
union LED_REG_118 {
uint8_t byte;    struct {
uint8_t H3_LED_B25_ON_ADD:8;
};};
union LED_REG_119 {
uint8_t byte;    struct {
uint8_t H3_LED_B25_ON_ADD:8;
};};
union LED_REG_11A {
uint8_t byte;    struct {
uint8_t H3_LED_B25_OFF_ADD:8;
};};
union LED_REG_11B {
uint8_t byte;    struct {
uint8_t H3_LED_B25_OFF_ADD:8;
};};
union LED_REG_11C {
uint8_t byte;    struct {
uint8_t H3_LED_B26_ON_ADD:8;
};};
union LED_REG_11D {
uint8_t byte;    struct {
uint8_t H3_LED_B26_ON_ADD:8;
};};
union LED_REG_11E {
uint8_t byte;    struct {
uint8_t H3_LED_B26_OFF_ADD:8;
};};
union LED_REG_11F {
uint8_t byte;    struct {
uint8_t H3_LED_B26_OFF_ADD:8;
};};
union LED_REG_120 {
uint8_t byte;    struct {
uint8_t H3_LED_B27_ON_ADD:8;
};};
union LED_REG_121 {
uint8_t byte;    struct {
uint8_t H3_LED_B27_ON_ADD:8;
};};
union LED_REG_122 {
uint8_t byte;    struct {
uint8_t H3_LED_B27_OFF_ADD:8;
};};
union LED_REG_123 {
uint8_t byte;    struct {
uint8_t H3_LED_B27_OFF_ADD:8;
};};
union LED_REG_124 {
uint8_t byte;    struct {
uint8_t H3_LED_B28_ON_ADD:8;
};};
union LED_REG_125 {
uint8_t byte;    struct {
uint8_t H3_LED_B28_ON_ADD:8;
};};
union LED_REG_126 {
uint8_t byte;    struct {
uint8_t H3_LED_B28_OFF_ADD:8;
};};
union LED_REG_127 {
uint8_t byte;    struct {
uint8_t H3_LED_B28_OFF_ADD:8;
};};
union LED_REG_128 {
uint8_t byte;    struct {
uint8_t H3_LED_B29_ON_ADD:8;
};};
union LED_REG_129 {
uint8_t byte;    struct {
uint8_t H3_LED_B29_ON_ADD:8;
};};
union LED_REG_12A {
uint8_t byte;    struct {
uint8_t H3_LED_B29_OFF_ADD:8;
};};
union LED_REG_12B {
uint8_t byte;    struct {
uint8_t H3_LED_B29_OFF_ADD:8;
};};
union LED_REG_12C {
uint8_t byte;    struct {
uint8_t H3_LED_B30_ON_ADD:8;
};};
union LED_REG_12D {
uint8_t byte;    struct {
uint8_t H3_LED_B30_ON_ADD:8;
};};
union LED_REG_12E {
uint8_t byte;    struct {
uint8_t H3_LED_B30_OFF_ADD:8;
};};
union LED_REG_12F {
uint8_t byte;    struct {
uint8_t H3_LED_B30_OFF_ADD:8;
};};
union LED_REG_130 {
uint8_t byte;    struct {
uint8_t H3_LED_B31_ON_ADD:8;
};};
union LED_REG_131 {
uint8_t byte;    struct {
uint8_t H3_LED_B31_ON_ADD:8;
};};
union LED_REG_132 {
uint8_t byte;    struct {
uint8_t H3_LED_B31_OFF_ADD:8;
};};
union LED_REG_133 {
uint8_t byte;    struct {
uint8_t H3_LED_B31_OFF_ADD:8;
};};
union LED_REG_134 {
uint8_t byte;    struct {
uint8_t H3_LED_U0_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_135 {
uint8_t byte;    struct {
uint8_t H3_LED_U1_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_136 {
uint8_t byte;    struct {
uint8_t H3_LED_U2_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_137 {
uint8_t byte;    struct {
uint8_t H3_LED_U3_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_138 {
uint8_t byte;    struct {
uint8_t H3_LED_U4_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_139 {
uint8_t byte;    struct {
uint8_t H3_LED_U5_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_13A {
uint8_t byte;    struct {
uint8_t H3_LED_U6_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_13B {
uint8_t byte;    struct {
uint8_t H3_LED_U7_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_13C {
uint8_t byte;    struct {
uint8_t H3_LED_U8_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_13D {
uint8_t byte;    struct {
uint8_t H3_LED_U9_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_13E {
uint8_t byte;    struct {
uint8_t H3_LED_U10_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_13F {
uint8_t byte;    struct {
uint8_t H3_LED_U11_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_140 {
uint8_t byte;    struct {
uint8_t H3_LED_U12_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_141 {
uint8_t byte;    struct {
uint8_t H3_LED_U13_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_142 {
uint8_t byte;    struct {
uint8_t H3_LED_U14_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_143 {
uint8_t byte;    struct {
uint8_t H3_LED_U15_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_144 {
uint8_t byte;    struct {
uint8_t H3_LED_U16_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_145 {
uint8_t byte;    struct {
uint8_t H3_LED_U17_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_146 {
uint8_t byte;    struct {
uint8_t H3_LED_U18_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_147 {
uint8_t byte;    struct {
uint8_t H3_LED_U19_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_148 {
uint8_t byte;    struct {
uint8_t H3_LED_U20_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_149 {
uint8_t byte;    struct {
uint8_t H3_LED_U21_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_14A {
uint8_t byte;    struct {
uint8_t H3_LED_U22_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_14B {
uint8_t byte;    struct {
uint8_t H3_LED_U23_COLOR_SEL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union LED_REG_14C {
uint8_t byte;    struct {
uint8_t H3_LED_U0_ON_ADD:8;
};};
union LED_REG_14D {
uint8_t byte;    struct {
uint8_t H3_LED_U0_ON_ADD:8;
};};
union LED_REG_14E {
uint8_t byte;    struct {
uint8_t H3_LED_U0_OFF_ADD:8;
};};
union LED_REG_14F {
uint8_t byte;    struct {
uint8_t H3_LED_U0_OFF_ADD:8;
};};
union LED_REG_150 {
uint8_t byte;    struct {
uint8_t H3_LED_U1_ON_ADD:8;
};};
union LED_REG_151 {
uint8_t byte;    struct {
uint8_t H3_LED_U1_ON_ADD:8;
};};
union LED_REG_152 {
uint8_t byte;    struct {
uint8_t H3_LED_U1_OFF_ADD:8;
};};
union LED_REG_153 {
uint8_t byte;    struct {
uint8_t H3_LED_U1_OFF_ADD:8;
};};
union LED_REG_154 {
uint8_t byte;    struct {
uint8_t H3_LED_U2_ON_ADD:8;
};};
union LED_REG_155 {
uint8_t byte;    struct {
uint8_t H3_LED_U2_ON_ADD:8;
};};
union LED_REG_156 {
uint8_t byte;    struct {
uint8_t H3_LED_U2_OFF_ADD:8;
};};
union LED_REG_157 {
uint8_t byte;    struct {
uint8_t H3_LED_U2_OFF_ADD:8;
};};
union LED_REG_158 {
uint8_t byte;    struct {
uint8_t H3_LED_U3_ON_ADD:8;
};};
union LED_REG_159 {
uint8_t byte;    struct {
uint8_t H3_LED_U3_ON_ADD:8;
};};
union LED_REG_15A {
uint8_t byte;    struct {
uint8_t H3_LED_U3_OFF_ADD:8;
};};
union LED_REG_15B {
uint8_t byte;    struct {
uint8_t H3_LED_U3_OFF_ADD:8;
};};
union LED_REG_15C {
uint8_t byte;    struct {
uint8_t H3_LED_U4_ON_ADD:8;
};};
union LED_REG_15D {
uint8_t byte;    struct {
uint8_t H3_LED_U4_ON_ADD:8;
};};
union LED_REG_15E {
uint8_t byte;    struct {
uint8_t H3_LED_U4_OFF_ADD:8;
};};
union LED_REG_15F {
uint8_t byte;    struct {
uint8_t H3_LED_U4_OFF_ADD:8;
};};
union LED_REG_160 {
uint8_t byte;    struct {
uint8_t H3_LED_U5_ON_ADD:8;
};};
union LED_REG_161 {
uint8_t byte;    struct {
uint8_t H3_LED_U5_ON_ADD:8;
};};
union LED_REG_162 {
uint8_t byte;    struct {
uint8_t H3_LED_U5_OFF_ADD:8;
};};
union LED_REG_163 {
uint8_t byte;    struct {
uint8_t H3_LED_U5_OFF_ADD:8;
};};
union LED_REG_164 {
uint8_t byte;    struct {
uint8_t H3_LED_U6_ON_ADD:8;
};};
union LED_REG_165 {
uint8_t byte;    struct {
uint8_t H3_LED_U6_ON_ADD:8;
};};
union LED_REG_166 {
uint8_t byte;    struct {
uint8_t H3_LED_U6_OFF_ADD:8;
};};
union LED_REG_167 {
uint8_t byte;    struct {
uint8_t H3_LED_U6_OFF_ADD:8;
};};
union LED_REG_168 {
uint8_t byte;    struct {
uint8_t H3_LED_U7_ON_ADD:8;
};};
union LED_REG_169 {
uint8_t byte;    struct {
uint8_t H3_LED_U7_ON_ADD:8;
};};
union LED_REG_16A {
uint8_t byte;    struct {
uint8_t H3_LED_U7_OFF_ADD:8;
};};
union LED_REG_16B {
uint8_t byte;    struct {
uint8_t H3_LED_U7_OFF_ADD:8;
};};
union LED_REG_16C {
uint8_t byte;    struct {
uint8_t H3_LED_U8_ON_ADD:8;
};};
union LED_REG_16D {
uint8_t byte;    struct {
uint8_t H3_LED_U8_ON_ADD:8;
};};
union LED_REG_16E {
uint8_t byte;    struct {
uint8_t H3_LED_U8_OFF_ADD:8;
};};
union LED_REG_16F {
uint8_t byte;    struct {
uint8_t H3_LED_U8_OFF_ADD:8;
};};
union LED_REG_170 {
uint8_t byte;    struct {
uint8_t H3_LED_U9_ON_ADD:8;
};};
union LED_REG_171 {
uint8_t byte;    struct {
uint8_t H3_LED_U9_ON_ADD:8;
};};
union LED_REG_172 {
uint8_t byte;    struct {
uint8_t H3_LED_U9_OFF_ADD:8;
};};
union LED_REG_173 {
uint8_t byte;    struct {
uint8_t H3_LED_U9_OFF_ADD:8;
};};
union LED_REG_174 {
uint8_t byte;    struct {
uint8_t H3_LED_U10_ON_ADD:8;
};};
union LED_REG_175 {
uint8_t byte;    struct {
uint8_t H3_LED_U10_ON_ADD:8;
};};
union LED_REG_176 {
uint8_t byte;    struct {
uint8_t H3_LED_U10_OFF_ADD:8;
};};
union LED_REG_177 {
uint8_t byte;    struct {
uint8_t H3_LED_U10_OFF_ADD:8;
};};
union LED_REG_178 {
uint8_t byte;    struct {
uint8_t H3_LED_U11_ON_ADD:8;
};};
union LED_REG_179 {
uint8_t byte;    struct {
uint8_t H3_LED_U11_ON_ADD:8;
};};
union LED_REG_17A {
uint8_t byte;    struct {
uint8_t H3_LED_U11_OFF_ADD:8;
};};
union LED_REG_17B {
uint8_t byte;    struct {
uint8_t H3_LED_U11_OFF_ADD:8;
};};
union LED_REG_17C {
uint8_t byte;    struct {
uint8_t H3_LED_U12_ON_ADD:8;
};};
union LED_REG_17D {
uint8_t byte;    struct {
uint8_t H3_LED_U12_ON_ADD:8;
};};
union LED_REG_17E {
uint8_t byte;    struct {
uint8_t H3_LED_U12_OFF_ADD:8;
};};
union LED_REG_17F {
uint8_t byte;    struct {
uint8_t H3_LED_U12_OFF_ADD:8;
};};
union LED_REG_180 {
uint8_t byte;    struct {
uint8_t H3_LED_U13_ON_ADD:8;
};};
union LED_REG_181 {
uint8_t byte;    struct {
uint8_t H3_LED_U13_ON_ADD:8;
};};
union LED_REG_182 {
uint8_t byte;    struct {
uint8_t H3_LED_U13_OFF_ADD:8;
};};
union LED_REG_183 {
uint8_t byte;    struct {
uint8_t H3_LED_U13_OFF_ADD:8;
};};
union LED_REG_184 {
uint8_t byte;    struct {
uint8_t H3_LED_U14_ON_ADD:8;
};};
union LED_REG_185 {
uint8_t byte;    struct {
uint8_t H3_LED_U14_ON_ADD:8;
};};
union LED_REG_186 {
uint8_t byte;    struct {
uint8_t H3_LED_U14_OFF_ADD:8;
};};
union LED_REG_187 {
uint8_t byte;    struct {
uint8_t H3_LED_U14_OFF_ADD:8;
};};
union LED_REG_188 {
uint8_t byte;    struct {
uint8_t H3_LED_U15_ON_ADD:8;
};};
union LED_REG_189 {
uint8_t byte;    struct {
uint8_t H3_LED_U15_ON_ADD:8;
};};
union LED_REG_18A {
uint8_t byte;    struct {
uint8_t H3_LED_U15_OFF_ADD:8;
};};
union LED_REG_18B {
uint8_t byte;    struct {
uint8_t H3_LED_U15_OFF_ADD:8;
};};
union LED_REG_18C {
uint8_t byte;    struct {
uint8_t H3_LED_U16_ON_ADD:8;
};};
union LED_REG_18D {
uint8_t byte;    struct {
uint8_t H3_LED_U16_ON_ADD:8;
};};
union LED_REG_18E {
uint8_t byte;    struct {
uint8_t H3_LED_U16_OFF_ADD:8;
};};
union LED_REG_18F {
uint8_t byte;    struct {
uint8_t H3_LED_U16_OFF_ADD:8;
};};
union LED_REG_190 {
uint8_t byte;    struct {
uint8_t H3_LED_U17_ON_ADD:8;
};};
union LED_REG_191 {
uint8_t byte;    struct {
uint8_t H3_LED_U17_ON_ADD:8;
};};
union LED_REG_192 {
uint8_t byte;    struct {
uint8_t H3_LED_U17_OFF_ADD:8;
};};
union LED_REG_193 {
uint8_t byte;    struct {
uint8_t H3_LED_U17_OFF_ADD:8;
};};
union LED_REG_194 {
uint8_t byte;    struct {
uint8_t H3_LED_U18_ON_ADD:8;
};};
union LED_REG_195 {
uint8_t byte;    struct {
uint8_t H3_LED_U18_ON_ADD:8;
};};
union LED_REG_196 {
uint8_t byte;    struct {
uint8_t H3_LED_U18_OFF_ADD:8;
};};
union LED_REG_197 {
uint8_t byte;    struct {
uint8_t H3_LED_U18_OFF_ADD:8;
};};
union LED_REG_198 {
uint8_t byte;    struct {
uint8_t H3_LED_U19_ON_ADD:8;
};};
union LED_REG_199 {
uint8_t byte;    struct {
uint8_t H3_LED_U19_ON_ADD:8;
};};
union LED_REG_19A {
uint8_t byte;    struct {
uint8_t H3_LED_U19_OFF_ADD:8;
};};
union LED_REG_19B {
uint8_t byte;    struct {
uint8_t H3_LED_U19_OFF_ADD:8;
};};
union LED_REG_19C {
uint8_t byte;    struct {
uint8_t H3_LED_U20_ON_ADD:8;
};};
union LED_REG_19D {
uint8_t byte;    struct {
uint8_t H3_LED_U20_ON_ADD:8;
};};
union LED_REG_19E {
uint8_t byte;    struct {
uint8_t H3_LED_U20_OFF_ADD:8;
};};
union LED_REG_19F {
uint8_t byte;    struct {
uint8_t H3_LED_U20_OFF_ADD:8;
};};
union LED_REG_1A0 {
uint8_t byte;    struct {
uint8_t H3_LED_U21_ON_ADD:8;
};};
union LED_REG_1A1 {
uint8_t byte;    struct {
uint8_t H3_LED_U21_ON_ADD:8;
};};
union LED_REG_1A2 {
uint8_t byte;    struct {
uint8_t H3_LED_U21_OFF_ADD:8;
};};
union LED_REG_1A3 {
uint8_t byte;    struct {
uint8_t H3_LED_U21_OFF_ADD:8;
};};
union LED_REG_1A4 {
uint8_t byte;    struct {
uint8_t H3_LED_U22_ON_ADD:8;
};};
union LED_REG_1A5 {
uint8_t byte;    struct {
uint8_t H3_LED_U22_ON_ADD:8;
};};
union LED_REG_1A6 {
uint8_t byte;    struct {
uint8_t H3_LED_U22_OFF_ADD:8;
};};
union LED_REG_1A7 {
uint8_t byte;    struct {
uint8_t H3_LED_U22_OFF_ADD:8;
};};
union LED_REG_1A8 {
uint8_t byte;    struct {
uint8_t H3_LED_U23_ON_ADD:8;
};};
union LED_REG_1A9 {
uint8_t byte;    struct {
uint8_t H3_LED_U23_ON_ADD:8;
};};
union LED_REG_1AA {
uint8_t byte;    struct {
uint8_t H3_LED_U23_OFF_ADD:8;
};};
union LED_REG_1AB {
uint8_t byte;    struct {
uint8_t H3_LED_U23_OFF_ADD:8;
};};
typedef struct LED_T {
union LED_REG_00 reg00;
union LED_REG_01 reg01;
union LED_REG_02 reg02;
union LED_REG_03 reg03;
union LED_REG_04 reg04;
union LED_REG_05 reg05;
union LED_REG_06 reg06;
union LED_REG_07 reg07;
union LED_REG_08 reg08;
union LED_REG_09 reg09;
union LED_REG_0A reg0A;
union LED_REG_0B reg0B;
union LED_REG_0C reg0C;
union LED_REG_0D reg0D;
union LED_REG_0E reg0E;
union LED_REG_0F reg0F;
union LED_REG_10 reg10;
union LED_REG_11 reg11;
union LED_REG_12 reg12;
union LED_REG_13 reg13;
union LED_REG_14 reg14;
union LED_REG_15 reg15;
union LED_REG_16 reg16;
union LED_REG_17 reg17;
union LED_REG_18 reg18;
union LED_REG_19 reg19;
union LED_REG_1A reg1A;
union LED_REG_1B reg1B;
union LED_REG_1C reg1C;
union LED_REG_1D reg1D;
union LED_REG_1E reg1E;
union LED_REG_1F reg1F;
union LED_REG_20 reg20;
union LED_REG_21 reg21;
union LED_REG_22 reg22;
union LED_REG_23 reg23;
union LED_REG_24 reg24;
union LED_REG_25 reg25;
union LED_REG_26 reg26;
union LED_REG_27 reg27;
union LED_REG_28 reg28;
union LED_REG_29 reg29;
union LED_REG_2A reg2A;
union LED_REG_2B reg2B;
union LED_REG_2C reg2C;
union LED_REG_2D reg2D;
union LED_REG_2E reg2E;
union LED_REG_2F reg2F;
union LED_REG_30 reg30;
union LED_REG_31 reg31;
union LED_REG_32 reg32;
union LED_REG_33 reg33;
union LED_REG_34 reg34;
union LED_REG_35 reg35;
union LED_REG_36 reg36;
union LED_REG_37 reg37;
union LED_REG_38 reg38;
union LED_REG_39 reg39;
union LED_REG_3A reg3A;
union LED_REG_3B reg3B;
union LED_REG_3C reg3C;
union LED_REG_3D reg3D;
union LED_REG_3E reg3E;
union LED_REG_3F reg3F;
union LED_REG_40 reg40;
union LED_REG_41 reg41;
union LED_REG_42 reg42;
union LED_REG_43 reg43;
union LED_REG_44 reg44;
union LED_REG_45 reg45;
union LED_REG_46 reg46;
union LED_REG_47 reg47;
union LED_REG_48 reg48;
union LED_REG_49 reg49;
union LED_REG_4A reg4A;
union LED_REG_4B reg4B;
union LED_REG_4C reg4C;
union LED_REG_4D reg4D;
union LED_REG_4E reg4E;
union LED_REG_4F reg4F;
union LED_REG_50 reg50;
union LED_REG_51 reg51;
union LED_REG_52 reg52;
union LED_REG_53 reg53;
union LED_REG_54 reg54;
union LED_REG_55 reg55;
union LED_REG_56 reg56;
union LED_REG_57 reg57;
union LED_REG_58 reg58;
union LED_REG_59 reg59;
union LED_REG_5A reg5A;
union LED_REG_5B reg5B;
union LED_REG_5C reg5C;
union LED_REG_5D reg5D;
union LED_REG_5E reg5E;
union LED_REG_5F reg5F;
union LED_REG_60 reg60;
union LED_REG_61 reg61;
union LED_REG_62 reg62;
union LED_REG_63 reg63;
union LED_REG_64 reg64;
union LED_REG_65 reg65;
union LED_REG_66 reg66;
union LED_REG_67 reg67;
union LED_REG_68 reg68;
union LED_REG_69 reg69;
union LED_REG_6A reg6A;
union LED_REG_6B reg6B;
union LED_REG_6C reg6C;
union LED_REG_6D reg6D;
union LED_REG_6E reg6E;
union LED_REG_6F reg6F;
union LED_REG_70 reg70;
union LED_REG_71 reg71;
union LED_REG_72 reg72;
union LED_REG_73 reg73;
union LED_REG_74 reg74;
union LED_REG_75 reg75;
union LED_REG_76 reg76;
union LED_REG_77 reg77;
union LED_REG_78 reg78;
union LED_REG_79 reg79;
union LED_REG_7A reg7A;
union LED_REG_7B reg7B;
union LED_REG_7C reg7C;
union LED_REG_7D reg7D;
union LED_REG_7E reg7E;
union LED_REG_7F reg7F;
union LED_REG_80 reg80;
union LED_REG_81 reg81;
union LED_REG_82 reg82;
union LED_REG_83 reg83;
union LED_REG_84 reg84;
union LED_REG_85 reg85;
union LED_REG_86 reg86;
union LED_REG_87 reg87;
union LED_REG_88 reg88;
union LED_REG_89 reg89;
union LED_REG_8A reg8A;
union LED_REG_8B reg8B;
union LED_REG_8C reg8C;
union LED_REG_8D reg8D;
union LED_REG_8E reg8E;
union LED_REG_8F reg8F;
union LED_REG_90 reg90;
union LED_REG_91 reg91;
union LED_REG_92 reg92;
union LED_REG_93 reg93;
union LED_REG_94 reg94;
union LED_REG_95 reg95;
union LED_REG_96 reg96;
union LED_REG_97 reg97;
union LED_REG_98 reg98;
union LED_REG_99 reg99;
union LED_REG_9A reg9A;
union LED_REG_9B reg9B;
union LED_REG_9C reg9C;
union LED_REG_9D reg9D;
union LED_REG_9E reg9E;
union LED_REG_9F reg9F;
union LED_REG_A0 regA0;
union LED_REG_A1 regA1;
union LED_REG_A2 regA2;
union LED_REG_A3 regA3;
union LED_REG_A4 regA4;
union LED_REG_A5 regA5;
union LED_REG_A6 regA6;
union LED_REG_A7 regA7;
union LED_REG_A8 regA8;
union LED_REG_A9 regA9;
union LED_REG_AA regAA;
union LED_REG_AB regAB;
union LED_REG_AC regAC;
union LED_REG_AD regAD;
union LED_REG_AE regAE;
union LED_REG_AF regAF;
union LED_REG_B0 regB0;
union LED_REG_B1 regB1;
union LED_REG_B2 regB2;
union LED_REG_B3 regB3;
union LED_REG_B4 regB4;
union LED_REG_B5 regB5;
union LED_REG_B6 regB6;
union LED_REG_B7 regB7;
union LED_REG_B8 regB8;
union LED_REG_B9 regB9;
union LED_REG_BA regBA;
union LED_REG_BB regBB;
union LED_REG_BC regBC;
union LED_REG_BD regBD;
union LED_REG_BE regBE;
union LED_REG_BF regBF;
union LED_REG_C0 regC0;
union LED_REG_C1 regC1;
union LED_REG_C2 regC2;
union LED_REG_C3 regC3;
union LED_REG_C4 regC4;
union LED_REG_C5 regC5;
union LED_REG_C6 regC6;
union LED_REG_C7 regC7;
union LED_REG_C8 regC8;
union LED_REG_C9 regC9;
union LED_REG_CA regCA;
union LED_REG_CB regCB;
union LED_REG_CC regCC;
union LED_REG_CD regCD;
union LED_REG_CE regCE;
union LED_REG_CF regCF;
union LED_REG_D0 regD0;
union LED_REG_D1 regD1;
union LED_REG_D2 regD2;
union LED_REG_D3 regD3;
union LED_REG_D4 regD4;
union LED_REG_D5 regD5;
union LED_REG_D6 regD6;
union LED_REG_D7 regD7;
union LED_REG_D8 regD8;
union LED_REG_D9 regD9;
union LED_REG_DA regDA;
union LED_REG_DB regDB;
union LED_REG_DC regDC;
union LED_REG_DD regDD;
union LED_REG_DE regDE;
union LED_REG_DF regDF;
union LED_REG_E0 regE0;
union LED_REG_E1 regE1;
union LED_REG_E2 regE2;
union LED_REG_E3 regE3;
union LED_REG_E4 regE4;
union LED_REG_E5 regE5;
union LED_REG_E6 regE6;
union LED_REG_E7 regE7;
union LED_REG_E8 regE8;
union LED_REG_E9 regE9;
union LED_REG_EA regEA;
union LED_REG_EB regEB;
union LED_REG_EC regEC;
union LED_REG_ED regED;
union LED_REG_EE regEE;
union LED_REG_EF regEF;
union LED_REG_F0 regF0;
union LED_REG_F1 regF1;
union LED_REG_F2 regF2;
union LED_REG_F3 regF3;
union LED_REG_F4 regF4;
union LED_REG_F5 regF5;
union LED_REG_F6 regF6;
union LED_REG_F7 regF7;
union LED_REG_F8 regF8;
union LED_REG_F9 regF9;
union LED_REG_FA regFA;
union LED_REG_FB regFB;
union LED_REG_FC regFC;
union LED_REG_FD regFD;
union LED_REG_FE regFE;
union LED_REG_FF regFF;
union LED_REG_100 reg100;
union LED_REG_101 reg101;
union LED_REG_102 reg102;
union LED_REG_103 reg103;
union LED_REG_104 reg104;
union LED_REG_105 reg105;
union LED_REG_106 reg106;
union LED_REG_107 reg107;
union LED_REG_108 reg108;
union LED_REG_109 reg109;
union LED_REG_10A reg10A;
union LED_REG_10B reg10B;
union LED_REG_10C reg10C;
union LED_REG_10D reg10D;
union LED_REG_10E reg10E;
union LED_REG_10F reg10F;
union LED_REG_110 reg110;
union LED_REG_111 reg111;
union LED_REG_112 reg112;
union LED_REG_113 reg113;
union LED_REG_114 reg114;
union LED_REG_115 reg115;
union LED_REG_116 reg116;
union LED_REG_117 reg117;
union LED_REG_118 reg118;
union LED_REG_119 reg119;
union LED_REG_11A reg11A;
union LED_REG_11B reg11B;
union LED_REG_11C reg11C;
union LED_REG_11D reg11D;
union LED_REG_11E reg11E;
union LED_REG_11F reg11F;
union LED_REG_120 reg120;
union LED_REG_121 reg121;
union LED_REG_122 reg122;
union LED_REG_123 reg123;
union LED_REG_124 reg124;
union LED_REG_125 reg125;
union LED_REG_126 reg126;
union LED_REG_127 reg127;
union LED_REG_128 reg128;
union LED_REG_129 reg129;
union LED_REG_12A reg12A;
union LED_REG_12B reg12B;
union LED_REG_12C reg12C;
union LED_REG_12D reg12D;
union LED_REG_12E reg12E;
union LED_REG_12F reg12F;
union LED_REG_130 reg130;
union LED_REG_131 reg131;
union LED_REG_132 reg132;
union LED_REG_133 reg133;
union LED_REG_134 reg134;
union LED_REG_135 reg135;
union LED_REG_136 reg136;
union LED_REG_137 reg137;
union LED_REG_138 reg138;
union LED_REG_139 reg139;
union LED_REG_13A reg13A;
union LED_REG_13B reg13B;
union LED_REG_13C reg13C;
union LED_REG_13D reg13D;
union LED_REG_13E reg13E;
union LED_REG_13F reg13F;
union LED_REG_140 reg140;
union LED_REG_141 reg141;
union LED_REG_142 reg142;
union LED_REG_143 reg143;
union LED_REG_144 reg144;
union LED_REG_145 reg145;
union LED_REG_146 reg146;
union LED_REG_147 reg147;
union LED_REG_148 reg148;
union LED_REG_149 reg149;
union LED_REG_14A reg14A;
union LED_REG_14B reg14B;
union LED_REG_14C reg14C;
union LED_REG_14D reg14D;
union LED_REG_14E reg14E;
union LED_REG_14F reg14F;
union LED_REG_150 reg150;
union LED_REG_151 reg151;
union LED_REG_152 reg152;
union LED_REG_153 reg153;
union LED_REG_154 reg154;
union LED_REG_155 reg155;
union LED_REG_156 reg156;
union LED_REG_157 reg157;
union LED_REG_158 reg158;
union LED_REG_159 reg159;
union LED_REG_15A reg15A;
union LED_REG_15B reg15B;
union LED_REG_15C reg15C;
union LED_REG_15D reg15D;
union LED_REG_15E reg15E;
union LED_REG_15F reg15F;
union LED_REG_160 reg160;
union LED_REG_161 reg161;
union LED_REG_162 reg162;
union LED_REG_163 reg163;
union LED_REG_164 reg164;
union LED_REG_165 reg165;
union LED_REG_166 reg166;
union LED_REG_167 reg167;
union LED_REG_168 reg168;
union LED_REG_169 reg169;
union LED_REG_16A reg16A;
union LED_REG_16B reg16B;
union LED_REG_16C reg16C;
union LED_REG_16D reg16D;
union LED_REG_16E reg16E;
union LED_REG_16F reg16F;
union LED_REG_170 reg170;
union LED_REG_171 reg171;
union LED_REG_172 reg172;
union LED_REG_173 reg173;
union LED_REG_174 reg174;
union LED_REG_175 reg175;
union LED_REG_176 reg176;
union LED_REG_177 reg177;
union LED_REG_178 reg178;
union LED_REG_179 reg179;
union LED_REG_17A reg17A;
union LED_REG_17B reg17B;
union LED_REG_17C reg17C;
union LED_REG_17D reg17D;
union LED_REG_17E reg17E;
union LED_REG_17F reg17F;
union LED_REG_180 reg180;
union LED_REG_181 reg181;
union LED_REG_182 reg182;
union LED_REG_183 reg183;
union LED_REG_184 reg184;
union LED_REG_185 reg185;
union LED_REG_186 reg186;
union LED_REG_187 reg187;
union LED_REG_188 reg188;
union LED_REG_189 reg189;
union LED_REG_18A reg18A;
union LED_REG_18B reg18B;
union LED_REG_18C reg18C;
union LED_REG_18D reg18D;
union LED_REG_18E reg18E;
union LED_REG_18F reg18F;
union LED_REG_190 reg190;
union LED_REG_191 reg191;
union LED_REG_192 reg192;
union LED_REG_193 reg193;
union LED_REG_194 reg194;
union LED_REG_195 reg195;
union LED_REG_196 reg196;
union LED_REG_197 reg197;
union LED_REG_198 reg198;
union LED_REG_199 reg199;
union LED_REG_19A reg19A;
union LED_REG_19B reg19B;
union LED_REG_19C reg19C;
union LED_REG_19D reg19D;
union LED_REG_19E reg19E;
union LED_REG_19F reg19F;
union LED_REG_1A0 reg1A0;
union LED_REG_1A1 reg1A1;
union LED_REG_1A2 reg1A2;
union LED_REG_1A3 reg1A3;
union LED_REG_1A4 reg1A4;
union LED_REG_1A5 reg1A5;
union LED_REG_1A6 reg1A6;
union LED_REG_1A7 reg1A7;
union LED_REG_1A8 reg1A8;
union LED_REG_1A9 reg1A9;
union LED_REG_1AA reg1AA;
union LED_REG_1AB reg1AB;
} led_t;

extern led_t led;

#endif
