#include <iostream>
using namespace std;

/*
spring 3 March, 4 April, 5 May
summer 6 June, 7 July, 8 August
autumn 9 September, 10 October, 11 November
winter 12 December, 1 January, 2 February

*/

int main() {
        int month;
        cin >> month;
        if(month > 12){
                cout << month % 12;
        } else {
                switch(month){
                        case 12: case 1: case 2:                // winter
                                cout << "winter" << endl;
                                break;
                        case 3: case 4: case 5:
                                cout << "spring" << endl;       // spring
                                break;
                        case 6: case 7: case 8:                 // summer
                                cout << "summer" << endl;
                                break;
                        case 9: case 10: case 11:               // authum             
                                cout << "autumn" << endl;
                                break;
                }
        }
}