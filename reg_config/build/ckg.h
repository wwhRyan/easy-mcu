#ifndef __CKG_H__
#define __CKG_H__

#include <stdint.h>

#define CKG_BASE_ADDRESS 0x0200
#define CKG_REG_NUM 71
#define CKG_REG_ADDR(reg) REG_ADDR(CKG_BASE_ADDRESS,ckg_t,reg)

union CKG_REG_00 {
uint8_t byte;    struct {
uint8_t CKG_PD_PIX:1;
uint8_t CKG_RESET_SSMOD_PIX:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union CKG_REG_01 {
uint8_t byte;    struct {
uint8_t CKG_FOUTPOSTDIVPD_PIX:1;
uint8_t CKG_FOUT4PHASEPD_PIX:1;
uint8_t CKG_FOUTVCOPD_PIX:1;
uint8_t CKG_DACPD_PIX:1;
uint8_t CKG_DSMPD_PIX:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union CKG_REG_02 {
uint8_t byte;    struct {
uint8_t CKG_REFDIV_PIX:6;
uint8_t  :1;
uint8_t  :1;
};};
union CKG_REG_03 {
uint8_t byte;    struct {
uint8_t CKG_FBDIV_PIX:8;
};};
union CKG_REG_04 {
uint8_t byte;    struct {
uint8_t CKG_FBDIV_PIX:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union CKG_REG_05 {
uint8_t byte;    struct {
uint8_t CKG_FRAC_PIX:8;
};};
union CKG_REG_06 {
uint8_t byte;    struct {
uint8_t CKG_FRAC_PIX:8;
};};
union CKG_REG_07 {
uint8_t byte;    struct {
uint8_t CKG_FRAC_PIX:8;
};};
union CKG_REG_08 {
uint8_t byte;    struct {
uint8_t CKG_POSTDIV1_PIX:3;
uint8_t  :1;
uint8_t CKG_POSTDIV2_PIX:3;
uint8_t  :1;
};};
union CKG_REG_09 {
uint8_t byte;    struct {
uint8_t CKG_BYPASS_PIX:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union CKG_REG_0A {
uint8_t byte;    struct {
uint8_t CKG_DISABLE_SSCG_PIX:1;
uint8_t CKG_DOWNSPREAD_PIX:1;
uint8_t CKG_HALF_TABLE_PIX:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union CKG_REG_0B {
uint8_t byte;    struct {
uint8_t CKG_DIVVAL_PIX:6;
uint8_t  :1;
uint8_t  :1;
};};
union CKG_REG_0C {
uint8_t byte;    struct {
uint8_t CKG_SPREAD_PIX:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union CKG_REG_0D {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union CKG_REG_0E {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union CKG_REG_0F {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union CKG_REG_10 {
uint8_t byte;    struct {
uint8_t CKG_PD_FS:1;
uint8_t CKG_RESET_SSMOD_FS:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union CKG_REG_11 {
uint8_t byte;    struct {
uint8_t CKG_FOUTPOSTDIVPD_FS:1;
uint8_t CKG_FOUT4PHASEPD_FS:1;
uint8_t CKG_FOUTVCOPD_FS:1;
uint8_t CKG_DACPD_FS:1;
uint8_t CKG_DSMPD_FS:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union CKG_REG_12 {
uint8_t byte;    struct {
uint8_t CKG_REFDIV_FS:6;
uint8_t  :1;
uint8_t  :1;
};};
union CKG_REG_13 {
uint8_t byte;    struct {
uint8_t CKG_FBDIV_FS:8;
};};
union CKG_REG_14 {
uint8_t byte;    struct {
uint8_t CKG_FBDIV_FS:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union CKG_REG_15 {
uint8_t byte;    struct {
uint8_t CKG_FRAC_FS:8;
};};
union CKG_REG_16 {
uint8_t byte;    struct {
uint8_t CKG_FRAC_FS:8;
};};
union CKG_REG_17 {
uint8_t byte;    struct {
uint8_t CKG_FRAC_FS:8;
};};
union CKG_REG_18 {
uint8_t byte;    struct {
uint8_t CKG_POSTDIV1_FS:3;
uint8_t  :1;
uint8_t CKG_POSTDIV2_FS:3;
uint8_t  :1;
};};
union CKG_REG_19 {
uint8_t byte;    struct {
uint8_t CKG_BYPASS_FS:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union CKG_REG_1A {
uint8_t byte;    struct {
uint8_t CKG_DISABLE_SSCG_FS:1;
uint8_t CKG_DOWNSPREAD_FS:1;
uint8_t CKG_HALF_TABLE_FS:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union CKG_REG_1B {
uint8_t byte;    struct {
uint8_t CKG_DIVVAL_FS:6;
uint8_t  :1;
uint8_t  :1;
};};
union CKG_REG_1C {
uint8_t byte;    struct {
uint8_t CKG_SPREAD_FS:5;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union CKG_REG_1D {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union CKG_REG_1E {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union CKG_REG_1F {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union CKG_REG_20 {
uint8_t byte;    struct {
uint8_t CKG_PD_MEM1:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union CKG_REG_21 {
uint8_t byte;    struct {
uint8_t CKG_FOUTPOSTDIVPD_MEM1:1;
uint8_t CKG_FOUT4PHASEPD_MEM1:1;
uint8_t CKG_FOUTVCOPD_MEM1:1;
uint8_t CKG_DACPD_MEM1:1;
uint8_t CKG_DSMPD_MEM1:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union CKG_REG_22 {
uint8_t byte;    struct {
uint8_t CKG_REFDIV_MEM1:6;
uint8_t  :1;
uint8_t  :1;
};};
union CKG_REG_23 {
uint8_t byte;    struct {
uint8_t CKG_FBDIV_MEM1:8;
};};
union CKG_REG_24 {
uint8_t byte;    struct {
uint8_t CKG_FBDIV_MEM1:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union CKG_REG_25 {
uint8_t byte;    struct {
uint8_t CKG_FRAC_MEM1:8;
};};
union CKG_REG_26 {
uint8_t byte;    struct {
uint8_t CKG_FRAC_MEM1:8;
};};
union CKG_REG_27 {
uint8_t byte;    struct {
uint8_t CKG_FRAC_MEM1:8;
};};
union CKG_REG_28 {
uint8_t byte;    struct {
uint8_t CKG_POSTDIV1_MEM1:3;
uint8_t  :1;
uint8_t CKG_POSTDIV2_MEM1:3;
uint8_t  :1;
};};
union CKG_REG_29 {
uint8_t byte;    struct {
uint8_t CKG_BYPASS_MEM1:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union CKG_REG_2A {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union CKG_REG_2B {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union CKG_REG_2C {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union CKG_REG_2D {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union CKG_REG_2E {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union CKG_REG_2F {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union CKG_REG_30 {
uint8_t byte;    struct {
uint8_t CKG_PD_MEM2:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union CKG_REG_31 {
uint8_t byte;    struct {
uint8_t CKG_FOUTPOSTDIVPD_MEM2:1;
uint8_t CKG_FOUT4PHASEPD_MEM2:1;
uint8_t CKG_FOUTVCOPD_MEM2:1;
uint8_t CKG_DACPD_MEM2:1;
uint8_t CKG_DSMPD_MEM2:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union CKG_REG_32 {
uint8_t byte;    struct {
uint8_t CKG_REFDIV_MEM2:6;
uint8_t  :1;
uint8_t  :1;
};};
union CKG_REG_33 {
uint8_t byte;    struct {
uint8_t CKG_FBDIV_MEM2:8;
};};
union CKG_REG_34 {
uint8_t byte;    struct {
uint8_t CKG_FBDIV_MEM2:4;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union CKG_REG_35 {
uint8_t byte;    struct {
uint8_t CKG_FRAC_MEM2:8;
};};
union CKG_REG_36 {
uint8_t byte;    struct {
uint8_t CKG_FRAC_MEM2:8;
};};
union CKG_REG_37 {
uint8_t byte;    struct {
uint8_t CKG_FRAC_MEM2:8;
};};
union CKG_REG_38 {
uint8_t byte;    struct {
uint8_t CKG_POSTDIV1_MEM2:3;
uint8_t  :1;
uint8_t CKG_POSTDIV2_MEM2:3;
uint8_t  :1;
};};
union CKG_REG_39 {
uint8_t byte;    struct {
uint8_t CKG_BYPASS_MEM2:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union CKG_REG_3A {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union CKG_REG_3B {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union CKG_REG_3C {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union CKG_REG_3D {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union CKG_REG_3E {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union CKG_REG_3F {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union CKG_REG_40 {
uint8_t byte;    struct {
uint8_t CKG_DIV_SYS:8;
};};
union CKG_REG_41 {
uint8_t byte;    struct {
uint8_t CKG_CLKSEL_MEM1:1;
uint8_t CKG_CLKSEL_MEM2:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union CKG_REG_42 {
uint8_t byte;    struct {
uint8_t CKG_AUTO_SEQ_PIX:1;
uint8_t CKG_AUTO_SEQ_FS:1;
uint8_t CKG_AUTO_SEQ_MEM1:1;
uint8_t CKG_AUTO_SEQ_MEM2:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union CKG_REG_43 {
uint8_t byte;    struct {
uint8_t CKG_START_UP_PIX:1;
uint8_t CKG_START_UP_FS:1;
uint8_t CKG_START_UP_MEM1:1;
uint8_t CKG_START_UP_MEM2:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union CKG_REG_44 {
uint8_t byte;    struct {
uint8_t CKG_PLL_PDTIME:7;
uint8_t  :1;
};};
union CKG_REG_45 {
uint8_t byte;    struct {
uint8_t CKG_PLL_LOCKTIME:8;
};};
union CKG_REG_46 {
uint8_t byte;    struct {
uint8_t CKG_PLL_LOCKTIME:8;
};};
typedef struct CKG_T {
union CKG_REG_00 reg00;
union CKG_REG_01 reg01;
union CKG_REG_02 reg02;
union CKG_REG_03 reg03;
union CKG_REG_04 reg04;
union CKG_REG_05 reg05;
union CKG_REG_06 reg06;
union CKG_REG_07 reg07;
union CKG_REG_08 reg08;
union CKG_REG_09 reg09;
union CKG_REG_0A reg0A;
union CKG_REG_0B reg0B;
union CKG_REG_0C reg0C;
union CKG_REG_0D reg0D;
union CKG_REG_0E reg0E;
union CKG_REG_0F reg0F;
union CKG_REG_10 reg10;
union CKG_REG_11 reg11;
union CKG_REG_12 reg12;
union CKG_REG_13 reg13;
union CKG_REG_14 reg14;
union CKG_REG_15 reg15;
union CKG_REG_16 reg16;
union CKG_REG_17 reg17;
union CKG_REG_18 reg18;
union CKG_REG_19 reg19;
union CKG_REG_1A reg1A;
union CKG_REG_1B reg1B;
union CKG_REG_1C reg1C;
union CKG_REG_1D reg1D;
union CKG_REG_1E reg1E;
union CKG_REG_1F reg1F;
union CKG_REG_20 reg20;
union CKG_REG_21 reg21;
union CKG_REG_22 reg22;
union CKG_REG_23 reg23;
union CKG_REG_24 reg24;
union CKG_REG_25 reg25;
union CKG_REG_26 reg26;
union CKG_REG_27 reg27;
union CKG_REG_28 reg28;
union CKG_REG_29 reg29;
union CKG_REG_2A reg2A;
union CKG_REG_2B reg2B;
union CKG_REG_2C reg2C;
union CKG_REG_2D reg2D;
union CKG_REG_2E reg2E;
union CKG_REG_2F reg2F;
union CKG_REG_30 reg30;
union CKG_REG_31 reg31;
union CKG_REG_32 reg32;
union CKG_REG_33 reg33;
union CKG_REG_34 reg34;
union CKG_REG_35 reg35;
union CKG_REG_36 reg36;
union CKG_REG_37 reg37;
union CKG_REG_38 reg38;
union CKG_REG_39 reg39;
union CKG_REG_3A reg3A;
union CKG_REG_3B reg3B;
union CKG_REG_3C reg3C;
union CKG_REG_3D reg3D;
union CKG_REG_3E reg3E;
union CKG_REG_3F reg3F;
union CKG_REG_40 reg40;
union CKG_REG_41 reg41;
union CKG_REG_42 reg42;
union CKG_REG_43 reg43;
union CKG_REG_44 reg44;
union CKG_REG_45 reg45;
union CKG_REG_46 reg46;
} ckg_t;

extern ckg_t ckg;

#endif
