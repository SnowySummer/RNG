#include "rng.h"


// RNG seed
extern uint64_t seed;


// LFSR parameters
static uint64_t lfsr_poly = 0xD800000000000000;

static uint8_t rng_lfsr_bit(){
    uint8_t bit = seed & 1;

    for (int i = 1; i < 64; i++){
        if ((lfsr_poly >> i) & 1)
            bit ^= (seed >> i);
    }

    bit &= 1;
    seed = seed >> 1 | ((uint64_t) bit << 63);
    return bit;
}

uint32_t rng_lfsr(){
    uint32_t num = 0;
    for (int i = 0; i < 32; i++)
        num = num << 1 | rng_lfsr_bit();
    return num;
}