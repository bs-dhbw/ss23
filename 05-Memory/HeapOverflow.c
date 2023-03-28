#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int x[__INT_MAX__];
  int y[__INT_MAX__];
  int z[__INT_MAX__];
} Big_T;

int main(void) {

  for (int i = 0; i < __INT_MAX__; i++) {
    Big_T *ptr = malloc(10000 * sizeof(Big_T));
  }

  return 0;
}