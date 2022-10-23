#include <iostream>
using namespace std;

int main(){
	int num1;
	int num2;
	int temp;

	cout << "Enter Num1: ";
	cin >> num1;
	cout << "Enter Num2: ";
	cin >> num2;
	cout << "Num1: " << num1 << endl << "Num2: " << num2 << endl;

	temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "Num1: " << num1 << endl << "Num2: " << num2 << endl;


	return 0;
}
