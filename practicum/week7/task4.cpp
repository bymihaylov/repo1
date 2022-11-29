#include <iostream>
using namespace std;
//Напишете функция, която приема два масива и един указател, който пренасочете да сочи масива, чиято сума на елементите е минимална.
int sum(int arr[], int len){
    int sum = 0;
    for (size_t i = 0; i < len; i++)
    {
        sum += arr[i];
    }
    return sum;
    
}
int *changePtrToMinSum(int arr1[], int len1, int arr2[], int len2, int *ptr){
    ptr = sum(arr1, len1) < sum(arr2, len2) ? arr1 : arr2;
    return ptr;
}

int main(){
    int array[3] = {1, 2, 4};
    int array2[3] = {10, 20, 30};

    int *ptr = nullptr;
    int *pointer = changePtrToMinSum(array, 3, array2, 3, ptr);
    cout << pointer << endl;
    

}