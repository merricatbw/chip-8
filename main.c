#include <stdio.h>
#include <stdlib.h>

#define MEMORY_SIZE 4095

int main() {
    //memory
    uint8_t memory[MEMORY_SIZE];

    //registers
    uint8_t   v[16];  // v0 - vF
    uint16_t  I;      // I register
    uint8_t  st;      // sound timer
    uint8_t  dt;      // delay timer
    uint16_t pc;      // program counter 
    uint8_t  sc;      // stack counter
}
