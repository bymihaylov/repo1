#include <iostream>
using namespace std;
// Да се напише програма, която въвежда от клавиатурата цяло число n и масив от n реални числа. Да се намерят минималния и максималния елемент на масива.
int main(){
    int arraySize;
    int min, max;
    cin >> arraySize;
    int array[100];
    for(int i = 0; i <= arraySize; i++){
        cin >> array[i];
        if(array[i] == 0){
            max = array[i];
            min = array[i];
        } else if(array[i] > max){
            max = array[i];
        } else if(array[i] < min){
            min = array[i];
        }

    }

    cout << "MIN: " << min << "\t MAX: " << max;
    
   
    


}