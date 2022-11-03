#include <iostream>
using namespace std;
// По въведени от стандартния вход две цели числа да се изведе произведението в интервала между тях.
int main(){

    int firstNumber, secondNumber;
    int multiply[100];
    cin >> firstNumber >> secondNumber;

    multiply[0] = 1;

    int howManyNumbersInInterval = secondNumber - firstNumber;  // Need to check if firstNumber > secondNumber

    for(int i = 1; i < howManyNumbersInInterval; i++){
         multiply[i] = multiply[i - 1] * i;
    }

    cout << multiply[howManyNumbersInInterval] << endl;

    // int number;
    // cin >> number;
    // int sum[100];
    // sum[0] = 0;
    // for(int i = 1; i <= number; i++){
    //     sum[i] = sum[i - 1] + i; 
    // }
    // // Принтиране
    // for(int i = 1; i <= number; i++)
    //     if(i < number)
    //         cout << i << " + ";
    //     else
    //         cout << i << " ";
    
    // cout << " = " << sum[number];

}