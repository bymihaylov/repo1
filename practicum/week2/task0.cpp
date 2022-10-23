#include <iostream>

int main() {
    
    int num1, num2;
    char operation;
    std::cin >> num1 >> operation >> num2;

    switch (operation)
    {
    case '+':
        std::cout << (num1 + num2) << std::endl;
        break;
        
    case '-':
        std::cout << (num1 - num2) << std::endl;
        break;
    
    case '*':
        std::cout << (num1 * num2) << std::endl;
        break;
        
    case '/': 
        double doubleNum1 = num1;
        double doubleNum2 = num2;
        std::cout << (doubleNum1 / doubleNum2) << std::endl;
        break;
        
        
    }
}
