#include <unistd.h>
#include <wait.h>
#include <stdio.h>
#include <stdlib.h>


int main()
{
	printf ("Parent: %d\n", getpid());
	int a=1, b=2;
	int status;
	
	if (fork()!=0) {
		// Parent code
		printf("Parent %d: a=%d, b=%d\n", getpid(), ++a, ++b);
		pid_t pid = wait(&status);
		if (WIFEXITED(status)) {
			printf("Exit status of %d is: %d\n", pid, WEXITSTATUS(status));
		} else {
			printf("Child %d terminated abnormally\n", pid);
		}
	} else {
		// Child code
		printf("Child %d of parent %d: a=%d, b=%d\n", getpid(), getppid(), a, b);
		exit(b);
	}
	return 0;
}

