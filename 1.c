//Tathagata Das
//MT2024161
//Create the following types of a files using (i) shell command (ii) system call
	//a.soft link(symlink system call)
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
  const char *ex = "file1.txt";
  const char *ex1 = "hardlink.txt";
  int l = link(ex,ex1);
  if(l == 0) {
      printf("Hard link created successfully");
  }
  else{
      perror("Error creating hardlink");
  }
  return 0;
}
