#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int *pX = malloc(100 * sizeof(int));

  pX[0] = 10;

  free(pX);

  pX[0] = 12;
  return 0;
}