#include<stdio.h>

	void swap(int a, int b){
		
	int temp;
	temp=a;
	a=b;
	b=temp;
	
	printf("\n InnerFunction a=%d and b=%d", a,b);
		
	 }
int main() {
	int a=10,b=30;
	swap(a,b);
	printf("\n a=%d and b=%d", a,b);
	
}
