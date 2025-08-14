#include<stdio.h>

int main() {
	int a, b;
	
	printf("Enter Frist Integer: ");
	scanf("%d", &a);
	
	printf("Enter second Integer: ");
	scanf("%d", &b);
	
	printf("\n Arithmetic Operations:\n");
	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	
	if(b != 0){
		printf("%d / %d = %d\n", a,b, a / b);
		printf("%d %% %d = %d\n", a,b, a % b);
	} else {
		printf("Division and modulus by zero are defined.\n");
	}
	
	printf("%d == %d : %s\n", a,b, (a == b) ? "true" : "flase");
	printf("%d != %d : %s\n" ,a,b, (a != b) ? "true" : "flase");
	printf("%d > %d : %s\n", a,b, (a > b) ? "true" : "flase");
	printf("%d < %d : %s\n", a,b, (a < b) ? "true" : "flase");
	printf("%d >= %d : %s\n", a,b, (a >= b) ? "true" : "flase");
	printf("%d <= %d : %s\n", a,b, (a <= b) ? "true" : "flase");
	
	int logical_a = (a != 0);
	int logical_b = (b != 0);
	
	
	printf("Logical AND (%d && %d): %s\n", a, b, (logical_a && logical_b) ? "True" : "False");
    printf("Logical OR (%d || %d): %s\n", a, b, (logical_a || logical_b) ? "True" : "False");
	printf("logical NOT !%d: %s\n", a, (!logical_a) ? "true" : "flase");
	printf("logical NOT !%d: %s\n", a, (!logical_b) ? "true" : "flase");
}
