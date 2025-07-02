#include <stdio.h>
#define PI 3.14
int main(){

	float r,s, l, b, area;
	printf("Enter a radius:");
	scanf("%f", &r);
	area = PI* r * r;
	printf("Area=%.2f", area);
	
	printf("\n Enter a side:");
	scanf("%f", &s);
	area = PI* s * s;
	printf("Area=%.2f", area);
	
	printf("\n Enter a length:");
	scanf("%f", &l);
	printf("\n Enter a breadth:");
	scanf("%f" ,&b);
	area = l * b;
	printf("Area=%.2f", area);
}
