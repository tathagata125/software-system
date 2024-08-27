#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>

int main(int argc,char *argv[]){
	int f;
	char b_seek[] = "1234567890";
	char a_seek[] = "ABCDEFGHI";
	f = open(argv[1],O_RDWR);
	if(f == -1)
	{
		perror("error while opening rand.txt");
		close(f);
		exit(EXIT_FAILURE);
	}
	int written = write(f,b_seek,sizeof(b_seek)-1);
	if(written != sizeof(b_seek)-1){
		perror("error writing first 10 bytes");
		close(f);
		exit(EXIT_FAILURE);
	}

	int offset = lseek(f,10,SEEK_CUR);
	if(offset == (off_t)-1){
		perror("error seeking in file");
		close(f);
		exit(EXIT_FAILURE);
	}
	else{
		printf("lseek before 2nd write %d\n",offset);
	}
	written = write(f,a_seek,sizeof(a_seek)-1);
	if(written != sizeof(a_seek)-1){
		perror("error writing");
		close(f);
		exit(EXIT_FAILURE);
	}
	close(f);
	offset = lseek(f,20,SEEK_CUR);
	printf("file operations completed successfully %d\n",offset);
}
