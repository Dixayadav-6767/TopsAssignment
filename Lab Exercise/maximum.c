#include<stdio.h>

int main() {
    int i, start, end, max;
	printf("Enter the number of start piont:");
	scanf("%d",&start);
	printf("Enter the number of end piont:");
	scanf("%d",&end );
	
//	printf("Maximum number");
//	scanf("%d", &max);
	
		
	for(i=start; i<=end; i++){
		printf(" \n %d ", i);
		
		if(i >= max){
			max = i;
		} else{
			printf("\n");
		}
	}
	
	printf("Sabse bada number = %d\n", max);	
    
}

