//Tathagata Das
// MT2024161
//FIFO (mkfifo Library Function or mknod system call)
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
int main() {
	int res;
	res = mkfifo("fifo1.txt",0777);
	printf("named pipe created\n");
}
