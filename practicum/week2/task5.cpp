#include <iostream>
using namespace std;



int main() {
        int month, year;
        bool isLeapYear = false;
     
        cin >> month >> year;

        isLeapYear = !(year % 4) && (year % 100) || !(year % 400);
       
        
        switch(month){
                case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                        cout << 31 << endl;
                        break;
                case 4: case 6: case 9: case 11:
                        cout << 30 << endl;
                        break;
                case 2:
                        if(isLeapYear){
                                cout << 29 << endl;
                                break;       
                        } else {
                                cout << 29 << endl;
                                break;
                        }        
                default:
                        cout << "Invalid input." << endl;

                }
  }