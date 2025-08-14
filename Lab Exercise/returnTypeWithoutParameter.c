#include<stdio.h>
//
//	void display() { // no return and no parameter
//		printf("Hello and bye");	
//	} 
//	
//	int main() {
//		display(); //function call
//		return 0;
//	}
	int main() {
		PrintTable();
		
	}
	
	void PrintTable() {
		int i;
		for(i=1; i<=10; i++){
			printf(" 5 x %d = %d\n", i, 5*i);
		}
	}
	

	
