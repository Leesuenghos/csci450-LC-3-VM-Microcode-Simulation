/** @file lc3vm.h
 * @brief LC-3 VM API
 *
 * @author Student Name
 * @note   cwid: 123456
 * @date   Spring 2024
 * @note   ide:  g++ 8.2.0 / GNU Make 4.2.1
 *
 * Header include file for LC-3 simulator API/functions.
 */
#include <stdbool.h>
#include <stdint.h>

#ifndef LC3VM_H
#define LC3VM_H

#include <stdbool.h>
#include <stdint.h>

// total number of opcodes in the LC-3 architecture.
#define NUMOPS (16)

// Need to #define all of your bit manipulation macros like DR, SR1, etc. here.
#define FIMM(i) ((i >> 5) & 0x1)
#define FCND(i) (((i) >> 9) & 0x7)
#define BR(i) (((i) >> 6) & 0x7)
#define FL(i) (((i) >> 11) & 1)
#define TRP(i) ((i) & 0xFF)

typedef void (*op_ex_f)(uint16_t i);
typedef void (*trp_ex_f)();

enum
{
  trp_offset = 0x20
};

// ✅ **전역 변수는 `extern "C"` 밖에 선언**
extern uint16_t mem[];    // Memory Array
extern uint16_t reg[];    // Register Array
extern uint16_t PC_START; // Program Start Address

enum registr
{
  R0 = 0,
  R1,
  R2,
  R3,
  R4,
  R5,
  R6,
  R7,
  RPC,
  RCND,
  RCNT
};

enum flags
{
  FP = 1 << 0,
  FZ = 1 << 1,
  FN = 1 << 2
};

#ifdef __cplusplus
extern "C" {
#endif

uint16_t mem_read(uint16_t addr);
void mem_write(uint16_t addr, uint16_t val);

uint16_t sign_extend(uint16_t bits, int size);

extern bool running;

void rti(uint16_t i);
void res(uint16_t i);
void tgetc();
void tout();
void tputs();
void tin();
void thalt();
void tinu16();
void toutu16();
void trap(uint16_t i);
void ld_img(char* fname, uint16_t offset);

#ifdef __cplusplus
}
#endif

#endif // LC3VM_H
