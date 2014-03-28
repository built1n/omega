#ifndef OMEGA_UTIL_H_
#define OMEGA_UTIL_H_
#include <omega.h>
static inline byte readByte(z80_ctx* ctx, word addr)
{
  return ctx->memory[addr];
}
static inline word readWord(z80_ctx* ctx, word addr)
{
  word ret;
  ret=ctx->memory[addr];
  ret|=(ctx->memory[addr])<<4;
  return ret;
}
static inline void writeByte(z80_ctx* ctx, word addr, byte value)
{
  ctx->memory[addr]=value;
}
static inline void writeWord(z80_ctx* ctx, word addr, word value)
{
  ctx->memory[addr]=value&0xFF;
  ctx->memory[addr+1]=(value&0xFF00)>>4;
}
static inline word getBC(z80_ctx* ctx)
{
  return ((ctx->b << 8) & (ctx->c));
}
static inline word getHL(z80_ctx* ctx)
{
  return ((ctx->h << 8) & (ctx->l));
}
static inline word getDE(z80_ctx* ctx)
{
  return ((ctx->d << 8) & (ctx->e));
}
static inline byte flagsToByte(z80_flags flags)
{
  byte ret=flags.carry;
  ret|=flags.n<<1;
  ret|=flags.pv<<2;
  ret|=flags.f3<<3;
  ret|=flags.hc<<4;
  ret|=flags.f5<<5;
  ret|=flags.sign<<6;
  ret|=flags.zero<<7;
  return ret;
}
static inline word getAF(z80_ctx* ctx)
{
  return ((ctx->a << 8) & flagsToByte(ctx->flags));
}
static inline void setHL(z80_ctx* ctx, word hl)
{
  ctx->h=((hl&0xFF00)>>8);
  ctx->l=(hl&0xFF);
}
static inline void setBC(z80_ctx* ctx, word bc)
{
  ctx->b=((bc&0xFF00)>>8);
  ctx->c=(bc&0xFF);
}
static inline void setDE(z80_ctx* ctx, word de)
{
  ctx->d=((de&0xFF00)>>8);
  ctx->e=(de&0xFF);
}
static inline z80_flags byteToFlags(byte flags)
{
  z80_flags ret={flags&0x80, flags&0x40, flags&0x20, flags&0x10, flags&0x8, flags&0x4, flags&0x2, flags&0x1};
  return ret;
}
static inline void setAF(z80_ctx* ctx, word af)
{
  ctx->a=((af&0xFF00)>>8);
  ctx->flags=byteToFlags(af&0x0FF);
}
static inline word getArg(z80_ctx* ctx)
{
  word ret;
  ret=readByte(ctx, ctx->pc+1);
  ret|=(readByte(ctx, ctx->pc+2)<<4);
  return ret;
}
static inline byte calcParity(byte b)
{
  byte count=0;
  for(int i=0;i<8;++i)
    {
      if((b&(1<<i))==1)
	++count;
    }
  if(count%2)
    return 0;
  return 1;
}
#endif
