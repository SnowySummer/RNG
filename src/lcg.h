#ifndef __RNG_H__
#define __RNG_H__


#include <stdint.h>

uint32_t rng_set_seed(uint64_t _seed);
uint32_t rng_lcg();

#endif
