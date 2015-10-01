#include <stdio.h>

double mean(double array[], int length) {
	double sum = 0.0;
	int i;
	for(i = 0; i < length; i++) {
		sum = sum + array[i];
	}
        return sum / length;
}

int main() {
	double array[] = { 2.5, 5.5, 3.4 };

	double m = mean(array, 3);
	printf("mean is %.2f\n", m);
}

