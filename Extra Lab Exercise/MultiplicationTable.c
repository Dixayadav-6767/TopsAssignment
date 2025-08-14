#include<stdio.h>
int main() {
	int i=1, num;
	
	printf("Enter a number to print its multiplication table:");
	scanf("%d", &num);
		
	printf("multiplication Table of %d : \n", num);
//	
//	for(i<1; i<=10; i++){
//		printf("%d x %d = %d\n", num ,i, num * i);
//	}

//	while(i<=10){
//		printf("%d x %d = %d\n", num,i,num*i);
//		i++;
//	} 

	do {
		printf("%d x %d = %d\n", num, i, num * i);
		i++;
	}
	 while(i<=10);
}

