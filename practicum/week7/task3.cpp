#include <iostream>
using namespace std;

void print(const int arr[], int len){
    for (size_t i = 0; i < len; i++)
    {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }   
}

void copy(int *ptr, int value){
    *ptr = value;
}
void mergeRightAfter(int oldArray[], int from, int len, int *ptrNewArray){
    for (int i = from; i < len; i++)
    {
        copy(ptrNewArray, oldArray[i]);
    }
    
}
void merge(int arr1[],int lenArr1,int arr2[],int lenArr2,int array[],int lenArrayNew){
    int minimalLen = lenArr1 < lenArr2 ? lenArr1 : lenArr2;
    int i = 0;
    int j = 0;
    int *ptr = array;
    while(i < minimalLen && j < minimalLen){
        if(arr1[i] < arr2[j]){
            copy(ptr, arr1[i]);
            ptr++;
            i++;
        } else{
           copy(ptr, arr2[j]);
           ptr++;
           j++;
        }
    }

    int index;
    int finalLen;
    if(minimalLen == lenArr1) {  //arr2 is bigger (than arr1)
        index = j;
        finalLen = lenArr2;
        mergeRightAfter(arr2, index, finalLen, ptr);
    } else {                     //arr1 is bigger (than arr2)
        index = i;
        finalLen = lenArr1;
        mergeRightAfter(arr1, index, finalLen, ptr);
    }
    
}

void populateArray(int array[], int len){
    for (int i = 0; i < len; i++) {
        cin >> array[i];
    }
    
}

int main(){
    int lenArr1, lenArr2;
    int arr1[50];
    int arr2[50];
    int array[100];

    cout << "Enter the size of arr1[?]: ";
    cin >> lenArr1;
    populateArray(arr1, lenArr1); 
    cout << "Enter the size of arr2[?]: ";
    cin >> lenArr2; 
    populateArray(arr2, lenArr2);

    int lenArrayNew = lenArr1+lenArr2;

    merge(arr1, lenArr1, arr2, lenArr2, array, lenArrayNew);
    print(array, lenArrayNew);
}