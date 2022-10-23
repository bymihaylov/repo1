#include <iostream>
using namespace std;

int main() {

        int year;
        cout << "Enter a year: ";
        cin >> year;

        bool areTheLastDigits00 = !(year % 100);
        
        
        if(areTheLastDigits00 == 1 && !(year % 400)){
            cout << year << " is a leap year." << endl;
        } else if (!(year % 4)) { 
           cout << year << " is a leap year." << endl;
        } else{
            cout << year <<  " is not a leap year!" << endl;
        }
}