#include<stdio.h>

int main() {
	int num1, num2;
	char operator;
	
	printf("Enter frist number: ");
	scanf("%d", &num1);
	
	printf("Enter an operator (+, -, *, /, %%): ");
	scand(" %c ", &operator);
	
	printf("Enter second number: ");
	scanf("%d", &num2);
	
	switch(operator) {
		case '+':
			printf("Result: %d\n", num1 + num2);
			break;
		case '-':
			printf("Result: %d\n", num1 + num2);
			break;
		case '*':
			printf("Result: %d\n", num1 + num2);
			break;
		case '/':
			if(num2 != 0)
				printf("Result: %d\n", num1 % num2);
			else 
				printf("Error: Modulus By zero is not allowed.\n");
			break;
		default:
			printf("Invalid operator.\n");
	}
		
}
