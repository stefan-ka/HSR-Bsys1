#include <stdio.h>

int main() {
	typedef double real;
	typedef double * pReal;

	real val = 12.5;
	pReal pval = &val;

	printf("val=%f\n", val);
	printf("pval=%f\n", *pval);
}
