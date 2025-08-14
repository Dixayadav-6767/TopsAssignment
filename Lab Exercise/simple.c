#include <stdio.h>
int main(){

	float principal, rate, time, simpleInterest;
		
	printf("Enter a Prinicipal amount:");
	scanf("%f", &principal);
	
	printf("Enter a Rate of Interest:");
	scanf("%f",&rate);
	
	printf("Enter a Time(in years):");
	scanf("%f", &time);
	
	simpleInterest = (principal * rate * time) / 100;
	
	printf("Simple Interest = %.2f\n", simpleInterest);

}
