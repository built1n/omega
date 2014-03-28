#include <omega.h>
#include <util.h>
extern void exec_opcode(z80_ctx*, byte);
void omega_exec(z80_ctx* ctx)
{
  byte opcode=readByte(ctx, ctx->pc);
  exec_opcode(ctx, opcode);
}
