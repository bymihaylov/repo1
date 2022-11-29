#include <iostream>
using namespace std;

void print(const int array[], int len){
    for (int i = 0; i < len; i++)
    {
        cout << array[i] << endl;
    }
    
}

void swap(int *x, int *y){
    *x = *x * *y;
    *y = *x / *y;
    *x = *x / *y;  
}

void task0(){
    int a = 10;
    int b = 99;
    swap(a, b);
    cout << a << endl << b;
}
void reverse(int array[], int len){
    int *ptr1 = array;
    int *ptr2 = ptr1 + len - 1;

    while(ptr1 < ptr2){
        swap(ptr1, ptr2);
        ptr1++;
        ptr2--;
    }   
}
void task1(){
    // Да се напише функция , която приема като аргументи указател към масив и размера на масива и го обръща.
    //Например, а ={1, 2, 3, 4, 5} → reverse(a, 5) → a : 5, 4, 3, 2, 1.
    
    const int ARRAY_MAX_SIZE = 10;
    int array[ARRAY_MAX_SIZE] = {10, 20, 30, 40, 50, 60};
    print(array, 6);
    cout << endl;
    reverse(array, 6);
    print(array, 6);
    
}

int * task2_ReturnPtr(int arr[], int len, int searchFor){

   int *ptr = arr;
   int *ptrUpperBound = ptr + len - 1;
   while(*ptr != searchFor && ptr < ptrUpperBound) {
    ptr++;
   }
   if(*ptr != searchFor && ptr >= ptrUpperBound){
        return nullptr;
   } else{
       return ptr;
   }
}

void task2(){
   const int ARRAY_SIZE = 10;
   int arr[ARRAY_SIZE] = {10, 20, 30, 40, 50, 60, 40};
   int len = 7;
   int searchFor = 40;
   cout << task2_ReturnPtr(arr, len, searchFor);
}

int main(){
    //task0();
    //task1();
    task2();
}
