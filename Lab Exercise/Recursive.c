#include<stdio.h>
int FactFind(int num) {
	if(num==1) {
		return 1;
	} 
	int f = num * FactFind(num-1);
	return f;
} 
	main() {
		printf("\n fact of 5=%d", FactFind(5));
	}
