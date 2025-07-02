#include<stdio.h>
int main() {
	int x1, x2;
	printf("\n enter x1 and x2 values");
	scanf("%d %d", &x1, &x2);
	
	if(x1 > 0 && x2 > 0){
		printf("\n frist");
	}else if (x1<0 && x2>0){
		printf("\n second");
	} else if(x1<0 && x2<0){
		printf("\n third");
	}else if (x1>0 && x2<0){
		printf("\n fourth");
	}
	else {
		printf("centre line");
	}
}
