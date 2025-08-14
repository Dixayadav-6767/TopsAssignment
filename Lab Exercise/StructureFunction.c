#include<stdio.h>
struct user{
	char name[20];
	int uid;
};

void getUser(struct user *u1){
	printf("\n Enter the uid and name: ");
	scanf("%d %s", & u1->uid, u1->name);
}

void showUser(struct user *u1){
	printf("\n uid=%d \t userName=%s", u1->uid, u1->name);
}

	int main(){
		struct user u1,u2,u3;
		getUser(&u1);
		showUser(&u1);
		getUser(&u2);
		showUser(&u2);
	}
