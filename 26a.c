/*Tathagata Das
MT2024161*/
/*
Write a program to execute an executable program.
a. use some executable program
*/
#include <stdio.h>
#include <unistd.h>
int main(int argc, char *argv[])
{
	execv(argv[1], &argv[1]);
}
