#include <stdio.h>
#include <string.h>

int main() {
	char buffer[16];
	buffer[0] = '\0';
	strcat(buffer, "Stefan");
	strcat(buffer, " ");
	strcat(buffer, "Kapferer");

	printf("The name is %s\n", buffer);
}
