#include<stdio.h>
int main() {
	
	int marks;
	printf("Enter the student marks: ");
	scanf("%d", &marks);
	
	if(marks > 90){
		printf("Student Grade is A ");
	} else if(marks > 75 && marks <= 90){
		printf("Student Grade is B\n");
	} else if(marks > 50 && marks <= 75){
		printf("Student Grade is C\n");
    } else {
		printf("Student Grade is D\n");
	}
	
}
