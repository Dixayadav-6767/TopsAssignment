#include<stdio.h>
int check(int x);

int main() {
	int result = check(10);
	printf("odd=%d\n", result);
}
int check(int x){
	int check = x % 2 == 0;
	return check;
}
