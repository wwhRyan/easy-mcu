#ifndef __FRC_H__
#define __FRC_H__

#include <stdint.h>

#define FRC_BASE_ADDRESS 0x2800
#define FRC_REG_NUM 496
#define FRC_REG_ADDR(reg) REG_ADDR(FRC_BASE_ADDRESS,frc_t,reg)

union FRC_REG_00 {
uint8_t byte;    struct {
uint8_t H2_FRC_PB_MODE:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_01 {
uint8_t byte;    struct {
uint8_t H2_FRC_PB_FID_SEL:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_02 {
uint8_t byte;    struct {
uint8_t H2_FRC_OEFID_SEL:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_03 {
uint8_t byte;    struct {
uint8_t H2_FRC_OE_POL:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_04 {
uint8_t byte;    struct {
uint8_t H2_FRC_OE_SCAN_SEL:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_05 {
uint8_t byte;    struct {
uint8_t H2_FRC_COLOR_NUM_P:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_06 {
uint8_t byte;    struct {
uint8_t H2_FRC_COLOR_NUM_B:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_07 {
uint8_t byte;    struct {
uint8_t H2_FRC_HTOTAL:8;
};};
union FRC_REG_08 {
uint8_t byte;    struct {
uint8_t H2_FRC_HTOTAL:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_09 {
uint8_t byte;    struct {
uint8_t H2_FRC_HPACT_STR:8;
};};
union FRC_REG_0A {
uint8_t byte;    struct {
uint8_t H2_FRC_HPACT_STR:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_0B {
uint8_t byte;    struct {
uint8_t H2_FRC_HPACT_SIZE:8;
};};
union FRC_REG_0C {
uint8_t byte;    struct {
uint8_t H2_FRC_HPACT_SIZE:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_0D {
uint8_t byte;    struct {
uint8_t H2_FRC_HDACT_DMY:8;
};};
union FRC_REG_0E {
uint8_t byte;    struct {
uint8_t H2_FRC_HDACT_DMY:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_0F {
uint8_t byte;    struct {
uint8_t H2_FRC_VPACT_STR:8;
};};
union FRC_REG_10 {
uint8_t byte;    struct {
uint8_t H2_FRC_VPACT_STR:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_11 {
uint8_t byte;    struct {
uint8_t H2_FRC_VPACT_SIZE:8;
};};
union FRC_REG_12 {
uint8_t byte;    struct {
uint8_t H2_FRC_VPACT_SIZE:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_13 {
uint8_t byte;    struct {
uint8_t H2_FRC_VDACT_DMY:8;
};};
union FRC_REG_14 {
uint8_t byte;    struct {
uint8_t H2_FRC_VDACT_DMY:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_15 {
uint8_t byte;    struct {
uint8_t H2_FRC_DMY_SIG_R:8;
};};
union FRC_REG_16 {
uint8_t byte;    struct {
uint8_t H2_FRC_DMY_SIG_G:8;
};};
union FRC_REG_17 {
uint8_t byte;    struct {
uint8_t H2_FRC_DMY_SIG_B:8;
};};
union FRC_REG_18 {
uint8_t byte;    struct {
uint8_t H2_FRC_DMY_SIG_W:8;
};};
union FRC_REG_19 {
uint8_t byte;    struct {
uint8_t H2_FRC_DMY_SIG_A:8;
};};
union FRC_REG_1A {
uint8_t byte;    struct {
uint8_t H2_FRC_BLK_SEL:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_1B {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_MODE:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_1C {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_2F_FIDSEL:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_1D {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_COLOR0:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_1E {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_COLOR1:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_1F {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_COLOR2:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_20 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_COLOR3:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_21 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_COLOR4:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_22 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_COLOR5:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_23 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_COLOR6:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_24 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_COLOR7:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_25 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_COLOR8:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_26 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_COLOR9:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_27 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_COLOR10:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_28 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_COLOR11:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_29 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_COLOR12:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_2A {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_COLOR13:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_2B {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_COLOR14:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_2C {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_COLOR15:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_2D {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_COLOR16:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_2E {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_COLOR17:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_2F {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_COLOR18:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_30 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_COLOR19:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_31 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_COLOR20:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_32 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_COLOR21:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_33 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_COLOR22:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_34 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_COLOR23:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_35 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_FRP0:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_36 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_FRP1:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_37 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_FRP2:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_38 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_FRP3:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_39 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_FRP4:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_3A {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_FRP5:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_3B {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_FRP6:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_3C {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_FRP7:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_3D {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_FRP8:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_3E {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_FRP9:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_3F {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_FRP10:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_40 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_FRP11:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_41 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_FRP12:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_42 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_FRP13:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_43 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_FRP14:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_44 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_FRP15:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_45 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_FRP16:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_46 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_FRP17:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_47 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_FRP18:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_48 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_FRP19:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_49 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_FRP20:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_4A {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_FRP21:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_4B {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_FRP22:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_4C {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_FRP23:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_4D {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_VTOTAL0:8;
};};
union FRC_REG_4E {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_VTOTAL0:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_4F {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_VTOTAL1:8;
};};
union FRC_REG_50 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_VTOTAL1:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_51 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_VTOTAL2:8;
};};
union FRC_REG_52 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_VTOTAL2:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_53 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_VTOTAL3:8;
};};
union FRC_REG_54 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_VTOTAL3:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_55 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_VTOTAL4:8;
};};
union FRC_REG_56 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_VTOTAL4:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_57 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_VTOTAL5:8;
};};
union FRC_REG_58 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_VTOTAL5:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_59 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_VTOTAL6:8;
};};
union FRC_REG_5A {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_VTOTAL6:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_5B {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_VTOTAL7:8;
};};
union FRC_REG_5C {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_VTOTAL7:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_5D {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_VTOTAL8:8;
};};
union FRC_REG_5E {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_VTOTAL8:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_5F {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_VTOTAL9:8;
};};
union FRC_REG_60 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_VTOTAL9:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_61 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_VTOTAL10:8;
};};
union FRC_REG_62 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_VTOTAL10:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_63 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_VTOTAL11:8;
};};
union FRC_REG_64 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_VTOTAL11:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_65 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_VTOTAL12:8;
};};
union FRC_REG_66 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_VTOTAL12:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_67 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_VTOTAL13:8;
};};
union FRC_REG_68 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_VTOTAL13:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_69 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_VTOTAL14:8;
};};
union FRC_REG_6A {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_VTOTAL14:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_6B {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_VTOTAL15:8;
};};
union FRC_REG_6C {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_VTOTAL15:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_6D {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_VTOTAL16:8;
};};
union FRC_REG_6E {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_VTOTAL16:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_6F {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_VTOTAL17:8;
};};
union FRC_REG_70 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_VTOTAL17:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_71 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_VTOTAL18:8;
};};
union FRC_REG_72 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_VTOTAL18:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_73 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_VTOTAL19:8;
};};
union FRC_REG_74 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_VTOTAL19:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_75 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_VTOTAL20:8;
};};
union FRC_REG_76 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_VTOTAL20:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_77 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_VTOTAL21:8;
};};
union FRC_REG_78 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_VTOTAL21:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_79 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_VTOTAL22:8;
};};
union FRC_REG_7A {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_VTOTAL22:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_7B {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_VTOTAL23:8;
};};
union FRC_REG_7C {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_P_VTOTAL23:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_7D {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_COLOR0:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_7E {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_COLOR1:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_7F {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_COLOR2:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_80 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_COLOR3:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_81 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_COLOR4:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_82 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_COLOR5:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_83 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_COLOR6:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_84 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_COLOR7:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_85 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_COLOR8:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_86 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_COLOR9:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_87 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_COLOR10:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_88 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_COLOR11:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_89 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_COLOR12:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_8A {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_COLOR13:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_8B {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_COLOR14:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_8C {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_COLOR15:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_8D {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_COLOR16:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_8E {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_COLOR17:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_8F {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_COLOR18:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_90 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_COLOR19:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_91 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_COLOR20:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_92 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_COLOR21:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_93 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_COLOR22:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_94 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_COLOR23:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_95 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_COLOR24:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_96 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_COLOR25:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_97 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_COLOR26:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_98 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_COLOR27:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_99 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_COLOR28:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_9A {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_COLOR29:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_9B {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_COLOR30:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_9C {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_COLOR31:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_9D {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_FRP0:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_9E {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_FRP1:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_9F {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_FRP2:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_A0 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_FRP3:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_A1 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_FRP4:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_A2 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_FRP5:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_A3 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_FRP6:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_A4 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_FRP7:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_A5 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_FRP8:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_A6 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_FRP9:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_A7 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_FRP10:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_A8 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_FRP11:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_A9 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_FRP12:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_AA {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_FRP13:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_AB {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_FRP14:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_AC {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_FRP15:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_AD {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_FRP16:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_AE {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_FRP17:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_AF {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_FRP18:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_B0 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_FRP19:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_B1 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_FRP20:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_B2 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_FRP21:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_B3 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_FRP22:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_B4 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_FRP23:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_B5 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_FRP24:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_B6 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_FRP25:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_B7 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_FRP26:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_B8 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_FRP27:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_B9 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_FRP28:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_BA {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_FRP29:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_BB {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_FRP30:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_BC {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_FRP31:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_BD {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_OE0:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_BE {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_OE1:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_BF {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_OE2:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_C0 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_OE3:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_C1 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_OE4:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_C2 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_OE5:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_C3 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_OE6:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_C4 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_OE7:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_C5 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_OE8:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_C6 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_OE9:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_C7 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_OE10:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_C8 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_OE11:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_C9 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_OE12:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_CA {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_OE13:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_CB {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_OE14:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_CC {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_OE15:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_CD {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_OE16:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_CE {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_OE17:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_CF {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_OE18:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_D0 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_OE19:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_D1 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_OE20:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_D2 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_OE21:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_D3 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_OE22:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_D4 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_OE23:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_D5 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_OE24:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_D6 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_OE25:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_D7 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_OE26:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_D8 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_OE27:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_D9 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_OE28:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_DA {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_OE29:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_DB {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_OE30:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_DC {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_OE31:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_DD {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL0:8;
};};
union FRC_REG_DE {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL0:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_DF {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL1:8;
};};
union FRC_REG_E0 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL1:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_E1 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL2:8;
};};
union FRC_REG_E2 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL2:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_E3 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL3:8;
};};
union FRC_REG_E4 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL3:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_E5 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL4:8;
};};
union FRC_REG_E6 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL4:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_E7 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL5:8;
};};
union FRC_REG_E8 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL5:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_E9 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL6:8;
};};
union FRC_REG_EA {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL6:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_EB {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL7:8;
};};
union FRC_REG_EC {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL7:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_ED {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL8:8;
};};
union FRC_REG_EE {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL8:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_EF {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL9:8;
};};
union FRC_REG_F0 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL9:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_F1 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL10:8;
};};
union FRC_REG_F2 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL10:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_F3 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL11:8;
};};
union FRC_REG_F4 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL11:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_F5 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL12:8;
};};
union FRC_REG_F6 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL12:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_F7 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL13:8;
};};
union FRC_REG_F8 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL13:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_F9 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL14:8;
};};
union FRC_REG_FA {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL14:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_FB {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL15:8;
};};
union FRC_REG_FC {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL15:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_FD {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL16:8;
};};
union FRC_REG_FE {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL16:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_FF {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL17:8;
};};
union FRC_REG_100 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL17:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_101 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL18:8;
};};
union FRC_REG_102 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL18:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_103 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL19:8;
};};
union FRC_REG_104 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL19:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_105 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL20:8;
};};
union FRC_REG_106 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL20:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_107 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL21:8;
};};
union FRC_REG_108 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL21:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_109 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL22:8;
};};
union FRC_REG_10A {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL22:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_10B {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL23:8;
};};
union FRC_REG_10C {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL23:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_10D {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL24:8;
};};
union FRC_REG_10E {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL24:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_10F {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL25:8;
};};
union FRC_REG_110 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL25:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_111 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL26:8;
};};
union FRC_REG_112 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL26:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_113 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL27:8;
};};
union FRC_REG_114 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL27:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_115 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL28:8;
};};
union FRC_REG_116 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL28:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_117 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL29:8;
};};
union FRC_REG_118 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL29:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_119 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL30:8;
};};
union FRC_REG_11A {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL30:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_11B {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL31:8;
};};
union FRC_REG_11C {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_B_VTOTAL31:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_11D {
uint8_t byte;    struct {
uint8_t H2_FRC_V_DELAY:8;
};};
union FRC_REG_11E {
uint8_t byte;    struct {
uint8_t H2_FRC_V_DELAY:8;
};};
union FRC_REG_11F {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_MODE_UQ:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_120 {
uint8_t byte;    struct {
uint8_t H2_FRC_COLOR_NUM_UQ:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_121 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_COLOR0:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_122 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_COLOR1:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_123 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_COLOR2:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_124 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_COLOR3:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_125 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_COLOR4:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_126 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_COLOR5:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_127 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_COLOR6:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_128 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_COLOR7:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_129 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_COLOR8:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_12A {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_COLOR9:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_12B {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_COLOR10:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_12C {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_COLOR11:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_12D {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_COLOR12:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_12E {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_COLOR13:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_12F {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_COLOR14:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_130 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_COLOR15:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_131 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_COLOR16:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_132 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_COLOR17:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_133 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_COLOR18:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_134 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_COLOR19:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_135 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_COLOR20:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_136 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_COLOR21:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_137 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_COLOR22:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_138 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_COLOR23:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_139 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_FRP0:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_13A {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_FRP1:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_13B {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_FRP2:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_13C {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_FRP3:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_13D {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_FRP4:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_13E {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_FRP5:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_13F {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_FRP6:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_140 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_FRP7:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_141 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_FRP8:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_142 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_FRP9:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_143 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_FRP10:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_144 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_FRP11:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_145 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_FRP12:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_146 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_FRP13:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_147 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_FRP14:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_148 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_FRP15:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_149 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_FRP16:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_14A {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_FRP17:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_14B {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_FRP18:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_14C {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_FRP19:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_14D {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_FRP20:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_14E {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_FRP21:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_14F {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_FRP22:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_150 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_FRP23:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_151 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_VTOTAL0:8;
};};
union FRC_REG_152 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_VTOTAL0:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_153 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_VTOTAL1:8;
};};
union FRC_REG_154 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_VTOTAL1:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_155 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_VTOTAL2:8;
};};
union FRC_REG_156 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_VTOTAL2:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_157 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_VTOTAL3:8;
};};
union FRC_REG_158 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_VTOTAL3:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_159 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_VTOTAL4:8;
};};
union FRC_REG_15A {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_VTOTAL4:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_15B {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_VTOTAL5:8;
};};
union FRC_REG_15C {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_VTOTAL5:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_15D {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_VTOTAL6:8;
};};
union FRC_REG_15E {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_VTOTAL6:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_15F {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_VTOTAL7:8;
};};
union FRC_REG_160 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_VTOTAL7:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_161 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_VTOTAL8:8;
};};
union FRC_REG_162 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_VTOTAL8:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_163 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_VTOTAL9:8;
};};
union FRC_REG_164 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_VTOTAL9:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_165 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_VTOTAL10:8;
};};
union FRC_REG_166 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_VTOTAL10:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_167 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_VTOTAL11:8;
};};
union FRC_REG_168 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_VTOTAL11:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_169 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_VTOTAL12:8;
};};
union FRC_REG_16A {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_VTOTAL12:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_16B {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_VTOTAL13:8;
};};
union FRC_REG_16C {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_VTOTAL13:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_16D {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_VTOTAL14:8;
};};
union FRC_REG_16E {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_VTOTAL14:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_16F {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_VTOTAL15:8;
};};
union FRC_REG_170 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_VTOTAL15:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_171 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_VTOTAL16:8;
};};
union FRC_REG_172 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_VTOTAL16:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_173 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_VTOTAL17:8;
};};
union FRC_REG_174 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_VTOTAL17:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_175 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_VTOTAL18:8;
};};
union FRC_REG_176 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_VTOTAL18:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_177 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_VTOTAL19:8;
};};
union FRC_REG_178 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_VTOTAL19:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_179 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_VTOTAL20:8;
};};
union FRC_REG_17A {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_VTOTAL20:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_17B {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_VTOTAL21:8;
};};
union FRC_REG_17C {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_VTOTAL21:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_17D {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_VTOTAL22:8;
};};
union FRC_REG_17E {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_VTOTAL22:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_17F {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_VTOTAL23:8;
};};
union FRC_REG_180 {
uint8_t byte;    struct {
uint8_t H2_FRC_SF_UQ_VTOTAL23:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_181 {
uint8_t byte;    struct {
uint8_t H2_FRC_STILL_MODE:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_182 {
uint8_t byte;    struct {
uint8_t H2_FRC_MUTE_ALL:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_183 {
uint8_t byte;    struct {
uint8_t H2_FRC_MUTE_R:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_184 {
uint8_t byte;    struct {
uint8_t H2_FRC_MUTE_G:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_185 {
uint8_t byte;    struct {
uint8_t H2_FRC_MUTE_B:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_186 {
uint8_t byte;    struct {
uint8_t H2_FRC_MUTE_W:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_187 {
uint8_t byte;    struct {
uint8_t H2_FRC_MUTE_A:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_188 {
uint8_t byte;    struct {
uint8_t H2_FRC_MUTE_EXT:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_189 {
uint8_t byte;    struct {
uint8_t H2_FRC_MUTE_EXT_POL:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_18A {
uint8_t byte;    struct {
uint8_t H2_FRC_MUTE_RDAT:8;
};};
union FRC_REG_18B {
uint8_t byte;    struct {
uint8_t H2_FRC_MUTE_GDAT:8;
};};
union FRC_REG_18C {
uint8_t byte;    struct {
uint8_t H2_FRC_MUTE_BDAT:8;
};};
union FRC_REG_18D {
uint8_t byte;    struct {
uint8_t H2_FRC_MUTE_WDAT:8;
};};
union FRC_REG_18E {
uint8_t byte;    struct {
uint8_t H2_FRC_MUTE_ADAT:8;
};};
union FRC_REG_18F {
uint8_t byte;    struct {
uint8_t H2_FRC_FID_MODE:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_190 {
uint8_t byte;    struct {
uint8_t H2_FRC_FGEN_MODE:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_191 {
uint8_t byte;    struct {
uint8_t H2_FRC_FGEN_SWEN:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_192 {
uint8_t byte;    struct {
uint8_t H2_FRC_FGEN_VMIN:8;
};};
union FRC_REG_193 {
uint8_t byte;    struct {
uint8_t H2_FRC_FGEN_VMIN:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_194 {
uint8_t byte;    struct {
uint8_t H2_FRC_FGEN_VMAX:8;
};};
union FRC_REG_195 {
uint8_t byte;    struct {
uint8_t H2_FRC_FGEN_VMAX:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_196 {
uint8_t byte;    struct {
uint8_t H2_FRC_FGEN_SWFNUM:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_197 {
uint8_t byte;    struct {
uint8_t H2_FRC_VILL_LONG:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_198 {
uint8_t byte;    struct {
uint8_t H2_FRC_VILL_SHORT:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_199 {
uint8_t byte;    struct {
uint8_t H2_FRC_ILLHOLD:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_19A {
uint8_t byte;    struct {
uint8_t H2_FRC_VILL_FR:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_19B {
uint8_t byte;    struct {
uint8_t H2_FRC_MASKON:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_19C {
uint8_t byte;    struct {
uint8_t H2_FRC_FR_MODE:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_19D {
uint8_t byte;    struct {
uint8_t H2_FRC_BORDER_EN:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_19E {
uint8_t byte;    struct {
uint8_t H2_FRC_TCON_BR_LR:8;
};};
union FRC_REG_19F {
uint8_t byte;    struct {
uint8_t H2_FRC_TCON_BR_UD:8;
};};
union FRC_REG_1A0 {
uint8_t byte;    struct {
uint8_t H2_FRC_W_IN_SEL:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_1A1 {
uint8_t byte;    struct {
uint8_t H2_FRC_CKGATED_OFF:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_1A2 {
uint8_t byte;    struct {
uint8_t H2_FRC_EBCREFINMODE:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_1A3 {
uint8_t byte;    struct {
uint8_t H2_FRC_REQ_LEN_SEL_R:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_1A4 {
uint8_t byte;    struct {
uint8_t H2_FRC_REQ_LEN_SEL_G:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_1A5 {
uint8_t byte;    struct {
uint8_t H2_FRC_REQ_LEN_SEL_B:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_1A6 {
uint8_t byte;    struct {
uint8_t H2_FRC_REQ_LEN_SEL_W:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_1A7 {
uint8_t byte;    struct {
uint8_t H2_FRC_REQ_LEN_SEL_A:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_1A8 {
uint8_t byte;    struct {
uint8_t H2_FRC_PRI_SEL0:8;
};};
union FRC_REG_1A9 {
uint8_t byte;    struct {
uint8_t H2_FRC_PRI_SEL0:8;
};};
union FRC_REG_1AA {
uint8_t byte;    struct {
uint8_t H2_FRC_PRI_SEL1:8;
};};
union FRC_REG_1AB {
uint8_t byte;    struct {
uint8_t H2_FRC_PRI_SEL1:8;
};};
union FRC_REG_1AC {
uint8_t byte;    struct {
uint8_t H2_FRC_PRI_SEL2:8;
};};
union FRC_REG_1AD {
uint8_t byte;    struct {
uint8_t H2_FRC_PRI_SEL2:8;
};};
union FRC_REG_1AE {
uint8_t byte;    struct {
uint8_t H2_FRC_PRI_SEL3:8;
};};
union FRC_REG_1AF {
uint8_t byte;    struct {
uint8_t H2_FRC_PRI_SEL3:8;
};};
union FRC_REG_1B0 {
uint8_t byte;    struct {
uint8_t H2_FRC_PRI_SEL4:8;
};};
union FRC_REG_1B1 {
uint8_t byte;    struct {
uint8_t H2_FRC_PRI_SEL4:8;
};};
union FRC_REG_1B2 {
uint8_t byte;    struct {
uint8_t H2_FRC_PRI_SEL5:8;
};};
union FRC_REG_1B3 {
uint8_t byte;    struct {
uint8_t H2_FRC_PRI_SEL5:8;
};};
union FRC_REG_1B4 {
uint8_t byte;    struct {
uint8_t H2_FRC_PRI_SEL6:8;
};};
union FRC_REG_1B5 {
uint8_t byte;    struct {
uint8_t H2_FRC_PRI_SEL6:8;
};};
union FRC_REG_1B6 {
uint8_t byte;    struct {
uint8_t H2_FRC_PRI_SEL7:8;
};};
union FRC_REG_1B7 {
uint8_t byte;    struct {
uint8_t H2_FRC_PRI_SEL7:8;
};};
union FRC_REG_1B8 {
uint8_t byte;    struct {
uint8_t H2_FRC_PRI_SEL8:8;
};};
union FRC_REG_1B9 {
uint8_t byte;    struct {
uint8_t H2_FRC_PRI_SEL8:8;
};};
union FRC_REG_1BA {
uint8_t byte;    struct {
uint8_t H2_FRC_PRI_SEL9:8;
};};
union FRC_REG_1BB {
uint8_t byte;    struct {
uint8_t H2_FRC_PRI_SEL9:8;
};};
union FRC_REG_1BC {
uint8_t byte;    struct {
uint8_t H2_FRC_PRI_SEL10:8;
};};
union FRC_REG_1BD {
uint8_t byte;    struct {
uint8_t H2_FRC_PRI_SEL10:8;
};};
union FRC_REG_1BE {
uint8_t byte;    struct {
uint8_t H2_FRC_PRI_SEL11:8;
};};
union FRC_REG_1BF {
uint8_t byte;    struct {
uint8_t H2_FRC_PRI_SEL11:8;
};};
union FRC_REG_1C0 {
uint8_t byte;    struct {
uint8_t H2_FRC_PRI_SEL12:8;
};};
union FRC_REG_1C1 {
uint8_t byte;    struct {
uint8_t H2_FRC_PRI_SEL12:8;
};};
union FRC_REG_1C2 {
uint8_t byte;    struct {
uint8_t H2_FRC_PRI_SEL13:8;
};};
union FRC_REG_1C3 {
uint8_t byte;    struct {
uint8_t H2_FRC_PRI_SEL13:8;
};};
union FRC_REG_1C4 {
uint8_t byte;    struct {
uint8_t H2_FRC_PRI_SEL14:8;
};};
union FRC_REG_1C5 {
uint8_t byte;    struct {
uint8_t H2_FRC_PRI_SEL14:8;
};};
union FRC_REG_1C6 {
uint8_t byte;    struct {
uint8_t H2_FRC_PRI_SEL15:8;
};};
union FRC_REG_1C7 {
uint8_t byte;    struct {
uint8_t H2_FRC_PRI_SEL15:8;
};};
union FRC_REG_1C8 {
uint8_t byte;    struct {
uint8_t H2_FRC_BASE_ADDR_R:8;
};};
union FRC_REG_1C9 {
uint8_t byte;    struct {
uint8_t H2_FRC_BASE_ADDR_R:8;
};};
union FRC_REG_1CA {
uint8_t byte;    struct {
uint8_t H2_FRC_BASE_ADDR_R:8;
};};
union FRC_REG_1CB {
uint8_t byte;    struct {
uint8_t H2_FRC_BASE_ADDR_G:8;
};};
union FRC_REG_1CC {
uint8_t byte;    struct {
uint8_t H2_FRC_BASE_ADDR_G:8;
};};
union FRC_REG_1CD {
uint8_t byte;    struct {
uint8_t H2_FRC_BASE_ADDR_G:8;
};};
union FRC_REG_1CE {
uint8_t byte;    struct {
uint8_t H2_FRC_BASE_ADDR_B:8;
};};
union FRC_REG_1CF {
uint8_t byte;    struct {
uint8_t H2_FRC_BASE_ADDR_B:8;
};};
union FRC_REG_1D0 {
uint8_t byte;    struct {
uint8_t H2_FRC_BASE_ADDR_B:8;
};};
union FRC_REG_1D1 {
uint8_t byte;    struct {
uint8_t H2_FRC_BASE_ADDR_W:8;
};};
union FRC_REG_1D2 {
uint8_t byte;    struct {
uint8_t H2_FRC_BASE_ADDR_W:8;
};};
union FRC_REG_1D3 {
uint8_t byte;    struct {
uint8_t H2_FRC_BASE_ADDR_W:8;
};};
union FRC_REG_1D4 {
uint8_t byte;    struct {
uint8_t H2_FRC_BASE_ADDR_A:8;
};};
union FRC_REG_1D5 {
uint8_t byte;    struct {
uint8_t H2_FRC_BASE_ADDR_A:8;
};};
union FRC_REG_1D6 {
uint8_t byte;    struct {
uint8_t H2_FRC_BASE_ADDR_A:8;
};};
union FRC_REG_1D7 {
uint8_t byte;    struct {
uint8_t H2_FRC_FRAME_SIZE_R:8;
};};
union FRC_REG_1D8 {
uint8_t byte;    struct {
uint8_t H2_FRC_FRAME_SIZE_R:8;
};};
union FRC_REG_1D9 {
uint8_t byte;    struct {
uint8_t H2_FRC_FRAME_SIZE_R:8;
};};
union FRC_REG_1DA {
uint8_t byte;    struct {
uint8_t H2_FRC_FRAME_SIZE_G:8;
};};
union FRC_REG_1DB {
uint8_t byte;    struct {
uint8_t H2_FRC_FRAME_SIZE_G:8;
};};
union FRC_REG_1DC {
uint8_t byte;    struct {
uint8_t H2_FRC_FRAME_SIZE_G:8;
};};
union FRC_REG_1DD {
uint8_t byte;    struct {
uint8_t H2_FRC_FRAME_SIZE_B:8;
};};
union FRC_REG_1DE {
uint8_t byte;    struct {
uint8_t H2_FRC_FRAME_SIZE_B:8;
};};
union FRC_REG_1DF {
uint8_t byte;    struct {
uint8_t H2_FRC_FRAME_SIZE_B:8;
};};
union FRC_REG_1E0 {
uint8_t byte;    struct {
uint8_t H2_FRC_FRAME_SIZE_W:8;
};};
union FRC_REG_1E1 {
uint8_t byte;    struct {
uint8_t H2_FRC_FRAME_SIZE_W:8;
};};
union FRC_REG_1E2 {
uint8_t byte;    struct {
uint8_t H2_FRC_FRAME_SIZE_W:8;
};};
union FRC_REG_1E3 {
uint8_t byte;    struct {
uint8_t H2_FRC_FRAME_SIZE_A:8;
};};
union FRC_REG_1E4 {
uint8_t byte;    struct {
uint8_t H2_FRC_FRAME_SIZE_A:8;
};};
union FRC_REG_1E5 {
uint8_t byte;    struct {
uint8_t H2_FRC_FRAME_SIZE_A:8;
};};
union FRC_REG_1E6 {
uint8_t byte;    struct {
uint8_t H2_FRC_TG_EN:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_1E7 {
uint8_t byte;    struct {
uint8_t H2_FRC_INIT_REQ_DLY:8;
};};
union FRC_REG_1E8 {
uint8_t byte;    struct {
uint8_t H2_FRC_INIT_REQ_CNT:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_1E9 {
uint8_t byte;    struct {
uint8_t H2_FRC_FIFO_UF_CLEAN:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_1EA {
uint8_t byte;    struct {
uint8_t H2_FRC_NXT_REQ_DLY:8;
};};
union FRC_REG_1EB {
uint8_t byte;    struct {
uint8_t H2_FRC_REQ_LEN_SEL_RD:8;
};};
union FRC_REG_1EC {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_1ED {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_1EE {
uint8_t byte;    struct {
uint8_t H2_FRC_LATCH_MODE:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union FRC_REG_1EF {
uint8_t byte;    struct {
uint8_t H2_FRC_PRE_VDELAY:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
typedef struct FRC_T {
union FRC_REG_00 reg00;
union FRC_REG_01 reg01;
union FRC_REG_02 reg02;
union FRC_REG_03 reg03;
union FRC_REG_04 reg04;
union FRC_REG_05 reg05;
union FRC_REG_06 reg06;
union FRC_REG_07 reg07;
union FRC_REG_08 reg08;
union FRC_REG_09 reg09;
union FRC_REG_0A reg0A;
union FRC_REG_0B reg0B;
union FRC_REG_0C reg0C;
union FRC_REG_0D reg0D;
union FRC_REG_0E reg0E;
union FRC_REG_0F reg0F;
union FRC_REG_10 reg10;
union FRC_REG_11 reg11;
union FRC_REG_12 reg12;
union FRC_REG_13 reg13;
union FRC_REG_14 reg14;
union FRC_REG_15 reg15;
union FRC_REG_16 reg16;
union FRC_REG_17 reg17;
union FRC_REG_18 reg18;
union FRC_REG_19 reg19;
union FRC_REG_1A reg1A;
union FRC_REG_1B reg1B;
union FRC_REG_1C reg1C;
union FRC_REG_1D reg1D;
union FRC_REG_1E reg1E;
union FRC_REG_1F reg1F;
union FRC_REG_20 reg20;
union FRC_REG_21 reg21;
union FRC_REG_22 reg22;
union FRC_REG_23 reg23;
union FRC_REG_24 reg24;
union FRC_REG_25 reg25;
union FRC_REG_26 reg26;
union FRC_REG_27 reg27;
union FRC_REG_28 reg28;
union FRC_REG_29 reg29;
union FRC_REG_2A reg2A;
union FRC_REG_2B reg2B;
union FRC_REG_2C reg2C;
union FRC_REG_2D reg2D;
union FRC_REG_2E reg2E;
union FRC_REG_2F reg2F;
union FRC_REG_30 reg30;
union FRC_REG_31 reg31;
union FRC_REG_32 reg32;
union FRC_REG_33 reg33;
union FRC_REG_34 reg34;
union FRC_REG_35 reg35;
union FRC_REG_36 reg36;
union FRC_REG_37 reg37;
union FRC_REG_38 reg38;
union FRC_REG_39 reg39;
union FRC_REG_3A reg3A;
union FRC_REG_3B reg3B;
union FRC_REG_3C reg3C;
union FRC_REG_3D reg3D;
union FRC_REG_3E reg3E;
union FRC_REG_3F reg3F;
union FRC_REG_40 reg40;
union FRC_REG_41 reg41;
union FRC_REG_42 reg42;
union FRC_REG_43 reg43;
union FRC_REG_44 reg44;
union FRC_REG_45 reg45;
union FRC_REG_46 reg46;
union FRC_REG_47 reg47;
union FRC_REG_48 reg48;
union FRC_REG_49 reg49;
union FRC_REG_4A reg4A;
union FRC_REG_4B reg4B;
union FRC_REG_4C reg4C;
union FRC_REG_4D reg4D;
union FRC_REG_4E reg4E;
union FRC_REG_4F reg4F;
union FRC_REG_50 reg50;
union FRC_REG_51 reg51;
union FRC_REG_52 reg52;
union FRC_REG_53 reg53;
union FRC_REG_54 reg54;
union FRC_REG_55 reg55;
union FRC_REG_56 reg56;
union FRC_REG_57 reg57;
union FRC_REG_58 reg58;
union FRC_REG_59 reg59;
union FRC_REG_5A reg5A;
union FRC_REG_5B reg5B;
union FRC_REG_5C reg5C;
union FRC_REG_5D reg5D;
union FRC_REG_5E reg5E;
union FRC_REG_5F reg5F;
union FRC_REG_60 reg60;
union FRC_REG_61 reg61;
union FRC_REG_62 reg62;
union FRC_REG_63 reg63;
union FRC_REG_64 reg64;
union FRC_REG_65 reg65;
union FRC_REG_66 reg66;
union FRC_REG_67 reg67;
union FRC_REG_68 reg68;
union FRC_REG_69 reg69;
union FRC_REG_6A reg6A;
union FRC_REG_6B reg6B;
union FRC_REG_6C reg6C;
union FRC_REG_6D reg6D;
union FRC_REG_6E reg6E;
union FRC_REG_6F reg6F;
union FRC_REG_70 reg70;
union FRC_REG_71 reg71;
union FRC_REG_72 reg72;
union FRC_REG_73 reg73;
union FRC_REG_74 reg74;
union FRC_REG_75 reg75;
union FRC_REG_76 reg76;
union FRC_REG_77 reg77;
union FRC_REG_78 reg78;
union FRC_REG_79 reg79;
union FRC_REG_7A reg7A;
union FRC_REG_7B reg7B;
union FRC_REG_7C reg7C;
union FRC_REG_7D reg7D;
union FRC_REG_7E reg7E;
union FRC_REG_7F reg7F;
union FRC_REG_80 reg80;
union FRC_REG_81 reg81;
union FRC_REG_82 reg82;
union FRC_REG_83 reg83;
union FRC_REG_84 reg84;
union FRC_REG_85 reg85;
union FRC_REG_86 reg86;
union FRC_REG_87 reg87;
union FRC_REG_88 reg88;
union FRC_REG_89 reg89;
union FRC_REG_8A reg8A;
union FRC_REG_8B reg8B;
union FRC_REG_8C reg8C;
union FRC_REG_8D reg8D;
union FRC_REG_8E reg8E;
union FRC_REG_8F reg8F;
union FRC_REG_90 reg90;
union FRC_REG_91 reg91;
union FRC_REG_92 reg92;
union FRC_REG_93 reg93;
union FRC_REG_94 reg94;
union FRC_REG_95 reg95;
union FRC_REG_96 reg96;
union FRC_REG_97 reg97;
union FRC_REG_98 reg98;
union FRC_REG_99 reg99;
union FRC_REG_9A reg9A;
union FRC_REG_9B reg9B;
union FRC_REG_9C reg9C;
union FRC_REG_9D reg9D;
union FRC_REG_9E reg9E;
union FRC_REG_9F reg9F;
union FRC_REG_A0 regA0;
union FRC_REG_A1 regA1;
union FRC_REG_A2 regA2;
union FRC_REG_A3 regA3;
union FRC_REG_A4 regA4;
union FRC_REG_A5 regA5;
union FRC_REG_A6 regA6;
union FRC_REG_A7 regA7;
union FRC_REG_A8 regA8;
union FRC_REG_A9 regA9;
union FRC_REG_AA regAA;
union FRC_REG_AB regAB;
union FRC_REG_AC regAC;
union FRC_REG_AD regAD;
union FRC_REG_AE regAE;
union FRC_REG_AF regAF;
union FRC_REG_B0 regB0;
union FRC_REG_B1 regB1;
union FRC_REG_B2 regB2;
union FRC_REG_B3 regB3;
union FRC_REG_B4 regB4;
union FRC_REG_B5 regB5;
union FRC_REG_B6 regB6;
union FRC_REG_B7 regB7;
union FRC_REG_B8 regB8;
union FRC_REG_B9 regB9;
union FRC_REG_BA regBA;
union FRC_REG_BB regBB;
union FRC_REG_BC regBC;
union FRC_REG_BD regBD;
union FRC_REG_BE regBE;
union FRC_REG_BF regBF;
union FRC_REG_C0 regC0;
union FRC_REG_C1 regC1;
union FRC_REG_C2 regC2;
union FRC_REG_C3 regC3;
union FRC_REG_C4 regC4;
union FRC_REG_C5 regC5;
union FRC_REG_C6 regC6;
union FRC_REG_C7 regC7;
union FRC_REG_C8 regC8;
union FRC_REG_C9 regC9;
union FRC_REG_CA regCA;
union FRC_REG_CB regCB;
union FRC_REG_CC regCC;
union FRC_REG_CD regCD;
union FRC_REG_CE regCE;
union FRC_REG_CF regCF;
union FRC_REG_D0 regD0;
union FRC_REG_D1 regD1;
union FRC_REG_D2 regD2;
union FRC_REG_D3 regD3;
union FRC_REG_D4 regD4;
union FRC_REG_D5 regD5;
union FRC_REG_D6 regD6;
union FRC_REG_D7 regD7;
union FRC_REG_D8 regD8;
union FRC_REG_D9 regD9;
union FRC_REG_DA regDA;
union FRC_REG_DB regDB;
union FRC_REG_DC regDC;
union FRC_REG_DD regDD;
union FRC_REG_DE regDE;
union FRC_REG_DF regDF;
union FRC_REG_E0 regE0;
union FRC_REG_E1 regE1;
union FRC_REG_E2 regE2;
union FRC_REG_E3 regE3;
union FRC_REG_E4 regE4;
union FRC_REG_E5 regE5;
union FRC_REG_E6 regE6;
union FRC_REG_E7 regE7;
union FRC_REG_E8 regE8;
union FRC_REG_E9 regE9;
union FRC_REG_EA regEA;
union FRC_REG_EB regEB;
union FRC_REG_EC regEC;
union FRC_REG_ED regED;
union FRC_REG_EE regEE;
union FRC_REG_EF regEF;
union FRC_REG_F0 regF0;
union FRC_REG_F1 regF1;
union FRC_REG_F2 regF2;
union FRC_REG_F3 regF3;
union FRC_REG_F4 regF4;
union FRC_REG_F5 regF5;
union FRC_REG_F6 regF6;
union FRC_REG_F7 regF7;
union FRC_REG_F8 regF8;
union FRC_REG_F9 regF9;
union FRC_REG_FA regFA;
union FRC_REG_FB regFB;
union FRC_REG_FC regFC;
union FRC_REG_FD regFD;
union FRC_REG_FE regFE;
union FRC_REG_FF regFF;
union FRC_REG_100 reg100;
union FRC_REG_101 reg101;
union FRC_REG_102 reg102;
union FRC_REG_103 reg103;
union FRC_REG_104 reg104;
union FRC_REG_105 reg105;
union FRC_REG_106 reg106;
union FRC_REG_107 reg107;
union FRC_REG_108 reg108;
union FRC_REG_109 reg109;
union FRC_REG_10A reg10A;
union FRC_REG_10B reg10B;
union FRC_REG_10C reg10C;
union FRC_REG_10D reg10D;
union FRC_REG_10E reg10E;
union FRC_REG_10F reg10F;
union FRC_REG_110 reg110;
union FRC_REG_111 reg111;
union FRC_REG_112 reg112;
union FRC_REG_113 reg113;
union FRC_REG_114 reg114;
union FRC_REG_115 reg115;
union FRC_REG_116 reg116;
union FRC_REG_117 reg117;
union FRC_REG_118 reg118;
union FRC_REG_119 reg119;
union FRC_REG_11A reg11A;
union FRC_REG_11B reg11B;
union FRC_REG_11C reg11C;
union FRC_REG_11D reg11D;
union FRC_REG_11E reg11E;
union FRC_REG_11F reg11F;
union FRC_REG_120 reg120;
union FRC_REG_121 reg121;
union FRC_REG_122 reg122;
union FRC_REG_123 reg123;
union FRC_REG_124 reg124;
union FRC_REG_125 reg125;
union FRC_REG_126 reg126;
union FRC_REG_127 reg127;
union FRC_REG_128 reg128;
union FRC_REG_129 reg129;
union FRC_REG_12A reg12A;
union FRC_REG_12B reg12B;
union FRC_REG_12C reg12C;
union FRC_REG_12D reg12D;
union FRC_REG_12E reg12E;
union FRC_REG_12F reg12F;
union FRC_REG_130 reg130;
union FRC_REG_131 reg131;
union FRC_REG_132 reg132;
union FRC_REG_133 reg133;
union FRC_REG_134 reg134;
union FRC_REG_135 reg135;
union FRC_REG_136 reg136;
union FRC_REG_137 reg137;
union FRC_REG_138 reg138;
union FRC_REG_139 reg139;
union FRC_REG_13A reg13A;
union FRC_REG_13B reg13B;
union FRC_REG_13C reg13C;
union FRC_REG_13D reg13D;
union FRC_REG_13E reg13E;
union FRC_REG_13F reg13F;
union FRC_REG_140 reg140;
union FRC_REG_141 reg141;
union FRC_REG_142 reg142;
union FRC_REG_143 reg143;
union FRC_REG_144 reg144;
union FRC_REG_145 reg145;
union FRC_REG_146 reg146;
union FRC_REG_147 reg147;
union FRC_REG_148 reg148;
union FRC_REG_149 reg149;
union FRC_REG_14A reg14A;
union FRC_REG_14B reg14B;
union FRC_REG_14C reg14C;
union FRC_REG_14D reg14D;
union FRC_REG_14E reg14E;
union FRC_REG_14F reg14F;
union FRC_REG_150 reg150;
union FRC_REG_151 reg151;
union FRC_REG_152 reg152;
union FRC_REG_153 reg153;
union FRC_REG_154 reg154;
union FRC_REG_155 reg155;
union FRC_REG_156 reg156;
union FRC_REG_157 reg157;
union FRC_REG_158 reg158;
union FRC_REG_159 reg159;
union FRC_REG_15A reg15A;
union FRC_REG_15B reg15B;
union FRC_REG_15C reg15C;
union FRC_REG_15D reg15D;
union FRC_REG_15E reg15E;
union FRC_REG_15F reg15F;
union FRC_REG_160 reg160;
union FRC_REG_161 reg161;
union FRC_REG_162 reg162;
union FRC_REG_163 reg163;
union FRC_REG_164 reg164;
union FRC_REG_165 reg165;
union FRC_REG_166 reg166;
union FRC_REG_167 reg167;
union FRC_REG_168 reg168;
union FRC_REG_169 reg169;
union FRC_REG_16A reg16A;
union FRC_REG_16B reg16B;
union FRC_REG_16C reg16C;
union FRC_REG_16D reg16D;
union FRC_REG_16E reg16E;
union FRC_REG_16F reg16F;
union FRC_REG_170 reg170;
union FRC_REG_171 reg171;
union FRC_REG_172 reg172;
union FRC_REG_173 reg173;
union FRC_REG_174 reg174;
union FRC_REG_175 reg175;
union FRC_REG_176 reg176;
union FRC_REG_177 reg177;
union FRC_REG_178 reg178;
union FRC_REG_179 reg179;
union FRC_REG_17A reg17A;
union FRC_REG_17B reg17B;
union FRC_REG_17C reg17C;
union FRC_REG_17D reg17D;
union FRC_REG_17E reg17E;
union FRC_REG_17F reg17F;
union FRC_REG_180 reg180;
union FRC_REG_181 reg181;
union FRC_REG_182 reg182;
union FRC_REG_183 reg183;
union FRC_REG_184 reg184;
union FRC_REG_185 reg185;
union FRC_REG_186 reg186;
union FRC_REG_187 reg187;
union FRC_REG_188 reg188;
union FRC_REG_189 reg189;
union FRC_REG_18A reg18A;
union FRC_REG_18B reg18B;
union FRC_REG_18C reg18C;
union FRC_REG_18D reg18D;
union FRC_REG_18E reg18E;
union FRC_REG_18F reg18F;
union FRC_REG_190 reg190;
union FRC_REG_191 reg191;
union FRC_REG_192 reg192;
union FRC_REG_193 reg193;
union FRC_REG_194 reg194;
union FRC_REG_195 reg195;
union FRC_REG_196 reg196;
union FRC_REG_197 reg197;
union FRC_REG_198 reg198;
union FRC_REG_199 reg199;
union FRC_REG_19A reg19A;
union FRC_REG_19B reg19B;
union FRC_REG_19C reg19C;
union FRC_REG_19D reg19D;
union FRC_REG_19E reg19E;
union FRC_REG_19F reg19F;
union FRC_REG_1A0 reg1A0;
union FRC_REG_1A1 reg1A1;
union FRC_REG_1A2 reg1A2;
union FRC_REG_1A3 reg1A3;
union FRC_REG_1A4 reg1A4;
union FRC_REG_1A5 reg1A5;
union FRC_REG_1A6 reg1A6;
union FRC_REG_1A7 reg1A7;
union FRC_REG_1A8 reg1A8;
union FRC_REG_1A9 reg1A9;
union FRC_REG_1AA reg1AA;
union FRC_REG_1AB reg1AB;
union FRC_REG_1AC reg1AC;
union FRC_REG_1AD reg1AD;
union FRC_REG_1AE reg1AE;
union FRC_REG_1AF reg1AF;
union FRC_REG_1B0 reg1B0;
union FRC_REG_1B1 reg1B1;
union FRC_REG_1B2 reg1B2;
union FRC_REG_1B3 reg1B3;
union FRC_REG_1B4 reg1B4;
union FRC_REG_1B5 reg1B5;
union FRC_REG_1B6 reg1B6;
union FRC_REG_1B7 reg1B7;
union FRC_REG_1B8 reg1B8;
union FRC_REG_1B9 reg1B9;
union FRC_REG_1BA reg1BA;
union FRC_REG_1BB reg1BB;
union FRC_REG_1BC reg1BC;
union FRC_REG_1BD reg1BD;
union FRC_REG_1BE reg1BE;
union FRC_REG_1BF reg1BF;
union FRC_REG_1C0 reg1C0;
union FRC_REG_1C1 reg1C1;
union FRC_REG_1C2 reg1C2;
union FRC_REG_1C3 reg1C3;
union FRC_REG_1C4 reg1C4;
union FRC_REG_1C5 reg1C5;
union FRC_REG_1C6 reg1C6;
union FRC_REG_1C7 reg1C7;
union FRC_REG_1C8 reg1C8;
union FRC_REG_1C9 reg1C9;
union FRC_REG_1CA reg1CA;
union FRC_REG_1CB reg1CB;
union FRC_REG_1CC reg1CC;
union FRC_REG_1CD reg1CD;
union FRC_REG_1CE reg1CE;
union FRC_REG_1CF reg1CF;
union FRC_REG_1D0 reg1D0;
union FRC_REG_1D1 reg1D1;
union FRC_REG_1D2 reg1D2;
union FRC_REG_1D3 reg1D3;
union FRC_REG_1D4 reg1D4;
union FRC_REG_1D5 reg1D5;
union FRC_REG_1D6 reg1D6;
union FRC_REG_1D7 reg1D7;
union FRC_REG_1D8 reg1D8;
union FRC_REG_1D9 reg1D9;
union FRC_REG_1DA reg1DA;
union FRC_REG_1DB reg1DB;
union FRC_REG_1DC reg1DC;
union FRC_REG_1DD reg1DD;
union FRC_REG_1DE reg1DE;
union FRC_REG_1DF reg1DF;
union FRC_REG_1E0 reg1E0;
union FRC_REG_1E1 reg1E1;
union FRC_REG_1E2 reg1E2;
union FRC_REG_1E3 reg1E3;
union FRC_REG_1E4 reg1E4;
union FRC_REG_1E5 reg1E5;
union FRC_REG_1E6 reg1E6;
union FRC_REG_1E7 reg1E7;
union FRC_REG_1E8 reg1E8;
union FRC_REG_1E9 reg1E9;
union FRC_REG_1EA reg1EA;
union FRC_REG_1EB reg1EB;
union FRC_REG_1EC reg1EC;
union FRC_REG_1ED reg1ED;
union FRC_REG_1EE reg1EE;
union FRC_REG_1EF reg1EF;
} frc_t;

extern frc_t frc;

#endif
