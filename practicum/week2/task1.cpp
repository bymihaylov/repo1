#include <iostream>
using namespace std;

main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    int subtract = (year / 100) * 100;
    bool checkFor00 = year - subtract == 0;

    if(checkFor00 && !(year % 400)){
        cout << year << " e visokosna.\n";
    }  
    if (year % 4){
        cout << year << " e visokosna.\n";
    }
}
// ne raboti