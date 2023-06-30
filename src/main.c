#include <stdio.h>

#include "lcg.h"

int main(){

  for (int i = 0; i < 10; i++){
    printf("%d\n", rng_lcg());
  }
  
  return 0;
}
