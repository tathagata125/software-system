//Tathagata Das
//MT2024161
/*
Write a program to create an orphan process.
*/
#include <stdio.h>
#include <unistd.h>

int main(void) {
	if(!fork()){
		printf("child ppid before orphan : %d\n", getppid());
		sleep(3);
		printf("child ppid after pid: %d\n", getppid());
	}
	else
		sleep(1);
}
