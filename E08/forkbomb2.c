#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

 int main()
 {
   long i=0;

   while(1) {
     if (fork()==-1) {
		 printf("Anzahl erfolgreiche fork()-Aufrufe = %li\n", i);
		 while(1);
	 }
	 i++;
   }
 }
