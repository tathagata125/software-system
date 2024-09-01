
	//name - 1.a
	//Tathagata Das
	//MT2024161
	//Create the following types of a files using (i) shell command (ii) system call
	//a.soft link(symlink system call)
	
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
//symbolic link created successfully
