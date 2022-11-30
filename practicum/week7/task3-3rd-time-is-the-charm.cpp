#include <iostream>
using namespace std;

int merge(int firstSortedArray[], int lenghtArray1, int secondSortedArray[], int lenghtArray2, int result[], int lenghtArrayResult){
    int i = 0;  //Index needed for firstSortedArray[]
    int j = 0;  //Index for secondSortedArray[]
    for(int k = 0; k < lenghtArrayResult; k++){
        if(i < lenghtArray1){
            if(j < lenghtArray2){
                result[k] = (firstSortedArray[i] < secondSortedArray[j]) ? firstSortedArray[i++] : secondSortedArray[j++];
            } else{ // По-големият масив е firstSortedArray[]
                result[k] = firstSortedArray[i++];
            }
        } else{ //По-голеият масив е secondSortedArray[]
                result[k] = secondSortedArray[j++];
        }
    }
}

void print(const int array[], size_t len){
    for (size_t i = 0; i < len; i++)
    {
        cout << "result[" << i << "] = " << array[i] << endl;
    }
    
}

int main(){
    const int MAX_SIZE = 50;
    int sortedArray1[MAX_SIZE] = {5, 10, 15};
    int sortedArray2[MAX_SIZE] = {3, 6, 9, 31, 41};
    int lenghtArray1 = 3; 
    int lenghtArray2 = 4;
    int result[2 * MAX_SIZE];
    int lenghtArrayResult = lenghtArray1 + lenghtArray2;

    merge(sortedArray1, lenghtArray1, sortedArray2, lenghtArray2, result, lenghtArrayResult);
    print(result, lenghtArrayResult);
}