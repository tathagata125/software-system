/*Tathagata Das
MT2024161
*/
/*
write a program to execute ls -Rl by the following system calls
b. execlp
*/

#include <stdio.h>
#include <unistd.h>
int main()
{
	//it will use environment variable PATH to run executable PATH
	// it does not required entire file path as we did in excel()
	char *path = "ls";
	execlp(path, path, "-RL",NULL);
}
