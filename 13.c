#include <stdio.h>
#include <sys/select.h>
#include <sys/types.h>
#include <unistd.h>
#include <time.h>
void main(){
	struct timeval times;
	fd_set fd;
	FD_SET(0,&fd);
	times.tv_sec = 10;
	times.tv_usec = 0;
	int ready = select(1,&fd,NULL,NULL,&times);
	if(ready == -1){
		printf("error occured");
	}
	else if(ready == 0)
	{
		printf("time out");
	}
	else{
		printf("DATA ENTERED");
	}
}
