#include <iostream>
using namespace std;

int main() {
    unsigned int number, getDigit;
    bool isPalindrom = true;
    
    cin >> number;
    
    while((number / 10) != 0){
         getDigit = number % 10;
         //secondDigit = (a % 100) / 10;
         //thirdDigit = a / 100;
         
         //if(firstDigit != secondDigit && firstDigit != thirdDigit) 
            cout << number << ", ";
            //cout << "\t" << firstDigit << "\t" << secondDigit << "\t" << thirdDigit << endl;
         number = number / 10;
    }
    
    cout << "\n";
}
