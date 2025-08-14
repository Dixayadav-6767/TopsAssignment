#include<stdio.h>
int main() {
	int i;
	for(i=30; i>=20; i--){
		if(i==25){
			//break;
			continue;
		} printf("\n i=%d", i);
	}
}
