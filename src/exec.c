#include <omega.h>
static void exec_0(z80_ctx* ctx)
{
  asm("nop");
}
static void exec_1(z80_ctx* ctx)
{
  ctx->c=readByte(ctx, readByte(ctx, ctx->pc+1));
  ctx->b=readByte(ctx, readByte(ctx, ctx->pc+2));
  ctx->pc+=2;
}
static void exec_2(z80_ctx* ctx)
{
  writeByte(ctx, getBC(ctx), ctx->a);
}
static void exec_3(z80_ctx* ctx)
{
  ++(ctx->c);
  if(c==0) // overflow
    {
      ++(ctx->b);
    }
}
static void exec_4(z80_ctx* ctx)
{

}
static void exec_5(z80_ctx* ctx)
{

}
static void exec_6(z80_ctx* ctx)
{

}
static void exec_7(z80_ctx* ctx)
{

}
static void exec_8(z80_ctx* ctx)
{

}
static void exec_9(z80_ctx* ctx)
{

}
static void exec_a(z80_ctx* ctx)
{

}
static void exec_b(z80_ctx* ctx)
{

}
static void exec_c(z80_ctx* ctx)
{

}
static void exec_d(z80_ctx* ctx)
{

}
static void exec_e(z80_ctx* ctx)
{

}
static void exec_f(z80_ctx* ctx)
{

}
static void exec_10(z80_ctx* ctx)
{

}
static void exec_11(z80_ctx* ctx)
{

}
static void exec_12(z80_ctx* ctx)
{

}
static void exec_13(z80_ctx* ctx)
{

}
static void exec_14(z80_ctx* ctx)
{

}
static void exec_15(z80_ctx* ctx)
{

}
static void exec_16(z80_ctx* ctx)
{

}
static void exec_17(z80_ctx* ctx)
{

}
static void exec_18(z80_ctx* ctx)
{

}
static void exec_19(z80_ctx* ctx)
{

}
static void exec_1a(z80_ctx* ctx)
{

}
static void exec_1b(z80_ctx* ctx)
{

}
static void exec_1c(z80_ctx* ctx)
{

}
static void exec_1d(z80_ctx* ctx)
{

}
static void exec_1e(z80_ctx* ctx)
{

}
static void exec_1f(z80_ctx* ctx)
{

}
static void exec_20(z80_ctx* ctx)
{

}
static void exec_21(z80_ctx* ctx)
{

}
static void exec_22(z80_ctx* ctx)
{

}
static void exec_23(z80_ctx* ctx)
{

}
static void exec_24(z80_ctx* ctx)
{

}
static void exec_25(z80_ctx* ctx)
{

}
static void exec_26(z80_ctx* ctx)
{

}
static void exec_27(z80_ctx* ctx)
{

}
static void exec_28(z80_ctx* ctx)
{

}
static void exec_29(z80_ctx* ctx)
{

}
static void exec_2a(z80_ctx* ctx)
{

}
static void exec_2b(z80_ctx* ctx)
{

}
static void exec_2c(z80_ctx* ctx)
{

}
static void exec_2d(z80_ctx* ctx)
{

}
static void exec_2e(z80_ctx* ctx)
{

}
static void exec_2f(z80_ctx* ctx)
{

}
static void exec_30(z80_ctx* ctx)
{

}
static void exec_31(z80_ctx* ctx)
{

}
static void exec_32(z80_ctx* ctx)
{

}
static void exec_33(z80_ctx* ctx)
{

}
static void exec_34(z80_ctx* ctx)
{

}
static void exec_35(z80_ctx* ctx)
{

}
static void exec_36(z80_ctx* ctx)
{

}
static void exec_37(z80_ctx* ctx)
{

}
static void exec_38(z80_ctx* ctx)
{

}
static void exec_39(z80_ctx* ctx)
{

}
static void exec_3a(z80_ctx* ctx)
{

}
static void exec_3b(z80_ctx* ctx)
{

}
static void exec_3c(z80_ctx* ctx)
{

}
static void exec_3d(z80_ctx* ctx)
{

}
static void exec_3e(z80_ctx* ctx)
{

}
static void exec_3f(z80_ctx* ctx)
{

}
static void exec_40(z80_ctx* ctx)
{

}
static void exec_41(z80_ctx* ctx)
{

}
static void exec_42(z80_ctx* ctx)
{

}
static void exec_43(z80_ctx* ctx)
{

}
static void exec_44(z80_ctx* ctx)
{

}
static void exec_45(z80_ctx* ctx)
{

}
static void exec_46(z80_ctx* ctx)
{

}
static void exec_47(z80_ctx* ctx)
{

}
static void exec_48(z80_ctx* ctx)
{

}
static void exec_49(z80_ctx* ctx)
{

}
static void exec_4a(z80_ctx* ctx)
{

}
static void exec_4b(z80_ctx* ctx)
{

}
static void exec_4c(z80_ctx* ctx)
{

}
static void exec_4d(z80_ctx* ctx)
{

}
static void exec_4e(z80_ctx* ctx)
{

}
static void exec_4f(z80_ctx* ctx)
{

}
static void exec_50(z80_ctx* ctx)
{

}
static void exec_51(z80_ctx* ctx)
{

}
static void exec_52(z80_ctx* ctx)
{

}
static void exec_53(z80_ctx* ctx)
{

}
static void exec_54(z80_ctx* ctx)
{

}
static void exec_55(z80_ctx* ctx)
{

}
static void exec_56(z80_ctx* ctx)
{

}
static void exec_57(z80_ctx* ctx)
{

}
static void exec_58(z80_ctx* ctx)
{

}
static void exec_59(z80_ctx* ctx)
{

}
static void exec_5a(z80_ctx* ctx)
{

}
static void exec_5b(z80_ctx* ctx)
{

}
static void exec_5c(z80_ctx* ctx)
{

}
static void exec_5d(z80_ctx* ctx)
{

}
static void exec_5e(z80_ctx* ctx)
{

}
static void exec_5f(z80_ctx* ctx)
{

}
static void exec_60(z80_ctx* ctx)
{

}
static void exec_61(z80_ctx* ctx)
{

}
static void exec_62(z80_ctx* ctx)
{

}
static void exec_63(z80_ctx* ctx)
{

}
static void exec_64(z80_ctx* ctx)
{

}
static void exec_65(z80_ctx* ctx)
{

}
static void exec_66(z80_ctx* ctx)
{

}
static void exec_67(z80_ctx* ctx)
{

}
static void exec_68(z80_ctx* ctx)
{

}
static void exec_69(z80_ctx* ctx)
{

}
static void exec_6a(z80_ctx* ctx)
{

}
static void exec_6b(z80_ctx* ctx)
{

}
static void exec_6c(z80_ctx* ctx)
{

}
static void exec_6d(z80_ctx* ctx)
{

}
static void exec_6e(z80_ctx* ctx)
{

}
static void exec_6f(z80_ctx* ctx)
{

}
static void exec_70(z80_ctx* ctx)
{

}
static void exec_71(z80_ctx* ctx)
{

}
static void exec_72(z80_ctx* ctx)
{

}
static void exec_73(z80_ctx* ctx)
{

}
static void exec_74(z80_ctx* ctx)
{

}
static void exec_75(z80_ctx* ctx)
{

}
static void exec_76(z80_ctx* ctx)
{

}
static void exec_77(z80_ctx* ctx)
{

}
static void exec_78(z80_ctx* ctx)
{

}
static void exec_79(z80_ctx* ctx)
{

}
static void exec_7a(z80_ctx* ctx)
{

}
static void exec_7b(z80_ctx* ctx)
{

}
static void exec_7c(z80_ctx* ctx)
{

}
static void exec_7d(z80_ctx* ctx)
{

}
static void exec_7e(z80_ctx* ctx)
{

}
static void exec_7f(z80_ctx* ctx)
{

}
static void exec_80(z80_ctx* ctx)
{

}
static void exec_81(z80_ctx* ctx)
{

}
static void exec_82(z80_ctx* ctx)
{

}
static void exec_83(z80_ctx* ctx)
{

}
static void exec_84(z80_ctx* ctx)
{

}
static void exec_85(z80_ctx* ctx)
{

}
static void exec_86(z80_ctx* ctx)
{

}
static void exec_87(z80_ctx* ctx)
{

}
static void exec_88(z80_ctx* ctx)
{

}
static void exec_89(z80_ctx* ctx)
{

}
static void exec_8a(z80_ctx* ctx)
{

}
static void exec_8b(z80_ctx* ctx)
{

}
static void exec_8c(z80_ctx* ctx)
{

}
static void exec_8d(z80_ctx* ctx)
{

}
static void exec_8e(z80_ctx* ctx)
{

}
static void exec_8f(z80_ctx* ctx)
{

}
static void exec_90(z80_ctx* ctx)
{

}
static void exec_91(z80_ctx* ctx)
{

}
static void exec_92(z80_ctx* ctx)
{

}
static void exec_93(z80_ctx* ctx)
{

}
static void exec_94(z80_ctx* ctx)
{

}
static void exec_95(z80_ctx* ctx)
{

}
static void exec_96(z80_ctx* ctx)
{

}
static void exec_97(z80_ctx* ctx)
{

}
static void exec_98(z80_ctx* ctx)
{

}
static void exec_99(z80_ctx* ctx)
{

}
static void exec_9a(z80_ctx* ctx)
{

}
static void exec_9b(z80_ctx* ctx)
{

}
static void exec_9c(z80_ctx* ctx)
{

}
static void exec_9d(z80_ctx* ctx)
{

}
static void exec_9e(z80_ctx* ctx)
{

}
static void exec_9f(z80_ctx* ctx)
{

}
static void exec_a0(z80_ctx* ctx)
{

}
static void exec_a1(z80_ctx* ctx)
{

}
static void exec_a2(z80_ctx* ctx)
{

}
static void exec_a3(z80_ctx* ctx)
{

}
static void exec_a4(z80_ctx* ctx)
{

}
static void exec_a5(z80_ctx* ctx)
{

}
static void exec_a6(z80_ctx* ctx)
{

}
static void exec_a7(z80_ctx* ctx)
{

}
static void exec_a8(z80_ctx* ctx)
{

}
static void exec_a9(z80_ctx* ctx)
{

}
static void exec_aa(z80_ctx* ctx)
{

}
static void exec_ab(z80_ctx* ctx)
{

}
static void exec_ac(z80_ctx* ctx)
{

}
static void exec_ad(z80_ctx* ctx)
{

}
static void exec_ae(z80_ctx* ctx)
{

}
static void exec_af(z80_ctx* ctx)
{

}
static void exec_b0(z80_ctx* ctx)
{

}
static void exec_b1(z80_ctx* ctx)
{

}
static void exec_b2(z80_ctx* ctx)
{

}
static void exec_b3(z80_ctx* ctx)
{

}
static void exec_b4(z80_ctx* ctx)
{

}
static void exec_b5(z80_ctx* ctx)
{

}
static void exec_b6(z80_ctx* ctx)
{

}
static void exec_b7(z80_ctx* ctx)
{

}
static void exec_b8(z80_ctx* ctx)
{

}
static void exec_b9(z80_ctx* ctx)
{

}
static void exec_ba(z80_ctx* ctx)
{

}
static void exec_bb(z80_ctx* ctx)
{

}
static void exec_bc(z80_ctx* ctx)
{

}
static void exec_bd(z80_ctx* ctx)
{

}
static void exec_be(z80_ctx* ctx)
{

}
static void exec_bf(z80_ctx* ctx)
{

}
static void exec_c0(z80_ctx* ctx)
{

}
static void exec_c1(z80_ctx* ctx)
{

}
static void exec_c2(z80_ctx* ctx)
{

}
static void exec_c3(z80_ctx* ctx)
{

}
static void exec_c4(z80_ctx* ctx)
{

}
static void exec_c5(z80_ctx* ctx)
{

}
static void exec_c6(z80_ctx* ctx)
{

}
static void exec_c7(z80_ctx* ctx)
{

}
static void exec_c8(z80_ctx* ctx)
{

}
static void exec_c9(z80_ctx* ctx)
{

}
static void exec_ca(z80_ctx* ctx)
{

}
static void exec_cb(z80_ctx* ctx)
{

}
static void exec_cc(z80_ctx* ctx)
{

}
static void exec_cd(z80_ctx* ctx)
{

}
static void exec_ce(z80_ctx* ctx)
{

}
static void exec_cf(z80_ctx* ctx)
{

}
static void exec_d0(z80_ctx* ctx)
{

}
static void exec_d1(z80_ctx* ctx)
{

}
static void exec_d2(z80_ctx* ctx)
{

}
static void exec_d3(z80_ctx* ctx)
{

}
static void exec_d4(z80_ctx* ctx)
{

}
static void exec_d5(z80_ctx* ctx)
{

}
static void exec_d6(z80_ctx* ctx)
{

}
static void exec_d7(z80_ctx* ctx)
{

}
static void exec_d8(z80_ctx* ctx)
{

}
static void exec_d9(z80_ctx* ctx)
{

}
static void exec_da(z80_ctx* ctx)
{

}
static void exec_db(z80_ctx* ctx)
{

}
static void exec_dc(z80_ctx* ctx)
{

}
static void exec_dd(z80_ctx* ctx)
{

}
static void exec_de(z80_ctx* ctx)
{

}
static void exec_df(z80_ctx* ctx)
{

}
static void exec_e0(z80_ctx* ctx)
{

}
static void exec_e1(z80_ctx* ctx)
{

}
static void exec_e2(z80_ctx* ctx)
{

}
static void exec_e3(z80_ctx* ctx)
{

}
static void exec_e4(z80_ctx* ctx)
{

}
static void exec_e5(z80_ctx* ctx)
{

}
static void exec_e6(z80_ctx* ctx)
{

}
static void exec_e7(z80_ctx* ctx)
{

}
static void exec_e8(z80_ctx* ctx)
{

}
static void exec_e9(z80_ctx* ctx)
{

}
static void exec_ea(z80_ctx* ctx)
{

}
static void exec_eb(z80_ctx* ctx)
{

}
static void exec_ec(z80_ctx* ctx)
{

}
static void exec_ed(z80_ctx* ctx)
{

}
static void exec_ee(z80_ctx* ctx)
{

}
static void exec_ef(z80_ctx* ctx)
{

}
static void exec_f0(z80_ctx* ctx)
{

}
static void exec_f1(z80_ctx* ctx)
{

}
static void exec_f2(z80_ctx* ctx)
{

}
static void exec_f3(z80_ctx* ctx)
{

}
static void exec_f4(z80_ctx* ctx)
{

}
static void exec_f5(z80_ctx* ctx)
{

}
static void exec_f6(z80_ctx* ctx)
{

}
static void exec_f7(z80_ctx* ctx)
{

}
static void exec_f8(z80_ctx* ctx)
{

}
static void exec_f9(z80_ctx* ctx)
{

}
static void exec_fa(z80_ctx* ctx)
{

}
static void exec_fb(z80_ctx* ctx)
{

}
static void exec_fc(z80_ctx* ctx)
{

}
static void exec_fd(z80_ctx* ctx)
{

}
static void exec_fe(z80_ctx* ctx)
{

}
static void exec_ff(z80_ctx* ctx)
{

}

void exec_opcode(z80_ctx* ctx, byte opcode)
{
void (*exec_table[256])(z80_ctx*)={
&exec_0,
&exec_1,
&exec_2,
&exec_3,
&exec_4,
&exec_5,
&exec_6,
&exec_7,
&exec_8,
&exec_9,
&exec_a,
&exec_b,
&exec_c,
&exec_d,
&exec_e,
&exec_f,
&exec_10,
&exec_11,
&exec_12,
&exec_13,
&exec_14,
&exec_15,
&exec_16,
&exec_17,
&exec_18,
&exec_19,
&exec_1a,
&exec_1b,
&exec_1c,
&exec_1d,
&exec_1e,
&exec_1f,
&exec_20,
&exec_21,
&exec_22,
&exec_23,
&exec_24,
&exec_25,
&exec_26,
&exec_27,
&exec_28,
&exec_29,
&exec_2a,
&exec_2b,
&exec_2c,
&exec_2d,
&exec_2e,
&exec_2f,
&exec_30,
&exec_31,
&exec_32,
&exec_33,
&exec_34,
&exec_35,
&exec_36,
&exec_37,
&exec_38,
&exec_39,
&exec_3a,
&exec_3b,
&exec_3c,
&exec_3d,
&exec_3e,
&exec_3f,
&exec_40,
&exec_41,
&exec_42,
&exec_43,
&exec_44,
&exec_45,
&exec_46,
&exec_47,
&exec_48,
&exec_49,
&exec_4a,
&exec_4b,
&exec_4c,
&exec_4d,
&exec_4e,
&exec_4f,
&exec_50,
&exec_51,
&exec_52,
&exec_53,
&exec_54,
&exec_55,
&exec_56,
&exec_57,
&exec_58,
&exec_59,
&exec_5a,
&exec_5b,
&exec_5c,
&exec_5d,
&exec_5e,
&exec_5f,
&exec_60,
&exec_61,
&exec_62,
&exec_63,
&exec_64,
&exec_65,
&exec_66,
&exec_67,
&exec_68,
&exec_69,
&exec_6a,
&exec_6b,
&exec_6c,
&exec_6d,
&exec_6e,
&exec_6f,
&exec_70,
&exec_71,
&exec_72,
&exec_73,
&exec_74,
&exec_75,
&exec_76,
&exec_77,
&exec_78,
&exec_79,
&exec_7a,
&exec_7b,
&exec_7c,
&exec_7d,
&exec_7e,
&exec_7f,
&exec_80,
&exec_81,
&exec_82,
&exec_83,
&exec_84,
&exec_85,
&exec_86,
&exec_87,
&exec_88,
&exec_89,
&exec_8a,
&exec_8b,
&exec_8c,
&exec_8d,
&exec_8e,
&exec_8f,
&exec_90,
&exec_91,
&exec_92,
&exec_93,
&exec_94,
&exec_95,
&exec_96,
&exec_97,
&exec_98,
&exec_99,
&exec_9a,
&exec_9b,
&exec_9c,
&exec_9d,
&exec_9e,
&exec_9f,
&exec_a0,
&exec_a1,
&exec_a2,
&exec_a3,
&exec_a4,
&exec_a5,
&exec_a6,
&exec_a7,
&exec_a8,
&exec_a9,
&exec_aa,
&exec_ab,
&exec_ac,
&exec_ad,
&exec_ae,
&exec_af,
&exec_b0,
&exec_b1,
&exec_b2,
&exec_b3,
&exec_b4,
&exec_b5,
&exec_b6,
&exec_b7,
&exec_b8,
&exec_b9,
&exec_ba,
&exec_bb,
&exec_bc,
&exec_bd,
&exec_be,
&exec_bf,
&exec_c0,
&exec_c1,
&exec_c2,
&exec_c3,
&exec_c4,
&exec_c5,
&exec_c6,
&exec_c7,
&exec_c8,
&exec_c9,
&exec_ca,
&exec_cb,
&exec_cc,
&exec_cd,
&exec_ce,
&exec_cf,
&exec_d0,
&exec_d1,
&exec_d2,
&exec_d3,
&exec_d4,
&exec_d5,
&exec_d6,
&exec_d7,
&exec_d8,
&exec_d9,
&exec_da,
&exec_db,
&exec_dc,
&exec_dd,
&exec_de,
&exec_df,
&exec_e0,
&exec_e1,
&exec_e2,
&exec_e3,
&exec_e4,
&exec_e5,
&exec_e6,
&exec_e7,
&exec_e8,
&exec_e9,
&exec_ea,
&exec_eb,
&exec_ec,
&exec_ed,
&exec_ee,
&exec_ef,
&exec_f0,
&exec_f1,
&exec_f2,
&exec_f3,
&exec_f4,
&exec_f5,
&exec_f6,
&exec_f7,
&exec_f8,
&exec_f9,
&exec_fa,
&exec_fb,
&exec_fc,
&exec_fd,
&exec_fe,
&exec_ff
};
 ++ctx->pc;
}

