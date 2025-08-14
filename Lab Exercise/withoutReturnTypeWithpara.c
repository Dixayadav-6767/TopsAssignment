#include<stdio.h>
 
//	void printSum(int a, int b){
//		int sum = a + b;
//		printf("sum = %d\n", sum);
//	}
//	
//	int main() {
//	
//	printSum(4,6);	
//}

void printTable(int num) {
	int i;
	for(i=1; i<=10; i++){
		printf("%d x %d = %d\n", num, i, num * i);
	}
	
}
	int main(){
		printTable(16); // prints table of 6
		printTable(9);
		
	}
