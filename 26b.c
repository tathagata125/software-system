/*Tathagata Das
MT2024161*/
/*
Write a program to execute an executable program.
b. pass some input to an executable program. (for example execute an executable of $./a.out name)
*/
#include <stdio.h>
#include <unistd.h>
int main(int argc, char *argv[]){
	char *path = argv[1];
	argv++;
	execv(path,argv);
}
