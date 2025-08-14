#include<stdio.h>

int main() {
	int marks[3];
	
	printf("Enter the maths marks: ");
	scanf("%d", &marks[0]);
	
	printf("Enter the hindi marks: ");
	scanf("%d", &marks[1]);
	
	printf("Enter the guj marks: ");
	scanf("%d", &marks[2]);
	
	printf("maths = %d, hindi = %d, guj = %d", marks[0], marks[1],marks[2]);
}
