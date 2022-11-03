#include <iostream>
using namespace std;

int main(){
    int howManyNumbers;
    cin >> howManyNumbers;
    int array[100];

    for(int i = 0; i < howManyNumbers; i++){
        cin >> array[i];
    }
   
    for(int i = howManyNumbers - 1; i >= 0; i--){
        cout << array[i] << " ";
    }

}