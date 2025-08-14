#include<stdio.h>
int main() {
	int digit,sum=0,num;
	printf("Enter the integer: ");
	scanf("%d", &num);
	
	while(num != 0) {
		digit = num % 10;
		sum = sum + digit;
		num = num / 10;
	
	}
		printf("sum of digits = %d\n", sum);
}
