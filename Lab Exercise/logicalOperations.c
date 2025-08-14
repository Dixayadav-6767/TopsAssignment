#include<stdio.h>

int main() {
	int a,b;
	
	printf("Enter two integers: ");
	scanf("%d %d", &a ,&b);
	
	printf("sum:%d\n", a+b);
	printf("is a>b ? %d\n", a>b);
	printf("logical AND: %d\n", (a > 0 && b > 0));
}
