#include<iostream>
using namespace std;

class student {
	public:
		int enroll;
		char name[20];
		char email[30];
		
		void getStudentData(){
			cout << "\n Enter enroll name email";
			cin >> enroll >> name >> email;
		}
		void ShowStudentData(){
			cout << "\n Enroll = " << enroll;
			cout << "\n name = " << name;
			cout << "\n email = " << email << endl;
		}
};
int main() {
	student s[2];
	
	for(int i=0; i<2; i++){
		cout<<"\n Enter stduent data of"<<i+1;
		s[i].getStudentData();
	}
	for(int i=0; i<2; i++){
		cout<<"\n show student data of"<<i+1;
	s[i].ShowStudentData();
	}
}
