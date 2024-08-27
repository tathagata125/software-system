/*Nmae - Tathagata Das
  Roll number - MT2024161*/
/*Write a program to display the environmental variable of the user (use environ).
*/
#include<stdio.h>
extern char **environ;
int main(){
	printf("%s\n",*environ);
	environ+=30;
	printf("%s\n",*environ);
}
