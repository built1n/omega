#include <omega.h>
byte readByte(z80_ctx*, word addr);
word readWord(z80_ctx*, word addr);
void writeByte(z80_ctx*, word addr, byte value);
void writeWord(z80_ctx*, word addr, word value);
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
