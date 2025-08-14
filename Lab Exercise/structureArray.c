#include<stdio.h>

struct student {
	int roll;
	char name[20];
	float marks;
};

int main(){
	struct student s[3];
	int i;
	
	for(i=0; i<3; i++){
		printf("\n Enter details for student %d\n", i+1);
		printf("Roll number: ");
		scanf("%d", &s[i].roll);
		printf("Name: ");
		scanf("%s", s[i].name);
		printf("Marks: ");
		scanf("%f", s[i].marks);
	}
	
	printf("\n-- Student Details --\n");
	for(i=0; i<3; i++){
		printf("\n Student %d:\n", i+1);
		printf("Roll Number: %d\n", s[i].roll);
		printf("Name: %s\n", s[i].name);
		printf("Marks: %f\n", s[i].marks);
	}
}
