//Write a program to create five new files with infinite loop. Execute the program in the background
//and check the file descriptor table at /proc/pid/fd.
// TATHAGATA DAS
// MT2024161
#include<stdio.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<fcntl.h>
void main(int argv,char *argc[]){
	int f1=creat(argc[1],S_IRWXU|S_IWGRP|S_IROTH);
	int f2=creat(argc[2],S_IRWXU|S_IWGRP|S_IROTH);
	int f3=creat(argc[3],S_IRWXU|S_IWGRP|S_IROTH);
	int f4=creat(argc[4],S_IRWXU|S_IWGRP|S_IROTH);
	int f5=creat(argc[5],S_IRWXU|S_IWGRP|S_IROTH);
	printf("f1=%d\t f2=%d\t f3=%d\t f4=%d\t f5=%d\t\n",f1,f2,f3,f4,f5);
	while(1);
}
