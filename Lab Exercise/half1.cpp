#include<stdio.h>
int main() {
	char ch='a';
	int  i,j;
	
	for(i=1; i<=5; i++){ 
          
		for(j=1; j<=i; j++){
	
			printf("%c",ch);
		}
		ch++; // give a new character to line
		 printf("\n");
	}
}
