#include<stdio.h>
void mul(int a[2][2], int b[2][2], int c[i][j]){
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			temp=0;
			for(k=0; k<2; k++){
				temp += a[i][k] * b[k][j];
			}
			c[i][j] = temp;
		}
	}
}
