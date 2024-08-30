//Tathagata Das
//MT2024161
/*Write a program to create a Zombie state of the running program.*/
#include <stdio.h>
#include <unistd.h>

int main (void) {
	if(!fork())
		printf("child pid: %d\n", getpid());
	else
		getchar();
}
