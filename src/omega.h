#ifndef OMEGA_H_
#define OMEGA_H_
#include <stdint.h>
#include <stddef.h>
typedef uint8_t byte;
typedef uint16_t word;
typedef struct z80_flags {
  byte zero:1;
  byte sign:1;
  byte f5:1;
  byte hc:1;
  byte f3:1;
  byte pv:1; // parity or overflow, set for even parity
  byte n:1;
  byte carry:1;
} __attribute__((packed)) z80_flags;
typedef struct z80_ctx {
  byte a, b, c, d, e, h, l, i, r;
  z80_flags flags, altflags;
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
#endif
