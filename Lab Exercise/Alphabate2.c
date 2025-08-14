#include<stdio.h>
int main() {
	int i,j;
		char ch = 'A';
	for(i=1; i<=5; i++){

		for(j=1; j<=i; j++) { // inner loop => line start hogi
			printf("%c", ch);
			ch = ch + 1;
		} 
		printf("\n");
	}
}
