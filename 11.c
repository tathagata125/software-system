#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
int main(int argv, char *argc[]){
	int f = open(argc[1],O_WRONLY|O_APPEND);
	int first = dup(f);
	write(f,"written through original file descriptor\n",39);
	write(first,"written through dup() file descriptor\n",39);
	int second = dup2(f,10);
	write(second,"written through dup2() file descriptor\n",39);
	int third = fcntl(f, F_DUPFD,5);
	write(third,"USER written through fcntl() file descriptor\n",45);
}
