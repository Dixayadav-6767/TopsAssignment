#include<stdio.h>
int main() 
{
	int r,l,b, areaofRectangle, p, rate, n,choice;
	float areaofCricle, I;
	printf("\n press1 for find area of cricle:");
	printf("\n press2 for find area of Rectangle:");
	printf("\n press3 for find Simple");
	printf("\n Enter your choice:");
	scanf("%d", & choice);
	
	switch(choice);
	
	case 1:
		printf("\n Enter the radius:");
		scanf("\n %d", &r);
		areaofCricel = 3.14*r*r;
		printf("\n area of cricle=%f", areaofCricle);
	break;
	
	case 2:
		printf("\n Enter the area of Rectangle:");
		scanf("\n %d %d", &l, &b);
		areaofRectangle= l * b;
		printf("\n area of rectangele=%d",  areaofRectangle);
	break;
	
	case 3:
		printf("\n Enter the principal, rate, n");
		scanf("%d %d %d", &p, &rate, &n);
		I = (p * rate * n);
		printf("\n Simple Interest = %f", I);
	break;
	default:
		printf("Worng Choice");
	break;
}
