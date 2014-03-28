#include <stdint.h>
typedef byte uint8_t;
typedef word uint16_t;
typedef struct z80_flags {
  byte z:1;
  byte s:1;
  byte p:1;
  byte c:1;
  byte ac:1;
  byte junk:3;
} __attribute__(packed) z80_flags;
typedef struct z80_ctx {
  byte a, b, c, d, e, h, l, i, r;
  z80_flags f;
  word sp, pc, ix, iy;
  byte* memory;
  // no need for memsize, assume 0xFFFF
} z80_ctx;
z80_ctx* omega_init(byte*);
void omega_exec(z80_ctx*);
#define Z80_ZERO 0x80
#define Z80_SUBTRACT 0x40
#define Z80_HALF_CARRY 0x20
#define Z80_CARRY 0x10
