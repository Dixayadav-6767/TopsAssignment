#include<stdio.h>
int main() {
	int i, start, end;
	printf("Enter the number of start piont:");
	scanf("%d",&start);
	printf("Enter the number of end piont:");
	scanf("%d",&end);
	
	while(start <= end){
		if(start % 2 == 0)
		   printf("\n Even=%d", start);
		else
		   printf("\n Odd=%d", start);
		start++;
	}
	
}
