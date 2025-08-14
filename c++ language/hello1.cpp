#include<iostream>
using namespace std;
int main() {
	//cout << "hello world";
//	int age;
//	cout << "Enter the age: ";
//	cin >> age ;
//	cout << "your age is " << age << " years old.";
//	

	int number;
	cout << "Enter the number: ";
	cin >> number;
	
	if(number > 0){
		cout << "number is positive number";
	} else if (number < 0){
		cout << "number is Negative number";
	} else {
		cout << "its is a zero";
	}
}
