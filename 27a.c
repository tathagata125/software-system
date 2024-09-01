/*name - 27.a
Tathagata Das
MT2024161
*/
/*
write a program to execute ls -Rl by the following system calls
a. execl
date - 28th aug 2024
*/
#include <stdio.h>
#include <unistd.h>
int main()
{
	char *path = "/bin/ls";
	execl(path, path, "-Rl",NULL);
}
