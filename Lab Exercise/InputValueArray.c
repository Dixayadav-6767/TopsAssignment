#include<stdio.h>

int main() {
	int i,sum=0,maximum;
	int a[5];
	for(i=0; i<5; i++){
		printf("\n enter a [%d]: ", i);
		scanf("%d", &a[i]);
	sum = sum + a[i];
		
		if(maximum<a[i]) {
			maximum=a[i];
		}
	} 
	
	for(i=0; i<5; i++){
		printf("\n a[%d] = %d", i, a[i]);
	}
	printf("\n maxmium of all array element=%d", maximum);
}
