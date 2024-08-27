#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>
int main(int argv, char *argc[]){
	if(argv != 2){
		perror("error");
	}
	int file = open(argc[1],O_RDONLY);
	if(file == -1){
		perror("Error file doesnt exist");
		close(file);
	}
	char constitutes[1024];
	while(read(file,constitutes,1)) {
		if(constitutes[0] == '\n')
		{
			getchar();
		}
		else{
			printf("%c",constitutes[0]);
		}
	}
	close(file);
}
