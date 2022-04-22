#ifndef __I2CM_H__
#define __I2CM_H__

#include <stdint.h>

#define I2CM_BASE_ADDRESS 0x0700
#define I2CM_REG_NUM 80
#define I2CM_REG_ADDR(reg) REG_ADDR(I2CM_BASE_ADDRESS,i2cm_t,reg)

union I2CM_REG_00 {
uint8_t byte;    struct {
uint8_t I2CM_INT_SOURCE:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union I2CM_REG_01 {
uint8_t byte;    struct {
uint8_t I2CM_INT_MASK:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union I2CM_REG_02 {
uint8_t byte;    struct {
uint8_t I2CM_INT_CLR:2;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union I2CM_REG_03 {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union I2CM_REG_04 {
uint8_t byte;    struct {
uint8_t I2CM_SLAVE:8;
};};
union I2CM_REG_05 {
uint8_t byte;    struct {
uint8_t I2CM_ADR_LEN_SEL:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union I2CM_REG_06 {
uint8_t byte;    struct {
uint8_t I2CM_CLK_SEL:3;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union I2CM_REG_07 {
uint8_t byte;    struct {
uint8_t I2CM_CLK_SEL:8;
};};
union I2CM_REG_08 {
uint8_t byte;    struct {
uint8_t I2CM_START_ADDR:8;
};};
union I2CM_REG_09 {
uint8_t byte;    struct {
uint8_t I2CM_START_ADDR:8;
};};
union I2CM_REG_0A {
uint8_t byte;    struct {
uint8_t I2CM_TRSIZE:6;
uint8_t  :1;
uint8_t  :1;
};};
union I2CM_REG_0B {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union I2CM_REG_0C {
uint8_t byte;    struct {
uint8_t I2CM_RD_START:1;
uint8_t I2CM_WR_START:1;
uint8_t I2CM_BWR:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union I2CM_REG_0D {
uint8_t byte;    struct {
uint8_t I2CM_RD_BUSY:1;
uint8_t I2CM_WR_BUSY:1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union I2CM_REG_0E {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union I2CM_REG_0F {
uint8_t byte;    struct {
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
uint8_t  :1;
};};
union I2CM_REG_10 {
uint8_t byte;    struct {
uint8_t I2CM_WDATA0:8;
};};
union I2CM_REG_11 {
uint8_t byte;    struct {
uint8_t I2CM_WDATA1:8;
};};
union I2CM_REG_12 {
uint8_t byte;    struct {
uint8_t I2CM_WDATA2:8;
};};
union I2CM_REG_13 {
uint8_t byte;    struct {
uint8_t I2CM_WDATA3:8;
};};
union I2CM_REG_14 {
uint8_t byte;    struct {
uint8_t I2CM_WDATA4:8;
};};
union I2CM_REG_15 {
uint8_t byte;    struct {
uint8_t I2CM_WDATA5:8;
};};
union I2CM_REG_16 {
uint8_t byte;    struct {
uint8_t I2CM_WDATA6:8;
};};
union I2CM_REG_17 {
uint8_t byte;    struct {
uint8_t I2CM_WDATA7:8;
};};
union I2CM_REG_18 {
uint8_t byte;    struct {
uint8_t I2CM_WDATA8:8;
};};
union I2CM_REG_19 {
uint8_t byte;    struct {
uint8_t I2CM_WDATA9:8;
};};
union I2CM_REG_1A {
uint8_t byte;    struct {
uint8_t I2CM_WDATA10:8;
};};
union I2CM_REG_1B {
uint8_t byte;    struct {
uint8_t I2CM_WDATA11:8;
};};
union I2CM_REG_1C {
uint8_t byte;    struct {
uint8_t I2CM_WDATA12:8;
};};
union I2CM_REG_1D {
uint8_t byte;    struct {
uint8_t I2CM_WDATA13:8;
};};
union I2CM_REG_1E {
uint8_t byte;    struct {
uint8_t I2CM_WDATA14:8;
};};
union I2CM_REG_1F {
uint8_t byte;    struct {
uint8_t I2CM_WDATA15:8;
};};
union I2CM_REG_20 {
uint8_t byte;    struct {
uint8_t I2CM_WDATA16:8;
};};
union I2CM_REG_21 {
uint8_t byte;    struct {
uint8_t I2CM_WDATA17:8;
};};
union I2CM_REG_22 {
uint8_t byte;    struct {
uint8_t I2CM_WDATA18:8;
};};
union I2CM_REG_23 {
uint8_t byte;    struct {
uint8_t I2CM_WDATA19:8;
};};
union I2CM_REG_24 {
uint8_t byte;    struct {
uint8_t I2CM_WDATA20:8;
};};
union I2CM_REG_25 {
uint8_t byte;    struct {
uint8_t I2CM_WDATA21:8;
};};
union I2CM_REG_26 {
uint8_t byte;    struct {
uint8_t I2CM_WDATA22:8;
};};
union I2CM_REG_27 {
uint8_t byte;    struct {
uint8_t I2CM_WDATA23:8;
};};
union I2CM_REG_28 {
uint8_t byte;    struct {
uint8_t I2CM_WDATA24:8;
};};
union I2CM_REG_29 {
uint8_t byte;    struct {
uint8_t I2CM_WDATA25:8;
};};
union I2CM_REG_2A {
uint8_t byte;    struct {
uint8_t I2CM_WDATA26:8;
};};
union I2CM_REG_2B {
uint8_t byte;    struct {
uint8_t I2CM_WDATA27:8;
};};
union I2CM_REG_2C {
uint8_t byte;    struct {
uint8_t I2CM_WDATA28:8;
};};
union I2CM_REG_2D {
uint8_t byte;    struct {
uint8_t I2CM_WDATA29:8;
};};
union I2CM_REG_2E {
uint8_t byte;    struct {
uint8_t I2CM_WDATA30:8;
};};
union I2CM_REG_2F {
uint8_t byte;    struct {
uint8_t I2CM_WDATA31:8;
};};
union I2CM_REG_30 {
uint8_t byte;    struct {
uint8_t I2CM_RDATA0:8;
};};
union I2CM_REG_31 {
uint8_t byte;    struct {
uint8_t I2CM_RDATA1:8;
};};
union I2CM_REG_32 {
uint8_t byte;    struct {
uint8_t I2CM_RDATA2:8;
};};
union I2CM_REG_33 {
uint8_t byte;    struct {
uint8_t I2CM_RDATA3:8;
};};
union I2CM_REG_34 {
uint8_t byte;    struct {
uint8_t I2CM_RDATA4:8;
};};
union I2CM_REG_35 {
uint8_t byte;    struct {
uint8_t I2CM_RDATA5:8;
};};
union I2CM_REG_36 {
uint8_t byte;    struct {
uint8_t I2CM_RDATA6:8;
};};
union I2CM_REG_37 {
uint8_t byte;    struct {
uint8_t I2CM_RDATA7:8;
};};
union I2CM_REG_38 {
uint8_t byte;    struct {
uint8_t I2CM_RDATA8:8;
};};
union I2CM_REG_39 {
uint8_t byte;    struct {
uint8_t I2CM_RDATA9:8;
};};
union I2CM_REG_3A {
uint8_t byte;    struct {
uint8_t I2CM_RDATA10:8;
};};
union I2CM_REG_3B {
uint8_t byte;    struct {
uint8_t I2CM_RDATA11:8;
};};
union I2CM_REG_3C {
uint8_t byte;    struct {
uint8_t I2CM_RDATA12:8;
};};
union I2CM_REG_3D {
uint8_t byte;    struct {
uint8_t I2CM_RDATA13:8;
};};
union I2CM_REG_3E {
uint8_t byte;    struct {
uint8_t I2CM_RDATA14:8;
};};
union I2CM_REG_3F {
uint8_t byte;    struct {
uint8_t I2CM_RDATA15:8;
};};
union I2CM_REG_40 {
uint8_t byte;    struct {
uint8_t I2CM_RDATA16:8;
};};
union I2CM_REG_41 {
uint8_t byte;    struct {
uint8_t I2CM_RDATA17:8;
};};
union I2CM_REG_42 {
uint8_t byte;    struct {
uint8_t I2CM_RDATA18:8;
};};
union I2CM_REG_43 {
uint8_t byte;    struct {
uint8_t I2CM_RDATA19:8;
};};
union I2CM_REG_44 {
uint8_t byte;    struct {
uint8_t I2CM_RDATA20:8;
};};
union I2CM_REG_45 {
uint8_t byte;    struct {
uint8_t I2CM_RDATA21:8;
};};
union I2CM_REG_46 {
uint8_t byte;    struct {
uint8_t I2CM_RDATA22:8;
};};
union I2CM_REG_47 {
uint8_t byte;    struct {
uint8_t I2CM_RDATA23:8;
};};
union I2CM_REG_48 {
uint8_t byte;    struct {
uint8_t I2CM_RDATA24:8;
};};
union I2CM_REG_49 {
uint8_t byte;    struct {
uint8_t I2CM_RDATA25:8;
};};
union I2CM_REG_4A {
uint8_t byte;    struct {
uint8_t I2CM_RDATA26:8;
};};
union I2CM_REG_4B {
uint8_t byte;    struct {
uint8_t I2CM_RDATA27:8;
};};
union I2CM_REG_4C {
uint8_t byte;    struct {
uint8_t I2CM_RDATA28:8;
};};
union I2CM_REG_4D {
uint8_t byte;    struct {
uint8_t I2CM_RDATA29:8;
};};
union I2CM_REG_4E {
uint8_t byte;    struct {
uint8_t I2CM_RDATA30:8;
};};
union I2CM_REG_4F {
uint8_t byte;    struct {
uint8_t I2CM_RDATA31:8;
};};
typedef struct I2CM_T {
union I2CM_REG_00 reg00;
union I2CM_REG_01 reg01;
union I2CM_REG_02 reg02;
union I2CM_REG_03 reg03;
union I2CM_REG_04 reg04;
union I2CM_REG_05 reg05;
union I2CM_REG_06 reg06;
union I2CM_REG_07 reg07;
union I2CM_REG_08 reg08;
union I2CM_REG_09 reg09;
union I2CM_REG_0A reg0A;
union I2CM_REG_0B reg0B;
union I2CM_REG_0C reg0C;
union I2CM_REG_0D reg0D;
union I2CM_REG_0E reg0E;
union I2CM_REG_0F reg0F;
union I2CM_REG_10 reg10;
union I2CM_REG_11 reg11;
union I2CM_REG_12 reg12;
union I2CM_REG_13 reg13;
union I2CM_REG_14 reg14;
union I2CM_REG_15 reg15;
union I2CM_REG_16 reg16;
union I2CM_REG_17 reg17;
union I2CM_REG_18 reg18;
union I2CM_REG_19 reg19;
union I2CM_REG_1A reg1A;
union I2CM_REG_1B reg1B;
union I2CM_REG_1C reg1C;
union I2CM_REG_1D reg1D;
union I2CM_REG_1E reg1E;
union I2CM_REG_1F reg1F;
union I2CM_REG_20 reg20;
union I2CM_REG_21 reg21;
union I2CM_REG_22 reg22;
union I2CM_REG_23 reg23;
union I2CM_REG_24 reg24;
union I2CM_REG_25 reg25;
union I2CM_REG_26 reg26;
union I2CM_REG_27 reg27;
union I2CM_REG_28 reg28;
union I2CM_REG_29 reg29;
union I2CM_REG_2A reg2A;
union I2CM_REG_2B reg2B;
union I2CM_REG_2C reg2C;
union I2CM_REG_2D reg2D;
union I2CM_REG_2E reg2E;
union I2CM_REG_2F reg2F;
union I2CM_REG_30 reg30;
union I2CM_REG_31 reg31;
union I2CM_REG_32 reg32;
union I2CM_REG_33 reg33;
union I2CM_REG_34 reg34;
union I2CM_REG_35 reg35;
union I2CM_REG_36 reg36;
union I2CM_REG_37 reg37;
union I2CM_REG_38 reg38;
union I2CM_REG_39 reg39;
union I2CM_REG_3A reg3A;
union I2CM_REG_3B reg3B;
union I2CM_REG_3C reg3C;
union I2CM_REG_3D reg3D;
union I2CM_REG_3E reg3E;
union I2CM_REG_3F reg3F;
union I2CM_REG_40 reg40;
union I2CM_REG_41 reg41;
union I2CM_REG_42 reg42;
union I2CM_REG_43 reg43;
union I2CM_REG_44 reg44;
union I2CM_REG_45 reg45;
union I2CM_REG_46 reg46;
union I2CM_REG_47 reg47;
union I2CM_REG_48 reg48;
union I2CM_REG_49 reg49;
union I2CM_REG_4A reg4A;
union I2CM_REG_4B reg4B;
union I2CM_REG_4C reg4C;
union I2CM_REG_4D reg4D;
union I2CM_REG_4E reg4E;
union I2CM_REG_4F reg4F;
} i2cm_t;

extern i2cm_t i2cm;

#endif
