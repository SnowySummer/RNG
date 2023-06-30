#include "rng.h"

// RNG seed
#define INITIAL_SEED 1
uint64_t seed = INITIAL_SEED;

uint32_t rng_set_seed(uint64_t _seed){
  seed = _seed;
}


// LCG parameters
static uint64_t lcg_a = 12345;
static uint64_t lcg_c = 3;
static uint64_t lcg_m = (1 << 31);


uint32_t rng_lcg(){
  seed = (lcg_a * seed + lcg_c) % lcg_m;
  return (uint32_t) seed;
}
