//Write a program to open an existing file with read write mode. Try O_EXCL flag also.
// TATHAGATA DAS
// MT2024161
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
int main() {
	int fd = open("hello.txt", O_RDWR);
	printf("%d\n",fd);
	int e = open("hello.txt",O_EXCL);
	printf("%d\n",e);
}

