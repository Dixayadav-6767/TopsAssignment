#include<stdio.h>
main(){
	int i,n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	printf("The even loop : ");
	for(i=0;i<=n;i++){
		if(i%2==0){
			printf("%d ",i);
		}
	}
	printf("\nThe Odd loop :");
	for(i=0;i<=n;i++){
		if(i%2!=0){
			printf("%d ",i);
		}
	}
	printf("\nThe reverse loop : ");
	for(i=n;i>=0;i--){
		printf("%d ",i);
	}
}
