#include<stdio.h>

	void add(int a, int b);
	void mul(int num1, int num2);
	
	int main() {
		int x,y;
		
		printf("\n Enter two numbers for addition: ");
		scanf("%d %d", &x,&y);
		add(x, y);
		
		printf("\n Enter two numbers for multiplication: ");
		scanf("%d %d",&x , &y);
		mul(x,y);
	
	}
 
	
	void add(int a, int b){
		int c = a + b;
		printf("\n addition of %d and %d = %d", a,b,c);
				
	}
	
	void mul(int num1, int num2){
		
		int num3 = num1 * num2;
		printf("\n multiplication of %d and %d = %d", num1,num2,num3);
	}

