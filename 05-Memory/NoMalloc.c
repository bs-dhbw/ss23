#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

  char *src = "hello world";
  char *dst;
  strcpy(dst, src);

  printf("End\n");
  return 0;
}