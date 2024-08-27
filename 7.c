#include<stdio.h>
int main(){
	FILE *file, *copy;
	file = fopen("file.txt","r");
	copy = fopen("copy.txt","w");
	if(file == NULL || copy == NULL){
		printf("error opening file");
		return 1;
	}
	char c;
	while((c = fgetc(file)) != EOF){
		fputc(c,copy);
	}
	fclose(file);
	fclose(copy);
}
