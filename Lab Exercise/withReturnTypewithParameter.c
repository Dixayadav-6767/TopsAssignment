#include<stdio.h>

int add(int a, int b) {
	return a + b; // returns sum
}

int main() {
	int result = add(5,3); // calling parameters
	printf("sum = %d", result);
}


