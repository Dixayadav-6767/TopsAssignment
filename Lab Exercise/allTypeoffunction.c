#include<stdio.h>
void display() {
	printf("\n display function called");
} 
void areaofReactangle(int a, int b){
	void areaofReactangle(int l, int b);
	
	int area = l * b;
	printf("\n area of reactangle = %d", area);
}
	int cube() {
		int num;
		printf("\n Enter num");
		scanf("%d", &num);
		return num * num * num;
	} 
	
	float areaofCricle(int r){
		return(3.14 * r * r);
	}
	main(){
		diplay();
		areaofReactangle(2,6);
		int c=cube();
		printf("\n cube=%d", c);
		float area =  areaofCricle(3);
		printf("\n area of cricle = %f", area);
	 	
	 }
