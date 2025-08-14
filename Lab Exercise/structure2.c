#include<stdio.h>

struct student {
	int roll;
	char name[20];
	float marks;
};

struct student1 {
	int roll;
	char name[20];
	float marks;
};


int main() {
	struct student s1 = {101, "Madhusudhan", 87.9};
	struct student s2 = {102, "keshav", 87.0};
	
	printf("student Details:\n");
	printf("Roll: %d\n",s1.roll);
	printf("Name: %s\n",s1.name);
	printf("marks: %f\n", s1.marks);
	
	printf("\nstudent Details:\n");
	printf("Roll: %d\n",s2.roll);
	printf("Name: %s\n",s2.name);
	printf("marks: %f\n", s2.marks);
}
