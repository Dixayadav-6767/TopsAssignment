#include<stdio.h>
struct subject{
	int scode;
	char sname[20];
	int marks;
};

struct student{
	int enroll;
	char Name[20];
	struct subject s1;
};

int main(){
	struct student st1;
	printf("\n Enter student enroll and name: ");
	scanf("%d %s", &st1.enroll, st1.Name);
	printf("\n Enter Subject code name and marks: ");
	scanf("%d %s %d", &st1.s1.scode,st1.s1.sname,&st1.s1.marks);
	printf("\n subjectcode=%d", st1.s1.scode);
	printf("\n sname=%s and marks=%d", st1.s1.sname, st1.s1.marks);
}
