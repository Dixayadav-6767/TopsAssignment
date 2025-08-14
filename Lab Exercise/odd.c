#include<stdio.h>
main(){
	int i=1,n;
	printf("Enter the start point and end point :");
	scanf("%d %d",&i,&n);
	while(i%3!=0){
		i++;
	}
	printf("\nThe odd no. in the series : ");
	while(i<=n){
		printf("%d ",i);	
      	i+=2;
    }
}
