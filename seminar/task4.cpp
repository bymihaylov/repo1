#include <iostream>
using namespace std;

// more work

int main() {
    unsigned int number, getDigit;
    bool isPalindrom = true;
    
    cin >> number;
    
    while((number / 10) != 0){
         getDigit = number % 10;
        
            cout << number << ", ";
        
         number = number / 10;
    }
    
    cout << "\n";
}
