#include <iostream>
using namespace std;

void bigBearToBase14(const char str[]){
    while (*str != '\0')
    {
        cout << str;
        str++;
    }
    
}

int main(){
    char bigBear[] = "0abcdefghijklm";
    char base14[] =  "0123456789abcd";

    char test1[] = "m.l.jej";
    char test[] = {'A','B','C','\0'};

    //bigBearToBase14(test1);
    char *ptr = test;
    while (*ptr != '\0')
    {
        cout << ptr;
        ptr++;
    }
    

}