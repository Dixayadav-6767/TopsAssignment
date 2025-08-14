#include<stdio.h>

//	int getNumber() { // no parameters , returns int
//	return 10;
//}
	int main() {
		int num = getNumber(); // value returm hoti hai (varible = function_name())
		printf("Returned number = %d\n", num);
	}
	
	float pivalue() {
		return 3.1415;
	}
	
	int main() {
		float pi = pivalue();
		printf("Value of PI = %f\n", pi);
	}
	
	int num(){
		return 23333;
	}
	
    int main() {
		int n = num();
		printf("here are the numbers = %d", n);
	}
