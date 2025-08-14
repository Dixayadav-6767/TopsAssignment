#include<stdio.h>
void Austriala(){
	printf("you are Austrilan");
	return;
}
void england(){
	printf("you are englandian");
	Austriala();
	return;
}
void indian() {
	printf("you are indian");
	england();
	return;
}
int main() {
	indian();
	return 0;	
}
