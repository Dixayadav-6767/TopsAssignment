#include<iostream>
using namespace std;
class maths{
	public:
		int a,b;
		maths(){ // Simple constructor 
			a=100;
			b=200;
			cout<<"\n default constructor called";
		}
		maths(int x, int y){ // parameterized constructor
			a=x;
			b=y;
		} 
		maths(const maths &m3){
		a=m3.a;
		b=m3.b;
	}
	void show(){
		cout << "\n a = " << a << "\t b = " <<b;
	}
}; 
main(){
	maths m1,m2; // call default constructor
	maths m3(12,45);
	m3.show();
	maths m4=m1;
	cout << "\n m4 data member";
	m4.show();
}

