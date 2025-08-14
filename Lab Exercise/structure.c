#include<stdio.h>
	
	struct student{
		int enroll;
		char name[20];
		char email[20];
	};
	
	int main() {
	//	struct student s1 = {101, "madhu", "madhu12@gmail.com"};
	
		struct student s1;
		printf("\n Enter enroll Name email: ");
		scanf("%d %s %s",&s1.enroll, s1.name, s1.email);
		
		printf("\n enroll = %d", s1.enroll);
		printf("\n name = %s", s1.name);
		printf("\n email = %s", s1.email);
		
	}

