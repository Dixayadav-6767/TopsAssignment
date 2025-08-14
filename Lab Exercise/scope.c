#include<stdio.h>
	
	int i=1;
	void swap(int a, int b){
		int temp  = a;
		a = b;
		b = temp;
		printf("\n Inner function a=%d and b=%d", a,b);
	} 
	void display(){
		printf("\n In function i=%d", i);
	}
	main() {
		int a;
		printf("\n i=%d", i);
		int X=10;
	
	display();
	swap(12,3);
	printf("\n a=%d", a);
}
