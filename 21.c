/*Tathagata Das
MT2024161
Write a program, call fork and print the parent and child process id.*/
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
int main()
{
	printf("parent process id = %d\n",getpid());
	int fid = fork();
	if(fid)printf("child process id = %d\n",fid);
}
