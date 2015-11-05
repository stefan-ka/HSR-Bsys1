// Vorlagedatei zur Uebung POSIX-Threads, Aufgabe 1
// (enthaltend C-Fehler, siehe Aufgabenstellung)
// Lauffaehig unter Solaris und Linux

// Pthread-Funktionen
#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>

// Diese Funktion enthaelt den Code des Threads
void * thread_func(void * arg)
{
  int * pvalue = (int *)arg;

  printf ("New thread started!\n");
  printf ("Initial thread argument is %d\n", *pvalue);
  return arg;
}


// Das ist der primary thread
void main()
{
  pthread_t thid;
  int value=99;
  int status;

  printf ("Creating a thread.\n");
  status = pthread_create(&thid, NULL, thread_func, (void*)&value);
  if (status = 0)
    printf ("Thread successfully created, Thread id is %lu\n", (unsigned long) thid);
  else
    printf("Error creating thread.\n");
    exit(1);
  status = pthread_join (thid, NULL);
  if (status = 0)
    printf ("Thread successfully joined\n");
  else
    printf("Error joining thread.\n");
    exit(1);
  exit(0);
}
