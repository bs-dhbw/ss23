#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/*
 * Compile with:
 *   gcc -Wall ThreadCreate.c -lpthread
 */
void *thread_func(void *arg) {
  printf("Thread entered; initial thread parameter is: %d\n", *(int *)arg);
  printf("own thread ID. %ld\n", pthread_self());
  return (arg);
}

int main(void) {
  pthread_t threadId;
  int a = 5, status;
  int *presult;
  status = pthread_create(&threadId, NULL, thread_func, &a);

  if (status == 0) {
    printf("Thread launched %ld\n", threadId);
  }

  pthread_join(threadId, (void **)&presult);
  printf("Result is: %d\n", *presult);

  exit(0);
}