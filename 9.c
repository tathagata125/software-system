#include<stdio.h>
#include<time.h>
#include<sys/stat.h>
#include<unistd.h>
#include<stdlib.h>
int main(int argc , char *argv[]){
	struct stat file_stat;
	if (argc!= 2){
		fprintf(stderr, "usage : %s <file>\n",argv[0]);
		return 1;
	}
	if(stat(argv[1], &file_stat) == -1) {
		perror("stat");
		return EXIT_FAILURE;
	}
	printf("Inode: %ld\n", (long)file_stat.st_ino);
	printf("number of hard links: %ld\n", (long)file_stat.st_nlink);
	printf("user ID: %d\n", file_stat.st_uid);
	printf("group ID: %d\n", file_stat.st_gid);
	printf("file size: %ld bytes\n", (long)file_stat.st_size);
	printf("Block size: %ld bytes\n", (long)file_stat.st_blksize);
	printf("Number of blocks: %ld\n", (long)file_stat.st_blocks);
	printf("last time access: %s", ctime(&file_stat.st_atime));
	printf("last modification time: %s", ctime(&file_stat.st_mtime));
	printf("last status change time: %s", ctime(&file_stat.st_ctime));
	return EXIT_SUCCESS;
}
