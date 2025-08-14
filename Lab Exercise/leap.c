#include<stdio.h> 
int main() {
	int leap;
	
	printf("Enter the year:");
	scanf("%d", &leap);
	
	if( leap % 4 == 0) {
		printf("years is leap year");
	} else { 
		printf("year is not a leap year");
	}
}
