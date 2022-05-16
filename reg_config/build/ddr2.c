#include "ddr2.h"

ddr2_t ddr2 = {
    .reg00.byte = 0x01,
    .reg01.byte = 0x04,
    .reg02.byte = 0x41,
    .reg03.byte = 0x20,
    .reg04.byte = 0x10,
    .reg05.byte = 0x0B,
    .reg06.byte = 0x01,
    .reg07.byte = 0x00,
    .reg08.byte = 0x5A,
    .reg09.byte = 0xA0,
    .reg0A.byte = 0x01,
    .reg0B.byte = 0x02,
    .reg0C.byte = 0xD6,
    .reg0D.byte = 0x00,
    .reg0E.byte = 0xC8,
    .reg0F.byte = 0x00,
    .reg10.byte = 0x00,
    .reg11.byte = 0x0E,
    .reg12.byte = 0x06,
    .reg13.byte = 0x00,
    .reg14.byte = 0x02,
    .reg15.byte = 0x02,
    .reg16.byte = 0x04,
    .reg17.byte = 0x1F,
    .reg18.byte = 0x18,
    .reg19.byte = 0x04,
    .reg1A.byte = 0x07,
    .reg1B.byte = 0x00,
    .reg1C.byte = 0x04,
    .reg1D.byte = 0x02,
    .reg1E.byte = 0x07,
    .reg1F.byte = 0x00,
    .reg20.byte = 0xB8,
    .reg21.byte = 0x91,
    .reg22.byte = 0x03,
    .reg23.byte = 0x03,
    .reg24.byte = 0x00,
    .reg25.byte = 0x07,
    .reg26.byte = 0x08,
    .reg27.byte = 0x00,
    .reg28.byte = 0x01,
    .reg29.byte = 0x01,
    .reg2A.byte = 0x0F,
    .reg2B.byte = 0x03,
    .reg2C.byte = 0x07,
    .reg2D.byte = 0x00,
    .reg2E.byte = 0x00,
    .reg2F.byte = 0x00,
    .reg30.byte = 0x01,
    .reg31.byte = 0x38,
    .reg32.byte = 0x00,
    .reg33.byte = 0x00,
    .reg34.byte = 0x3C,
    .reg35.byte = 0x10,
    .reg36.byte = 0x00,
    .reg37.byte = 0x00,
    .reg38.byte = 0x02,
    .reg39.byte = 0x00,
    .reg3A.byte = 0x02,
    .reg3B.byte = 0x00,
    .reg3C.byte = 0x08,
    .reg3D.byte = 0x00,
    .reg3E.byte = 0xC8,
    .reg3F.byte = 0x00,
    .reg40.byte = 0x14,
    .reg41.byte = 0x00,
    .reg42.byte = 0x00,
    .reg43.byte = 0x00,
    .reg44.byte = 0x01,
    .reg45.byte = 0x00,
    .reg46.byte = 0x00,
    .reg47.byte = 0x03,
    .reg48.byte = 0x03,
    .reg49.byte = 0x00,
    .reg4A.byte = 0x00,
    .reg4B.byte = 0x00,
    .reg4C.byte = 0x00,
    .reg4D.byte = 0x00,
    .reg4E.byte = 0x00,
    .reg4F.byte = 0x00,
    .reg50.byte = 0x00,
    .reg51.byte = 0x00,
    .reg52.byte = 0x00,
    .reg53.byte = 0x00,
    .reg54.byte = 0x00,
    .reg55.byte = 0x00,
    .reg56.byte = 0x00,
    .reg57.byte = 0x00,
    .reg58.byte = 0x00,
    .reg59.byte = 0x00,
    .reg5A.byte = 0x02,
    .reg5B.byte = 0x03,
    .reg5C.byte = 0x00,
    .reg5D.byte = 0x73,
    .reg5E.byte = 0x0E,
    .reg5F.byte = 0x00,
    .reg60.byte = 0x46,
    .reg61.byte = 0x00,
    .reg62.byte = 0x00,
    .reg63.byte = 0x00,
    .reg64.byte = 0x00,
    .reg65.byte = 0x00,
    .reg66.byte = 0x00,
    .reg67.byte = 0x00,
    .reg68.byte = 0x00,
    .reg69.byte = 0x00,
    .reg6A.byte = 0x00,
    .reg6B.byte = 0x01,
    .reg6C.byte = 0x01,
    .reg6D.byte = 0x00,
    .reg6E.byte = 0x00,
    .reg6F.byte = 0x00,
    .reg70.byte = 0x00,
    .reg71.byte = 0x00,
    .reg72.byte = 0x00,
    .reg73.byte = 0x00,
    .reg74.byte = 0x00,
    .reg75.byte = 0x00,
    .reg76.byte = 0x00,
    .reg77.byte = 0x00,
    .reg78.byte = 0x00,
    .reg79.byte = 0x00,
    .reg7A.byte = 0x00,
    .reg7B.byte = 0x00,
    .reg7C.byte = 0x01,
    .reg7D.byte = 0x04,
    .reg7E.byte = 0x02,
    .reg7F.byte = 0x0A,
    .reg80.byte = 0x07,
    .reg81.byte = 0x07,
    .reg82.byte = 0x01,
    .reg83.byte = 0x01,
    .reg84.byte = 0x01,
    .reg85.byte = 0x01,
    .reg86.byte = 0x01,
    .reg87.byte = 0x01,
    .reg88.byte = 0x01,
    .reg89.byte = 0x0B,
    .reg8A.byte = 0x01,
    .reg8B.byte = 0x00,
    .reg8C.byte = 0x00,
    .reg8D.byte = 0x01,
    .reg8E.byte = 0x00,
    .reg8F.byte = 0x01,
    .reg90.byte = 0x00,
    .reg91.byte = 0x00,
    .reg92.byte = 0x01,
    .reg93.byte = 0x00,
    .reg94.byte = 0x00,
    .reg95.byte = 0x00,
    .reg96.byte = 0x00,
    .reg97.byte = 0x00,
    .reg98.byte = 0x00,
    .reg99.byte = 0x00,
    .reg9A.byte = 0x00,
    .reg9B.byte = 0x00,
    .reg9C.byte = 0x00,
    .reg9D.byte = 0x00,
    .reg9E.byte = 0x00,
    .reg9F.byte = 0x00,
    .regA0.byte = 0x00,
    .regA1.byte = 0x00,
    .regA2.byte = 0x00,
    .regA3.byte = 0x00,
    .regA4.byte = 0x00,
    .regA5.byte = 0x00,
    .regA6.byte = 0x00,
    .regA7.byte = 0x00,
    .regA8.byte = 0x00,
    .regA9.byte = 0x00,
    .regAA.byte = 0x00,
    .regAB.byte = 0x00,
    .regAC.byte = 0x00,
    .regAD.byte = 0x00,
    .regAE.byte = 0x00,
    .regAF.byte = 0x00,
    .regB0.byte = 0x00,
    .regB1.byte = 0x00,
    .regB2.byte = 0x00,
    .regB3.byte = 0x00,
    .regB4.byte = 0x00,
    .regB5.byte = 0x00,
    .regB6.byte = 0x00,
    .regB7.byte = 0x00,
    .regB8.byte = 0x00,
    .regB9.byte = 0x00,
    .regBA.byte = 0x00,
    .regBB.byte = 0x00,
    .regBC.byte = 0x00,
    .regBD.byte = 0x00,
    .regBE.byte = 0x00,
    .regBF.byte = 0x00,
    .regC0.byte = 0x00,
    .regC1.byte = 0x00,
    .regC2.byte = 0x00,
    .regC3.byte = 0x00,
    .regC4.byte = 0x00,
    .regC5.byte = 0x00,
    .regC6.byte = 0x00,
    .regC7.byte = 0x00,
    .regC8.byte = 0x00,
    .regC9.byte = 0x00,
    .regCA.byte = 0x00,
    .regCB.byte = 0x00,
    .regCC.byte = 0x00,
    .regCD.byte = 0x00,
    .regCE.byte = 0x00,
    .regCF.byte = 0x05,
    .regD0.byte = 0x01,
    .regD1.byte = 0x00,
    .regD2.byte = 0x00,
    .regD3.byte = 0x00,
    .regD4.byte = 0x02,
    .regD5.byte = 0x00,
    .regD6.byte = 0x00,
    .regD7.byte = 0x00,
    .regD8.byte = 0x00,
    .regD9.byte = 0x04,
    .regDA.byte = 0x04,
    .regDB.byte = 0x00,
    .regDC.byte = 0x00,
    .regDD.byte = 0x00,
    .regDE.byte = 0x00,
    .regDF.byte = 0x00,
    .regE0.byte = 0x00,
    .regE1.byte = 0x00,
    .regE2.byte = 0x0A,
    .regE3.byte = 0x00,
    .regE4.byte = 0x00,
    .regE5.byte = 0x00,
    .regE6.byte = 0x00,
    .regE7.byte = 0x05,
    .regE8.byte = 0x00,
    .regE9.byte = 0x02,
    .regEA.byte = 0x00,
    .regEB.byte = 0x02,
    .regEC.byte = 0x00,
    .regED.byte = 0x02,
    .regEE.byte = 0x00,
    .regEF.byte = 0x02,
    .regF0.byte = 0x0E,
    .regF1.byte = 0x05,
    .regF2.byte = 0x00,
    .regF3.byte = 0x00,
    .regF4.byte = 0x46,
    .regF5.byte = 0x19,
    .regF6.byte = 0x00,
    .regF7.byte = 0x00,
    .regF8.byte = 0x06,
    .regF9.byte = 0x06,
    .regFA.byte = 0x02,
    .regFB.byte = 0x01,
    .regFC.byte = 0x03,
    .regFD.byte = 0x01,
    .regFE.byte = 0x00,
    .regFF.byte = 0x00,
    .reg100.byte = 0x02,
    .reg101.byte = 0x04,
    .reg102.byte = 0x02,
    .reg103.byte = 0x04,
    .reg104.byte = 0x04,
    .reg105.byte = 0x04,
    .reg106.byte = 0x04,
    .reg107.byte = 0x04,
    .reg108.byte = 0x61,
    .reg109.byte = 0x00,
    .reg10A.byte = 0xE9,
    .reg10B.byte = 0x60,
    .reg10C.byte = 0x1B,
    .reg10D.byte = 0x00,
    .reg10E.byte = 0x12,
    .reg10F.byte = 0x00,
    .reg110.byte = 0x09,
    .reg111.byte = 0x3A,
    .reg112.byte = 0x60,
    .reg113.byte = 0x60,
    .reg114.byte = 0x00,
    .reg115.byte = 0x00,
    .reg116.byte = 0x00,
    .reg117.byte = 0x00,
    .reg118.byte = 0x00,
    .reg119.byte = 0x00,
    .reg11A.byte = 0x00,
    .reg11B.byte = 0x00,
    .reg11C.byte = 0x00,
    .reg11D.byte = 0x00,
    .reg11E.byte = 0x00,
    .reg11F.byte = 0x00,
    .reg120.byte = 0x02,
    .reg121.byte = 0x04,
    .reg122.byte = 0x02,
    .reg123.byte = 0x04,
    .reg124.byte = 0x04,
    .reg125.byte = 0x04,
    .reg126.byte = 0x04,
    .reg127.byte = 0x04,
    .reg128.byte = 0x61,
    .reg129.byte = 0x00,
    .reg12A.byte = 0xE9,
    .reg12B.byte = 0x60,
    .reg12C.byte = 0x1B,
    .reg12D.byte = 0x00,
    .reg12E.byte = 0x12,
    .reg12F.byte = 0x00,
    .reg130.byte = 0x09,
    .reg131.byte = 0x35,
    .reg132.byte = 0x60,
    .reg133.byte = 0x60,
    .reg134.byte = 0x00,
    .reg135.byte = 0x00,
    .reg136.byte = 0x00,
    .reg137.byte = 0x00,
    .reg138.byte = 0x00,
    .reg139.byte = 0x00,
    .reg13A.byte = 0x00,
    .reg13B.byte = 0x00,
    .reg13C.byte = 0x00,
    .reg13D.byte = 0x00,
    .reg13E.byte = 0x00,
    .reg13F.byte = 0x00,
    .reg140.byte = 0x00,
    .reg141.byte = 0x00,
    .reg142.byte = 0x00,
    .reg143.byte = 0x00,
    .reg144.byte = 0x00,
    .reg145.byte = 0x00,
    .reg146.byte = 0x00,
    .reg147.byte = 0x00,
    .reg148.byte = 0x00,
    .reg149.byte = 0x00,
    .reg14A.byte = 0x00,
    .reg14B.byte = 0x00,
    .reg14C.byte = 0x00,
    .reg14D.byte = 0x00,
    .reg14E.byte = 0x00,
    .reg14F.byte = 0x00,
    .reg150.byte = 0x00,
    .reg151.byte = 0x00,
    .reg152.byte = 0x00,
    .reg153.byte = 0x00,
    .reg154.byte = 0x00,
    .reg155.byte = 0x00,
    .reg156.byte = 0x00,
    .reg157.byte = 0x00,
    .reg158.byte = 0x00,
    .reg159.byte = 0x00,
    .reg15A.byte = 0x00,
    .reg15B.byte = 0x00,
    .reg15C.byte = 0x00,
    .reg15D.byte = 0x00,
    .reg15E.byte = 0x00,
    .reg15F.byte = 0x00,
    .reg160.byte = 0x00,
    .reg161.byte = 0x00,
    .reg162.byte = 0x00,
    .reg163.byte = 0x00,
    .reg164.byte = 0x00,
    .reg165.byte = 0x00,
    .reg166.byte = 0x00,
    .reg167.byte = 0x00,
    .reg168.byte = 0x00,
    .reg169.byte = 0x00,
    .reg16A.byte = 0x00,
    .reg16B.byte = 0x00,
    .reg16C.byte = 0x00,
    .reg16D.byte = 0x00,
    .reg16E.byte = 0x00,
    .reg16F.byte = 0x00,
    .reg170.byte = 0x00,
    .reg171.byte = 0x00,
    .reg172.byte = 0x00,
    .reg173.byte = 0x00,
    .reg174.byte = 0x00,
    .reg175.byte = 0x00,
    .reg176.byte = 0x00,
    .reg177.byte = 0x00,
    .reg178.byte = 0x00,
    .reg179.byte = 0x00,
    .reg17A.byte = 0x00,
    .reg17B.byte = 0x00,
    .reg17C.byte = 0x00,
    .reg17D.byte = 0x00,
    .reg17E.byte = 0x00,
    .reg17F.byte = 0x00,
    .reg180.byte = 0x06,
    .reg181.byte = 0x40,
    .reg182.byte = 0x00,
    .reg183.byte = 0x00,
    .reg184.byte = 0x00,
    .reg185.byte = 0x07,
    .reg186.byte = 0x07,
    .reg187.byte = 0x00,
    .reg188.byte = 0x04,
    .reg189.byte = 0x00,
    .reg18A.byte = 0x06,
    .reg18B.byte = 0x00,
    .reg18C.byte = 0x04,
    .reg18D.byte = 0x00,
    .reg18E.byte = 0x04,
    .reg18F.byte = 0x00,
    .reg190.byte = 0x04,
    .reg191.byte = 0x00,
    .reg192.byte = 0x04,
};
