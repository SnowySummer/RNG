#ifndef __LCG_H__
#define __LCG_H__


#include <stdint.h>

uint32_t rng_set_seed(uint64_t _seed);
uint32_t rng_lcg();
uint32_t rng_lfsr();

#endif
