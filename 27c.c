//Tathgata Das
//MT2024161
/*
write a program to execute ls -Rl by the following system calls
c. execle
*/
#include <stdio.h>
#include <unistd.h>
int main(int argc, char *argv[], char *env[])
{
	//we have to pass environment variable
	char *path = "/bin/ls";
	execle(path, path, "-RL", "record.txt",NULL,env);
}
