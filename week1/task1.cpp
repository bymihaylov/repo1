#include <iostream>
using namespace std;

int main(){
	int num;
	cin >> num;
	cout << "First digit:" << num / 100 << endl;
	cout << "Second digit:" << num / 10 % 10<< endl;
	cout << "Third digit:" << num % 10 << endl;

	return 0;
}
