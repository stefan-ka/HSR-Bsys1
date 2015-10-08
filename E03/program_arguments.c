#include <stdio.h>

int main(int argc, char * argv[]) {
	int i;
	printf("parameters:\n");
	for(i = 0; i < argc; i++) {
		printf("%s\n", argv[i]);
	}
}

