#include<stdio.h>
int main() {
	int num;
	printf("Enter the number:");
	scanf("%d", &num);
	
	if(num%2 == 0) {
		printf("\n number is even", num);
	} else {
		printf("\n %d is odd", num);
	}
}
