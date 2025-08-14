#include<iostream>
using namespace std;
class student {
	public:
		int enroll;
		char name[20];
		char email[30];
		void getStudentData(){
			cout<<"\n Enter enroll name email";
			cin>>enroll>>name>>email;
		}
		void ShowStudentData(){
			cout<<"\n Enroll="<<enroll;
			cout<<"\n name="<<name;
			cout<<"\n email="<<email;
		}
};
int main() {
	student s1;
	s1.getStudentData();
	s1.ShowStudentData();
}
