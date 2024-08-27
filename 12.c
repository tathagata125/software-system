#include<unistd.h>
#include<stdio.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<fcntl.h>
int main(int argv, char *argc[])
{
	int f = open(argc[1], O_RDONLY);
	int mod = fcntl(f, F_GETFL);
	printf("%d\n",mod);
	int acc_mode = mod & O_ACCMODE;
	printf("%d\n",acc_mode);
	switch(acc_mode)
	{
		case 2:
			printf("O_RDWR");
			break;
		case 1:
			printf("O_WRONLY");
			break;
		case 0:
			printf("O_RDONLY");
			break;
		default:
			break;
		}
} 
