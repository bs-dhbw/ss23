#include <stdlib.h>

void f(void) {
  int *x = malloc(10 * sizeof(int));
  if (x[0] == 0) {
    printf("Hello");
  }
}

int main(void) {
  f();
  return 0;
}