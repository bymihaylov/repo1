#include <iostream>


int main(){
	double number;
	double intervalStart;
	double intervalEnd;

	
	std::cout << "Enter number: ";
	std::cin >> number;
	std::cout << "Enter intervalStart: ";
	std::cin >> intervalStart;
	std::cout << "Enter intervalEnd: ";
	std::cin >> intervalEnd;

	bool isItTrue = intervalStart <= number && number <= intervalEnd;
	std::cout << std::boolalpha << isItTrue << std::endl;

	
}
