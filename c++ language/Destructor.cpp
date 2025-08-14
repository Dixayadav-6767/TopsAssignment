#include<iostream>
using namespace std;
class maths{
	public:
		maths(){
			cout << "\n default Constructor called";
		}
		void display(){
			cout<<"\n display method called";
		}
		~maths(){
			cout << "\n destructor method called";
		}
};
int main(){
	maths m1;
	m1.display();
}
