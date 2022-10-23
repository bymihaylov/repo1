#include <iostream>
using namespace std;

int main() {

        char character;
        cout << "Enter symbol: ";
        cin >> character;
        int symbolInt = character;
        cout << character << endl;
        // dec 65  - 90 -> A - Z    UPPERCASE
        // dec 97 - 122 -> a - z    lowercase
        if (symbolInt >= 65 && symbolInt <= 90){

                character = symbolInt + 32;
                cout << character << endl;

        } else if (symbolInt >= 97 && symbolInt <= 122){

                character = symbolInt - 32;
                cout << character << endl;

        } else {
            
            cout << character << " is not a letter" << endl;
        }
        
}