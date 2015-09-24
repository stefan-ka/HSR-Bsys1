#include <stdio.h>

main () {
	double number1;
	double number2;
	double number3;

	printf("Please enter 3 doubles:\n");

	scanf("%lf %lf %lf", &number1, &number2, &number3);

	printf("Your numbers are: %f, %f, %f\n", number1, number2, number3);
}
