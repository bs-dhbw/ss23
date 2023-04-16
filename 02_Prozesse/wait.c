#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
  pid_t pid;
  int status;

  if (fork() == 0) {
    printf("Child running...\n");
    exit(5);
  }

  printf("Parent waiting... \n");

  pid = wait(&status);

  if (WIFEXITED(status)) {
    printf("Return value:  %d\n", WEXITSTATUS(status));
  }
  exit(0);
}
