#include<stdio.h>
	struct employee{
		long long int PhoneNo;
		char name[20];
		char gender[10];
		float salary;
    };
 
	int main() {
 	
 	  //  struct employee e1={ 9601023941, "randhir", "male", 1200.0};
 	  	struct employee e1;
 	  	printf("Enter the phoneNo, name, gender and salary: ");
 	  	scanf("%lld %s %s %f", &e1.PhoneNo, e1.name, e1.gender, &e1.salary);
 	    
 	    printf("\n PhoneNo = %lld", e1.PhoneNo);
		printf("\n name = %s", e1.name);
		printf("\n gender = %s", e1.gender);
		printf("\n salary = %f", e1.salary);	
 	
 }
