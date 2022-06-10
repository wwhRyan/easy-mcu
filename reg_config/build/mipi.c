#include "mipi.h"

mipi_t mipi = {
    .reg00.byte = 0x23,
    .reg01.byte = 0x83,
    .reg02.byte = 0xC1,
    .reg03.byte = 0x60,
    .reg04.byte = 0xFF,
    .reg05.byte = 0x1F,
    .reg06.byte = 0x28,
    .reg07.byte = 0xB9,
    .reg08.byte = 0xF7,
    .reg09.byte = 0x00,
    .reg0A.byte = 0x00,
    .reg0B.byte = 0x03,
    .reg0C.byte = 0x01,
    .reg0D.byte = 0x00,
    .reg0E.byte = 0x00,
    .reg0F.byte = 0x00,
    .reg10.byte = 0x00,
    .reg11.byte = 0x00,
    .reg12.byte = 0x00,
    .reg13.byte = 0x00,
    .reg14.byte = 0x00,
    .reg15.byte = 0x00,
    .reg16.byte = 0x00,
    .reg17.byte = 0x00,
    .reg18.byte = 0x00,
    .reg19.byte = 0x00,
    .reg1A.byte = 0x00,
    .reg1B.byte = 0x00,
    .reg1C.byte = 0x00,
    .reg1D.byte = 0x00,
    .reg1E.byte = 0x00,
    .reg1F.byte = 0x00,
    .reg20.byte = 0x00,
    .reg21.byte = 0x00,
    .reg22.byte = 0x00,
    .reg23.byte = 0x00,
    .reg24.byte = 0x00,
    .reg25.byte = 0x00,
    .reg26.byte = 0x00,
    .reg27.byte = 0x00,
    .reg28.byte = 0x00,
    .reg29.byte = 0x00,
    .reg2A.byte = 0x00,
    .reg2B.byte = 0x00,
    .reg2C.byte = 0x00,
    .reg2D.byte = 0x00,
    .reg2E.byte = 0x00,
    .reg2F.byte = 0x00,
    .reg30.byte = 0x00,
    .reg31.byte = 0x00,
    .reg32.byte = 0x00,
    .reg33.byte = 0x00,
    .reg34.byte = 0x00,
    .reg35.byte = 0x00,
    .reg36.byte = 0x00,
    .reg37.byte = 0x00,
    .reg38.byte = 0x00,
    .reg39.byte = 0x00,
    .reg3A.byte = 0x00,
    .reg3B.byte = 0x00,
    .reg3C.byte = 0x00,
    .reg3D.byte = 0x00,
    .reg3E.byte = 0x00,
    .reg3F.byte = 0x00,
    .reg40.byte = 0x00,
    .reg41.byte = 0x00,
    .reg42.byte = 0x00,
    .reg43.byte = 0x00,
    .reg44.byte = 0x00,
    .reg45.byte = 0x00,
    .reg46.byte = 0x00,
    .reg47.byte = 0x00,
    .reg48.byte = 0x00,
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
    .reg5A.byte = 0x00,
    .reg5B.byte = 0x00,
    .reg5C.byte = 0x00,
    .reg5D.byte = 0x00,
    .reg5E.byte = 0x00,
    .reg5F.byte = 0x00,
    .reg60.byte = 0x00,
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
    .reg6B.byte = 0x00,
    .reg6C.byte = 0x00,
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
    .reg7C.byte = 0x00,
    .reg7D.byte = 0x00,
    .reg7E.byte = 0x00,
    .reg7F.byte = 0x00,
    .reg80.byte = 0x00,
    .reg81.byte = 0x00,
    .reg82.byte = 0x00,
    .reg83.byte = 0x00,
    .reg84.byte = 0x03,
    .reg85.byte = 0x03,
    .reg86.byte = 0x03,
    .reg87.byte = 0x03,
    .reg88.byte = 0x03,
    .reg89.byte = 0x00,
    .reg8A.byte = 0x03,
    .reg8B.byte = 0x03,
    .reg8C.byte = 0x03,
    .reg8D.byte = 0x03,
    .reg8E.byte = 0x00,
    .reg8F.byte = 0x00,
    .reg90.byte = 0x00,
    .reg91.byte = 0x00,
    .reg92.byte = 0x00,
    .reg93.byte = 0x00,
    .reg94.byte = 0x01,
    .reg95.byte = 0x00,
    .reg96.byte = 0x03,
    .reg97.byte = 0x01,
    .reg98.byte = 0x02,
    .reg99.byte = 0x01,
    .reg9A.byte = 0x00,
    .reg9B.byte = 0x00,
    .reg9C.byte = 0x01,
    .reg9D.byte = 0x01,
    .reg9E.byte = 0x00,
    .reg9F.byte = 0x01,
    .regA0.byte = 0x0F,
    .regA1.byte = 0x03,
    .regA2.byte = 0x03,
    .regA3.byte = 0x00,
    .regA4.byte = 0x00,
    .regA5.byte = 0x03,
    .regA6.byte = 0x00,
    .regA7.byte = 0x00,
    .regA8.byte = 0x01,
    .regA9.byte = 0x03,
    .regAA.byte = 0x03,
    .regAB.byte = 0x02,
    .regAC.byte = 0x00,
    .regAD.byte = 0x03,
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
    .regCF.byte = 0x00,
    .regD0.byte = 0x00,
    .regD1.byte = 0x00,
    .regD2.byte = 0x00,
    .regD3.byte = 0x00,
    .regD4.byte = 0x00,
    .regD5.byte = 0x00,
    .regD6.byte = 0x00,
    .regD7.byte = 0x00,
    .regD8.byte = 0x00,
    .regD9.byte = 0x00,
    .regDA.byte = 0x00,
    .regDB.byte = 0x00,
    .regDC.byte = 0x00,
    .regDD.byte = 0x00,
    .regDE.byte = 0x00,
    .regDF.byte = 0x00,
    .regE0.byte = 0x00,
    .regE1.byte = 0x00,
    .regE2.byte = 0x00,
    .regE3.byte = 0x00,
    .regE4.byte = 0x00,
    .regE5.byte = 0x00,
    .regE6.byte = 0x00,
    .regE7.byte = 0x00,
    .regE8.byte = 0x00,
    .regE9.byte = 0x00,
    .regEA.byte = 0x00,
    .regEB.byte = 0x00,
    .regEC.byte = 0x00,
    .regED.byte = 0x00,
    .regEE.byte = 0x00,
    .regEF.byte = 0x00,
    .regF0.byte = 0x00,
    .regF1.byte = 0x00,
    .regF2.byte = 0x00,
    .regF3.byte = 0x00,
    .regF4.byte = 0x00,
    .regF5.byte = 0x00,
    .regF6.byte = 0x00,
    .regF7.byte = 0x00,
    .regF8.byte = 0x00,
    .regF9.byte = 0x00,
    .regFA.byte = 0x00,
    .regFB.byte = 0x00,
    .regFC.byte = 0x00,
    .regFD.byte = 0x00,
    .regFE.byte = 0x00,
    .regFF.byte = 0x00,
    .reg100.byte = 0x23,
    .reg101.byte = 0x83,
    .reg102.byte = 0xC1,
    .reg103.byte = 0x60,
    .reg104.byte = 0xFF,
    .reg105.byte = 0x1F,
    .reg106.byte = 0x28,
    .reg107.byte = 0xB9,
    .reg108.byte = 0xF7,
    .reg109.byte = 0x00,
    .reg10A.byte = 0x00,
    .reg10B.byte = 0x03,
    .reg10C.byte = 0x00,
    .reg10D.byte = 0x00,
    .reg10E.byte = 0x00,
    .reg10F.byte = 0x00,
    .reg110.byte = 0x00,
    .reg111.byte = 0x00,
    .reg112.byte = 0x00,
    .reg113.byte = 0x00,
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
    .reg120.byte = 0x00,
    .reg121.byte = 0x00,
    .reg122.byte = 0x00,
    .reg123.byte = 0x00,
    .reg124.byte = 0x00,
    .reg125.byte = 0x00,
    .reg126.byte = 0x00,
    .reg127.byte = 0x00,
    .reg128.byte = 0x00,
    .reg129.byte = 0x00,
    .reg12A.byte = 0x00,
    .reg12B.byte = 0x00,
    .reg12C.byte = 0x00,
    .reg12D.byte = 0x00,
    .reg12E.byte = 0x00,
    .reg12F.byte = 0x00,
    .reg130.byte = 0x00,
    .reg131.byte = 0x00,
    .reg132.byte = 0x00,
    .reg133.byte = 0x00,
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
    .reg180.byte = 0x00,
    .reg181.byte = 0x00,
    .reg182.byte = 0x00,
    .reg183.byte = 0x00,
    .reg184.byte = 0x03,
    .reg185.byte = 0x03,
    .reg186.byte = 0x03,
    .reg187.byte = 0x03,
    .reg188.byte = 0x03,
    .reg189.byte = 0x00,
    .reg18A.byte = 0x03,
    .reg18B.byte = 0x03,
    .reg18C.byte = 0x03,
    .reg18D.byte = 0x03,
    .reg18E.byte = 0x00,
    .reg18F.byte = 0x00,
    .reg190.byte = 0x00,
    .reg191.byte = 0x00,
    .reg192.byte = 0x00,
    .reg193.byte = 0x00,
    .reg194.byte = 0x01,
    .reg195.byte = 0x00,
    .reg196.byte = 0x03,
    .reg197.byte = 0x01,
    .reg198.byte = 0x02,
    .reg199.byte = 0x01,
    .reg19A.byte = 0x00,
    .reg19B.byte = 0x00,
    .reg19C.byte = 0x01,
    .reg19D.byte = 0x01,
    .reg19E.byte = 0x00,
    .reg19F.byte = 0x01,
    .reg1A0.byte = 0x0F,
    .reg1A1.byte = 0x03,
    .reg1A2.byte = 0x03,
    .reg1A3.byte = 0x00,
    .reg1A4.byte = 0x00,
    .reg1A5.byte = 0x03,
    .reg1A6.byte = 0x00,
    .reg1A7.byte = 0x00,
    .reg1A8.byte = 0x01,
    .reg1A9.byte = 0x03,
    .reg1AA.byte = 0x03,
    .reg1AB.byte = 0x02,
    .reg1AC.byte = 0x00,
    .reg1AD.byte = 0x03,
    .reg1AE.byte = 0x00,
    .reg1AF.byte = 0x00,
    .reg1B0.byte = 0x00,
    .reg1B1.byte = 0x00,
    .reg1B2.byte = 0x00,
    .reg1B3.byte = 0x00,
    .reg1B4.byte = 0x00,
    .reg1B5.byte = 0x00,
    .reg1B6.byte = 0x00,
    .reg1B7.byte = 0x00,
    .reg1B8.byte = 0x00,
    .reg1B9.byte = 0x00,
    .reg1BA.byte = 0x00,
    .reg1BB.byte = 0x00,
    .reg1BC.byte = 0x00,
    .reg1BD.byte = 0x00,
    .reg1BE.byte = 0x00,
    .reg1BF.byte = 0x00,
    .reg1C0.byte = 0x00,
    .reg1C1.byte = 0x00,
    .reg1C2.byte = 0x00,
    .reg1C3.byte = 0x00,
    .reg1C4.byte = 0x00,
    .reg1C5.byte = 0x00,
    .reg1C6.byte = 0x00,
    .reg1C7.byte = 0x00,
    .reg1C8.byte = 0x00,
    .reg1C9.byte = 0x00,
    .reg1CA.byte = 0x00,
    .reg1CB.byte = 0x00,
    .reg1CC.byte = 0x00,
    .reg1CD.byte = 0x00,
    .reg1CE.byte = 0x00,
    .reg1CF.byte = 0x00,
    .reg1D0.byte = 0x00,
    .reg1D1.byte = 0x00,
    .reg1D2.byte = 0x00,
    .reg1D3.byte = 0x00,
    .reg1D4.byte = 0x00,
    .reg1D5.byte = 0x00,
    .reg1D6.byte = 0x00,
    .reg1D7.byte = 0x00,
    .reg1D8.byte = 0x00,
    .reg1D9.byte = 0x00,
    .reg1DA.byte = 0x00,
    .reg1DB.byte = 0x00,
    .reg1DC.byte = 0x00,
    .reg1DD.byte = 0x00,
    .reg1DE.byte = 0x00,
    .reg1DF.byte = 0x00,
    .reg1E0.byte = 0x00,
    .reg1E1.byte = 0x00,
    .reg1E2.byte = 0x00,
    .reg1E3.byte = 0x00,
    .reg1E4.byte = 0x00,
    .reg1E5.byte = 0x00,
    .reg1E6.byte = 0x00,
    .reg1E7.byte = 0x00,
    .reg1E8.byte = 0x00,
    .reg1E9.byte = 0x00,
    .reg1EA.byte = 0x00,
    .reg1EB.byte = 0x00,
    .reg1EC.byte = 0x00,
    .reg1ED.byte = 0x00,
    .reg1EE.byte = 0x00,
    .reg1EF.byte = 0x00,
    .reg1F0.byte = 0x00,
    .reg1F1.byte = 0x00,
    .reg1F2.byte = 0x00,
    .reg1F3.byte = 0x00,
    .reg1F4.byte = 0x00,
    .reg1F5.byte = 0x00,
    .reg1F6.byte = 0x00,
    .reg1F7.byte = 0x00,
    .reg1F8.byte = 0x00,
    .reg1F9.byte = 0x00,
    .reg1FA.byte = 0x00,
    .reg1FB.byte = 0x00,
    .reg1FC.byte = 0x00,
    .reg1FD.byte = 0x00,
    .reg1FE.byte = 0x00,
    .reg1FF.byte = 0x00,
};