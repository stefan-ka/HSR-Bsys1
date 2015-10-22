// Zeitmessungen unter Unix mit time-Befehl
// 04.01.06/gle

#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/time.h>

void warten() { // "Rechenzeit verbrauchen"
  volatile int i, j;
  // Ggf. anpassen - je nach Leistungsfaehigkeit des benutzten Rechners
  for (i=0;i<65000;i++) {
    for (j=0;j<1000;j++) {
    }
  }
}


int main () {

  clock_t start, end;
  struct timeval t1, t2;  

  // start time
  start = clock();
  gettimeofday(&t1, NULL);

  // Verbrauche Rechenzeit
  warten();

  // end time
  end = clock();
  gettimeofday(&t2, NULL);

  // print times
  double total_clock = (double) (end - start) / CLOCKS_PER_SEC;
  double total_gettimeofday = (t2.tv_sec - t1.tv_sec);
  total_gettimeofday += (t2.tv_usec - t1.tv_usec) / 1000000.0;
  printf("Total time with clock: %f \n", total_clock);
  printf("Total time wit gettimeofday: %f \n", total_gettimeofday);

  exit(0);
}
