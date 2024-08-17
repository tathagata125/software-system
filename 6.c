//Write a program to take input from STDIN and display on STDOUT. Use only read/write system calls
*/
//TATHAGATA DAS
//MT2024161
#include<stdio.h>
#include<unistd.h>
int main(){
	char input_buffer[50];
	int n=read(0,input_buffer,50);
	write(1,input_buffer,n);
}
