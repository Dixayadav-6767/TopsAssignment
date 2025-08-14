#include<stdio.h>
int main() {
	int r, l, b, areaOfReactangle, principal, rate, n,choice;
	float areaofcircle, Interest;
	
	printf("\n press 1 for find the area of circle:");
	printf("\n press 2 for find the area of rectangle:");
	printf("\n press 3 for find the simple interest");
	printf("\n enter your choice:");
	scanf("\n %d", &choice);
	
	switch (choice){
		case 1:
			printf("\n Enter the radius:");
			scanf("\n %d", &r);
			areaofcircle = 3.14 * r *r;
			printf("\n area of cricle = %f", areaofcircle);
			break;
			
		case 2:
		     printf("\n Enter l and b");
		     scanf("%d %d", &l, &b);
		     areaOfReactangle=l*b;
		     printf("\n areaOfReactangle=%d",areaOfReactangle);
		    break;
		
		case 3:
		     printf("\n Enter a principal, rate, No.of years");
		     scanf("%d %d %d", &principal, &rate, &n);
		     Interest=(principal*n*rate) / 100;
		     printf("\n simple Interest = %f", Interest);
		     break;
		     
		default:
		    printf("worng choice");
		    break;
	}
	return 0;
}
