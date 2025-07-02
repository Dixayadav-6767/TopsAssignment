#include<stdio.h>
int main() {
	int a=10, b=20, temp;
	temp=a;
	a=temp;
	temp=b;
	
	printf("%d", a, b, temp);
}

