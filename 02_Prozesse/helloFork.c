#include <stdio.h>
#include <sys/types.h>
int main() {
  fork();
  if (fork() == 0) printf("hello\n");
  fork();
  return 0;
}
