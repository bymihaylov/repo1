#include <iostream>
#include <iomanip>
using namespace std;

struct Product{
    char description[32];  // описание на изделие
    int partNum;           // номер на изделие
    double cost;           // цена на изделие
};

void strCopy(const char src[], char dest[]){
    int i = 0;
    while(*src != '\0'){
        dest[i++] = *src;
        src++;
    }
    dest[i] = '\0';
}

int main(){
    Product screw_driver;
    Product hammer;

    screw_driver.partNum = 456;
    screw_driver.cost = 5.50;

    hammer.partNum = 456;
    hammer.cost = 5.50;

    cout << "Name \t partNum \t cost" << endl;
    cout << "Screw Driver \t " << screw_driver.partNum << "\t" << screw_driver.cost << endl;
    cout << "Hammer \t " << hammer.partNum << "\t" << hammer.cost << endl;

    Product arr[10]; // declaration
    char arrDesc[][13] = {"screw-driver", "hammer", "socket", "plier", "hand-saw"};
    int arrPartNum[5] = {456, 324, 485, 929, 536};
    double arrCost[5] = {5.50, 8.20, 5.75, 10.50, 7.45 };
    
    for (size_t i = 0; i < 5; i++)
    {
        strCopy(arrDesc[i], arr[i].description);
        arr[i].partNum = arrPartNum[i];
        arr[i].cost = arrCost[i];
    }
    
    for (size_t i = 0; i < 5; i++)
    {
        cout << setw(10) << "Description" << setw(10) << "partNum" << setw(10) << "cost" << endl;
        cout << setw(10) << arr[i].description << setw(10) << arr[i].partNum << setw(10) << arr[i].cost << endl; 
        cout << endl;
    }
}