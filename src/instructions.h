#ifndef INSTRUCTIONS_H
#define INSTRUCTIONS_H

#include "chip8_t.h"

void cls(Chip8_t *chip8);                           //0x00E0
void return_from_subroutine(Chip8_t *chip8);        //0x00EE
void jump_addr(Chip8_t *chip8);                     //0x1nnn 
void call_subroutine(Chip8_t *chip8);               //0x2nnn
void se_vx_byte(Chip8_t *chip8);                    //0x3xkk
void sne_vx_byte(Chip8_t *chip8);                   //0x4xkk
void se_vx_vy(Chip8_t *chip8);                      //0x5xy0
void ld_vx_byte(Chip8_t *chip8);                    //0x6xkk
void add_vx_byte(Chip8_t *chip8);                   //0x7xkk
void ld_vx_vy(Chip8_t *chip8);                      //0x8xy0
void or_vx_vy(Chip8_t *chip8);                      //0x8xy1
void and_vx_vy(Chip8_t *chip8);                     //0x8xy2
void xor_vx_vy(Chip8_t *chip8);                     //0x8xy3
void add_vx_vy(Chip8_t *chip8);                     //0x8xy4
void sub_vx_vy(Chip8_t *chip8);                     //0x8xy5
void shr_vx_vy(Chip8_t *chip8);                     //0x8xy6
void subn_vx_vy(Chip8_t *chip8);                    //0x8xy7
void shl_vx_vy(Chip8_t *chip8);                     //0x8xyE
void sne_vx_vy(Chip8_t *chip8);                     //0x9xy0
void load_i_addr(Chip8_t *chip8);                   //0xAnnn
void jump_v0_addr(Chip8_t *chip8);                  //0xBnnn
void rnd(Chip8_t *chip8);                           //0xCxkk
void drw(Chip8_t *chip8);                           //0xDxyn
void skp(Chip8_t *chip8);                           //0xEx9E
void sknp(Chip8_t *chip8);                          //0xExA1
void ld_vx_dt(Chip8_t *chip8);                      //0xFx07
void ld_vx_k(Chip8_t *chip8);                       //0xFx0A
void ld_dt_vx(Chip8_t *chip8);                      //0xFx15
void ld_st_vx(Chip8_t *chip8);                      //0xFx18
void add_i_vx(Chip8_t *chip8);                      //0xFx1E
void ld_f_vx(Chip8_t *chip8);                       //0xFx29
void ld_b_vx(Chip8_t *chip8);                       //0xFx33
void ld_i_vx(Chip8_t *chip8);                       //0xFx55
void ld_vx(Chip8_t *chip8);                         //0xFx65

#endif
