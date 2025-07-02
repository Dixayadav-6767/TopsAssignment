#include <stdio.h>
int main(){
	float fahrenheit, celsius;
	
	printf("Enter temparature in celsius:");
	scanf("%f", &celsius);
	fahrenheit = (celsius * 9 / 5) + 32;
	printf("Temperature in fahrenheit: %.2f\n", fahrenheit);
	
	printf("Enter temperature in fahrenheit:");
	scanf("%f", &fahrenheit);
	celsius = (fahrenheit - 32) * 5 / 9;
	printf("Temperature in celsius: %.2f\n", celsius);
	
	
//	area = (c * 9/5) + 32;
	
	
}
