#include<stdio.h>

	//Without return type without parameter
	void display() {
		printf("\n display function called");
	} 
	
	//without return type with parameter
	void areaReactangle(int l, int b){
		int area = l * b;
		printf("\n area of reactangle = %d", areaReactangle);
	} 
	
	//with return type without paramtere
	int cube() {
		int num;
		printf("\n Enter num");
		scanf("%d", &num);
		return num*num*num;
	} 
	
	//with return type with paramtere
	float areaofCricle(int r) {
		return(3.14 * r * r);
	} 

	// function definition
	int main(){
	display();
	areaReactangle(18,60);
	int c = cube();
	printf("\n cube = %d", c);
	float area = areaofCricle(3);
	printf("\n area of cricle = %f", area);
	

}
