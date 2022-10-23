#include <iostream>

int main(){
	int a;
	int b;
	int c;

	
	std::cout << "Enter a: ";
	std::cin >> a;
	std::cout << "Enter b: ";
	std::cin >> b;
	std::cout << "Enter c: ";
	std::cin >> c;

	if(a == b || a == c || b == c) {
		std::cout << "Please enter different numbers.\n";
		return 0;	// Exit
	}

	if (a > b) {
		if (a > c){
			std::cout << a << " - max\n";
			if (b > c){								// a > b > c
				std::cout << c << " - min\n";
				return 0;	// Exit
			} else {								// a > c > b
				std::cout << b << " - min\n";
				return 0;	// Exit
			}
		} else {									// c > a > b
			std::cout << c << " - max\n";
			std::cout << b << " - min\n";
		}
	} 
	else if (b > c){								// b > a, b > c 
		std::cout << b << " - max\n";
		if (a > c){									// b > a > c
			std::cout << c << " - min\n";
		} else {									// b > c > a
			std::cout << a << " - min\n";
		}
	} 
	else {											// c > b > a
		std::cout << c << " - max\n";
		std::cout << a << " - min\n";
	}
}