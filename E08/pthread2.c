// Vorlagedatei zur Uebung POSIX Threads
// Lauffaehig unter Solaris und Linux


// Header-Dateien einbinden
#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

// Globale Variable
int glob;

// Das ist der Code der neuen POSIX-Threads
void * work_thread(int * vv)
{
  int lokal;
  sleep(1);
  lokal=glob;
  while(1) {
    sleep(lokal);
    printf("I am thread %lu\n", (unsigned long) pthread_self());
  }
}


// Das ist der primary thread
int main()
{
  pthread_t thid;
  int status;

  for (glob=1;glob<=5 ;glob++) {
    printf("\nCreate Thread: glob=%d\n",glob);
    status=pthread_create(&thid, NULL, (void *) work_thread, NULL);
    if (status != 0) {
      printf("Error creating thread.\n");
      exit(1);
    }
    else {
    	printf("Thread successfully created, Thread id is %lu\n",(unsigned long) thid);
    }
  }
  while(1);
}

