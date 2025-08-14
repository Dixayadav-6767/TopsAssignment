#include<stdio.h>
int main() {
	int num, even, odd;
	
	printf("Enter the number: ");
	scanf("%d", &num);
	
	if(num % 2 == 0) {
		printf("Number is even\n");
	}
	else {
		printf("Number is odd\n");
	}
	
	if(num > 0){
		printf("Number is positive\n");
	} else if(num  < 0){
		printf("Number is nor a positive and negative\n");
	} 
	else{
		printf("The number is nor a positive and negative , is a zero\n");
	}
	
	if(num % 3 == 0 && num % 5 == 0){
		printf("The number is a multiple of both 3 and 5.\n");
	} else{
		printf("The number is NOT a multiple of both 3 and 5\n");
	}
	
}
