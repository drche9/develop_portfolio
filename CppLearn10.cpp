//Æ÷ÀÎÅÍ 01
#include<iostream>
int main() {
	using namespace std;
	int var = 10;
	int * p_var;
	p_var = &var;

	cout << "Value : var = " << var;
	cout << ", *p_var = " << *p_var << endl;
	cout << "Address : &var = " << &var;
	cout << ", p_var = " << p_var << endl;

	*p_var = 20;
	cout << "Value : var = " << var;
	cout << ", *p_var = " << *p_var << endl;
	cout << "Address : &var = " << &var;
	cout << ", p_var = " << p_var << endl;

	return 0;
}