#include<stdio.h>
int main() {
	
	int a=10;
	int *ptr;
	ptr = &a; // assign address of a to ptr
	printf("\n ptr value a = %d", *ptr); 
	*ptr = 20;
	printf("\n after changing the value is ptr a = %d", a);
}
