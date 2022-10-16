#include <iostream>
using namespace std;

int main(){
	int a;
	int b;
	int c;
	
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	cout << "Enter c: ";
	cin >> c;
	/*
	a + b > c
	a + c > b
	b + c > a
	*/

	int result = (a + b) > c && (a + c) > b && (b + c) > a;

	cout << boolalpha << result << endl;


	return 0;
}
