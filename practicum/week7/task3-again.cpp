#include <iostream>
using namespace std;

void print(const int arr[], int len){
    for (size_t i = 0; i < len; i++)
    {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }   
}

void merge(int a[], int lenA, int b[], int lenB, int res[], int lenRes){
    int ai = 0;
    int bi = 0;

    for (size_t i = 0; i < lenRes; i++) {
        if(ai < lenA){
            if(bi < lenB){
                res[i] = (a[ai] < b[bi]) ? a[ai++] : b[bi++];
            } else{
                res[i] = a[ai++];
            }
        } else{
            if(bi < lenB){
                res[i] = b[bi++];
            }        
        }
    }
    
}

int main(){
    const int len1 = 3;
    const int len2 = 4;
    const int lenRes = len1 + len2;
    int a[len1] = {1, 3, 5};
    int b[len2] = {4, 15, 23, 23};
    int res[lenRes];
    
    merge(a, len1, b, len2, res, lenRes);    
    print(res, lenRes);
}