/*Tathagata Das
MT2024161
Create three records in a file. Whenever you access a particular record, first lock it then modify/access
to avoid race condition.*/
#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
int main()
{
	int fd = open("record.txt", O_RDWR);
	int id, ticket;
	char name[12];
	struct flock rdlock = {F_WRLCK, SEEK_SET, 0, 34, getpid()};
	int i ;
	printf("enter record id:");
	scanf("%d",&i);
	switch(i)
	{
	case 1:
		rdlock.l_start = 0;
		id = 1;
		ticket = 1;
		lseek(fd, 0, SEEK_SET);
		break;
	case 2:
		rdlock.l_start = 17;
		id = 1;
		ticket = 2;
		lseek(fd, 0, SEEK_SET);
		break;
	case 3:
		rdlock.l_start = 34;
		id = 3;
		ticket = 3;
		lseek(fd, 34, SEEK_SET);
		break;
	default:
		perror("invalid choice of record!!!");
	}
	fcntl(fd, F_SETLKW, &rdlock);
	printf("record %d id locked\n",id);
	printf("enter new ticket no ");
	scanf("%d",&ticket);
	char buf[17];
	sprintf(buf, "id=%dticket_no=%d",id, ticket);
	write(fd, &buf, sizeof(buf));
	getchar();
	rdlock.l_type = F_ULOCK;
	fcntl(fd, F_SETLKW, &rdlock);
	printf("record is unlocked\n");
}
