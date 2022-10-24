#include <iostream>
using namespace std;

int main() {
    unsigned int a, b, firstDigit, secondDigit, thirdDigit;
    
    cin >> a >> b;
    
    while(a <= b){
         //cout << a << "\t" << (a / 10) << (a % 10) << endl;
         firstDigit = a % 10;
         secondDigit = (a % 100) / 10;
         thirdDigit = a / 100;
         
         if(firstDigit != secondDigit && firstDigit != thirdDigit) 
            cout << a << ", ";
            //cout << "\t" << firstDigit << "\t" << secondDigit << "\t" << thirdDigit << endl;
         a++;
    }
    
    cout << "\n";
}
