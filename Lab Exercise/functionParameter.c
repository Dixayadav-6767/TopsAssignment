#include<stdio.h>
 void add(int a, int b); // declaration
 
 int main() {
 	add(3,5); // call with arguments
 	add(8,10);
 } 
 void add(int a, int b){ // definition
 	int sum = a + b; 
 	printf("%d", sum);
 }
 
 
