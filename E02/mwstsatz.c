#include <stdio.h>

double calcMwst(double wert);

double mwstsatz = 0.08;

int main() {
	double wert = 40.00;
	printf("Die Mehrwertsteuer von %f ist %f\n", wert, calcMwst(wert));
	return 0;
}

double calcMwst(double wert) {
	return wert * mwstsatz;
}
