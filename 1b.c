//Create the following types of a files using (i) shell command (ii) system call
	//a.soft link(symlink system call)
	//Tathagata Das
	//MT2024161
#include <unistd.h>
#include <stdio.h>

int main() {
	unlink("softlink.txt");
	if (symlink("file1.txt","softlink.txt") == 0){
		printf("symbolic link created successfully.\n");
	}
	else {
		perror("symlink");
	}
}
