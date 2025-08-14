#include<stdio.h>
int main() {
	
//	int i;
//	int a[5] = {12,34,56,78,90};
//	
//	for(i=0; i<5; i++){
//		printf("\n a[%d] = %d",i,a[i]);
//	}

// user input

	int arr[5], i;
	
	printf("Enter 5 numbers:\n");
	for(i=0; i<5; i++){
		scanf("%d", &arr[i],i);
	}
	
	printf("\n you Entered:\n");
	for(i=0; i<5; i++){
		printf("%d", arr[i],i);
	}
}
