#include<stdio.h>
int main() {
	int start,end, sum;
	
	printf("enter the start point of number:");
    scanf("%d", &start);
    
    printf("enter the end point of number:");
    scanf("%d", &end);

//    for(start=1; start<=end; start++) {
//        sum = start+end;  // sum = sum + start + end
//    }
//    
//
//    printf("Sum of series %d is: %d\n",sum);

	while(start<=end){
		printf("sum of series %d is:%d\n", sum);
		sum = start+end;
		start++;
		 
	}

    return 0;
}


