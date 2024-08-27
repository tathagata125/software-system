#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>

int main(void){
	int fd;
	struct {
		int ticket_no;
	} db;
	db.ticket_no = 10;
	fd = open("file.txt",O_CREAT | O_RDWR, 0744);
	if(fd < 0){
		perror("open");
		exit(EXIT_FAILURE);
	}
	if(write(fd, &db, sizeof(db)) != sizeof(db)){
		perror("write");
		close(fd);
		exit(EXIT_FAILURE);
	}
	close(fd);
	fd = open("file.txt", O_RDONLY);
	if(fd < 0) {
		perror("open");
		exit(EXIT_FAILURE);
	}
	if(read(fd,&db, sizeof(db))!= sizeof(db)){
		perror("read");
		close(fd);
		exit(EXIT_FAILURE);
	}
	printf("Ticket no: %d\n", db.ticket_no);
	close(fd);
}
