#include <iostream>
using namespace std;
// По въведено число n и намерете сумата на от n до 0;
int main(){
    int number;
    cin >> number;
    int sum[100];
    sum[0] = 0;
    for(int i = 1; i <= number; i++){
        sum[i] = sum[i - 1] + i; 
    }
    // Принтиране
    for(int i = 1; i <= number; i++)
        if(i < number)
            cout << i << " + ";
        else
            cout << i << " ";
    
    cout << " = " << sum[number];

}