//Write a simple program to execute in an infinite loop at the background. Go to /proc directory and
//identify all the process related information in the corresponding proc directory.
// Tathagata Das
// MT2024161
#include <stdio.h>
#include <unistd.h>
int main(){
	for(;;)
	{
		printf("hi");
		sleep(10);
	}
	
}
