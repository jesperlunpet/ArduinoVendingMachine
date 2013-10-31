#ifndef _ArduinoVendingMachine_h_
#define _ArduinoVendingMachine_h_

#include <stdint.h>

enum Letter {
  OFF = 0xFF,

  C = 0xC6,
  O = 0xA3, // large O: 0xC0,
  L = 0xC7,
  A = 0x88,

  E = 0x86,
  r = 0xAF,
  dash = 0xBF, // '-'

  P = 0x8C,
  S = 0x92,
  I = 0xCF,

  F = 0x8E,
  n = 0xAB,
  T1 = 0xF8,
  T2 = 0xFE,

  X = 0x89,

  B = 0x80,
  R = A,

  V = 0xC1,
  d = 0xA1,
  u = 0xE3,

  i = 0xEF,
  g = 0x90,

  K = X,
};

const uint8_t COLA[] = { C, O, L, A, OFF };
const uint8_t PEPSI[] = { P, E, P, S, I, OFF };
const uint8_t FANTA[] = { F, A, n, T1, T2 , A, OFF };
const uint8_t FAXE[] = { F, A, X, E, OFF };
const uint8_t BEER[] = { B, E, E, r, OFF };
const uint8_t NO_REFUND[] = { N, O, OFF, r, E, F, U, n, d, OFF };

#endif
