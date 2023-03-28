#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int *pX = malloc(100 * sizeof(int));
  pX[0] = 10;

  // free(pX);
  return 0;
}