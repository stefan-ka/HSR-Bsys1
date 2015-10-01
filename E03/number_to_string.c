#include <stdio.h>
#include <stdio.h>

void convertYear(int year, char * buffer) {
        sprintf(buffer, "%i", year);
}

int main() {
	char string[5];
	int year = 2015;
	convertYear(year, string);
	printf("The year is %s\n", string);	
}

