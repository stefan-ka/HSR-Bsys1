// Codefragment als Ausgangsbasis für die Aufgabe 1 der Uebung "Prozesse & Threads unter Windows"
//***********************************************************************************************

// Ergaenze die fehlenden Teile ...

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// Vorwaertsdeklaration, da Funktionsname fuer CreateThread bekannt sein muss
DWORD WINAPI ThreadFunc(LPVOID);

// C Main-Funktion; enthaelt den Code des Primary Threads
int main()
{
	// Deklarationen
    HANDLE hThrd;
    DWORD  threadId;
	
	// TODO	


    // Erzeuge einen Thread
    hThrd = CreateThread(NULL,
            0,
            ThreadFunc,
            0,
            0,
            &threadId);

	// Prüfe ob Threaderzeugung erfolgreich war
	
	// TODO	

	// Warte auf Ende der Threadausführung

	// TODO	


	// Beende Programm
    return EXIT_SUCCESS;
}




// Thread-Funktion enthaltend den Code des Threads
DWORD WINAPI ThreadFunc(LPVOID n)
{
    int i;
    for (i=0;i<20;i++) {
	    printf("%d\n",i);
		Sleep(1000);
	}
	return 0;
}
