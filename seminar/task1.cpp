#include <iostream>
using namespace std;

int main() {
    int n, year;
    int answer = 0;
    cin >> n;
    
    for(int i = 0; i < n; i++ ){
        cin >> year;
        

        bool isLeapYear = !(year % 4) && (year % 100) || !(year % 400);
        if(isLeapYear){
            answer++;
        }
         
    }
    cout << answer << endl;
}