Write a program to create a file and print the file descriptor value. Use creat ( ) system call
*/
//Tathagata das
// MT2024161
#include <fcntl.h>
#include <stdio.h>
int main()
{
	int n = creat("file3.txt",0777);
	printf("fd name : %d",n);
}
