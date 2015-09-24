#include <stdio.h>

main () {
	char character = 'a';
	short short_number = 1;
	int integer_number = 1;
	long long_number = 1;
	long long long_long_number = 1;

	printf("Memory usage of character: %li bytes / %li bits\n", sizeof(character), sizeof(character) * 8);
	printf("Memory usage of short: %li bytes / %li bits\n", sizeof(short_number), sizeof(short_number) * 8);
	printf("Memory usage of integer: %li bytes / %li bits\n", sizeof(integer_number), sizeof(integer_number) * 8);
	printf("Memory usage of long: %li bytes / %li bits\n", sizeof(long_number), sizeof(long_number) * 8);
	printf("Memory usage of long long: %li bytes / %li bits\n", sizeof(long_long_number), sizeof(long_long_number) * 8);
}
