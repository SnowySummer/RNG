#include <stdio.h>

#include "rng.h"

int main(){

  rng_set_seed(0x1000);

  for (int i = 0; i < 60; i++){
    printf("0x%x\n", rng_lfsr());
  }
  
  return 0;
}
