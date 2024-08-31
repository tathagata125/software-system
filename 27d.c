/*Tathagat Das
MT2024161 */
/*
write a program to execute ls -Rl by the following system calls
d. execv
*/
#include <stdio.h>
#include <unistd.h>
int main()
{
	char *path = "/bin/ls";
	char *argv[] = {path, "-RL",NULL};
	execv(path,argv);
}
