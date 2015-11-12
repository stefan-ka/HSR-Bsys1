/*========================================================================
 *
 *  Beispiel für eine Zeitmessung
 *  Fuer genaue Zeitmessungen kann der "Windows Performance Counter" be-
 *  nutzt werden. Hier sehen Sie wie.
 *
 *	13.12.2004 / GLE
 *
 *========================================================================*/


#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// Variablen zur Zeitmessung
LARGE_INTEGER *pstart;
LARGE_INTEGER *pstop;
LARGE_INTEGER *pfreq;


// Hilfsfunktion, um aus Start-, Stoppzeit und Frequenz des Zaehlers
// die verstrichene Zeit zu ermitteln.
double getMeasureTime()
{
   LONGLONG ll_int =0;     // Hilfsvariable zur Bestimmung der Rechenzeit
   double meastime = 0.0;

   ll_int = (*pstop).QuadPart - (*pstart).QuadPart;
   return ((double) ll_int) / ((double) ((*pfreq).QuadPart));
}



int main()
{
   // ZaehlerVariablen initialisieren, Frequenz des Zaehlers bestimmen
   pstart = malloc(sizeof(LARGE_INTEGER));
   pstop = malloc(sizeof(LARGE_INTEGER));
   pfreq = malloc(sizeof(LARGE_INTEGER));
   QueryPerformanceFrequency(pfreq);
   // Hole Startzeit
   QueryPerformanceCounter(pstart);


   // Hier wäre der auszumessende Kodeabschnitt (hier exemplarisch mit künstlicher Pause simuliert)
   printf("Schlafe nun fuer etwa 100 ms\n");
   // Achtung: diese Funktion beginnt mit grossem "S" (NB: MinGW enthält eine gleichnamige
   // Funktion, die mit kleinem "s" beginnt, aber etwas anderes macht)
   Sleep (100);


   // Hole Stoppzeit
   QueryPerformanceCounter(pstop);
   printf("Benoetigte Zeit: %2.6f s\n", getMeasureTime() );

   return 0;
}

