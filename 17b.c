#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>

int main () {
	struct{
		int ticket_no;
		}db;
	struct flock lock;
	int fd;
	fd=open("file.txt",O_RDWR);
	read(fd,&db,sizeof(db));
	lock.l_type=F_WRLCK;
	lock.l_whence=SEEK_SET;
	lock.l_start=0;
	lock.l_len=0;
	lock.l_pid=getpid();
	printf("Before entering into critical section\n");
	fcntl(fd,F_SETLKW,&lock);
	printf("current ticket number: %d\n", db.ticket_no);
	db.ticket_no++;
	lseek(fd,0L,SEEK_SET);
	printf("Inside the critical section...\n");
	printf("Enter to unlock..\n");
	write(fd,&db,sizeof(db));
	getchar();
	lock.l_type=F_UNLCK;
	printf("unlocked\n");
	fcntl(fd,F_SETLK,&lock);
	printf("finish\n");
}
