#include<stdio.h>
int main(){
	char data[100];
	FILE *fp;
	fp = fopen("hello.txt", "w");
	fprintf(fp, "hello tops");
	fclose(fp);
	
	fp=fopen("hello.txt", "r");
	fgets(data,20,fp);
	printf("\n read data from file = %s", data);
	fclose(fp);
}
