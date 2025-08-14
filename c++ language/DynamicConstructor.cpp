#include<iostream>
using namespace std;
class maths{
	public:
		int a,b,c,d,e;
		maths(){
			a=10;
			b=20;
			c=30;
			d=40;
			e=50;
		}		 
		maths(int x, int y){
			a=x;
			b=y;
		}
};
main(){
	maths m1;
	cout<<"\n Size of m1=" << sizeof(m1);
	maths *m2 = new maths(90,89);
	cout << "\n size of m2 = " << sizeof(m2); 
}
