#include <omega.h>
void omega_exec(z80_ctx* ctx)
{
  byte opcode=readByte(ctx, ctx->pc);
  exec_opcode(ctx, opcode);
}
