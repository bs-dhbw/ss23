#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

  char *src = "hello world";
  char *dst = (char *)malloc(strlen(src));
  strcpy(dst, src);
  free(dst);

  printf("End\n");
  return 0;
}