/*Tathagata Das
 MT2024161*/
/*b. Implement read lock*/
#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
int main()
{
	int fd = open("record.txt",O_RDONLY);
	struct flock rdlock = {F_RDLCK, SEEK_SET, 0, 34, getpid()};
	int id;
	printf("Enter record id:");
	scanf("%d",&id);
	switch(id)
	{
	case 1:
		rdlock.l_start = 0;
		break;
	case 2:
		rdlock.l_start = 17;
		break;
	case 3:
		rdlock.l_start = 34;
		break;
	default:
		perror("invalid choice of record !!!");
	}
	fcntl(fd,F_SETLKW, &rdlock);
	printf("record %d id locked Enter to unlock it \n", id);
	getchar();
	getchar();
	rdlock.l_type = F_ULOCK;
	fcntl(fd, F_SETLKW, &rdlock);
	printf("record is unlocked\n");
}
