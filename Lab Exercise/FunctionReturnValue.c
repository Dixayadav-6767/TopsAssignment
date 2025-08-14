#include<stdio.h>
//
//int square(int x); // function declaration
//
//int main(){ 
//	int result = square(10); // function call
//	printf("square = %d\n" , result);
//} 
// 
//int square(int x){ // function definition
//	int sq = x* x;
//	return sq;
//}
	
	void PrintTable(int num){
		int i;
		for(i=1; i<=10; i++){
			printf("%d x %d = %d\n", num,i,num*i);
		}
	}
	
	int main() {
		PrintTable(7);
		PrintTable(8);
		
	}
