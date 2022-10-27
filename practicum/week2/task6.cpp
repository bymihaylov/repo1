#include <iostream>
using namespace std;



int main() {
        int NumberOfUsbPorts, ram;
        int price;
        bool ssd = true;
        bool wouldBuy = true;
     
        cin >> price >> NumberOfUsbPorts >> ram >> ssd;

        if (ssd == false || ram < 8){
               if(price <= 800){
                        cout << "OK\n";
               } else{
                        cout << "NO\n";
               }
        } else if (NumberOfUsbPorts >= 3){
                if(price <= 1500 && price >= 1000){
                        cout << "OK\n";
                } else{
                        cout << "NO\n";
                }
        } else {
                cout << "NO\n";
        }

  }