#include<stdio.h>
int main() {
	 int num;
	 printf("Enter the age:");
	 scanf("%d",&num);
	 
	 (num >= 18) ? printf("you can a vote") : printf("you cannot vote for eligible");
}
