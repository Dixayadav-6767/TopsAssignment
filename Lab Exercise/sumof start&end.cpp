#include<stdio.h>

int main() {
    int i, start, end, sum=0;
	printf("Enter the number of start piont:");
	scanf("%d",&start);
	printf("Enter the number of end piont:");
	scanf("%d",&end);
	
	for(i=start; i<=end; i++){
		printf(" \n %d ", i);
	sum = start + end;
	}
	printf("\n sum=%d",sum);
	
    
}

