#include <iostream>
using namespace std;

int main(){
	int num1;
	int num2;
	
	cout << "Enter Num1: ";
	cin >> num1;
	cout << "Enter Num2: ";
	cin >> num2;
	int multiply = num1 * num2;

	int lastDigit = multiply % 10;
	int checkEven = lastDigit % 2; 

	cout << multiply << endl << lastDigit << endl << !checkEven << endl;


	return 0;
}
