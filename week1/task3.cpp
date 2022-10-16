#include <iostream>
using namespace std;

int main(){
	int num1;
	int num2;

	cout << "Enter Num1: ";
	cin >> num1;
	cout << "Enter Num2: ";
	cin >> num2;
	int result = num1 / num2;
	//boolalpha

	cout << boolalpha << result << endl;
	//cout << (result == 0);

	return 0;
}
