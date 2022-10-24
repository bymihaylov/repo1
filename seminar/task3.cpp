#include <iostream>
using namespace std;

int main() {
    unsigned int a, b, firstDigit, secondDigit, thirdDigit;
    
    cin >> a >> b;
    
    while(a <= b){
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
