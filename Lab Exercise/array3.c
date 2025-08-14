#include<stdio.h>
int main() {
	int i;
	int arr[5] = {1,2,3,4,5};
	
	printf("printing Array Elements\n");
	for(i=0; i<5; i++){
	printf("%d", arr[i]);
   }
   printf("\n");
   
   printf("Printing Array Elements in reverse\n");
   for(i=4; i>=0; i--){
   	printf("%d", arr[i]);
   }

}
