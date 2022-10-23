#include <iostream>
#include <cmath>
using namespace std;

/*
spring 3 March, 4 April, 5 May
summer 6 June, 7 July, 8 August
autumn 9 September, 10 October, 11 November
winter 12 December, 1 January, 2 February

*/

int main() {
        char isLinear;
        int a,b;
        double result; 
     
        cout << "1) Solve linear equation\n2) Solve quadratic equation\n\tEnter 1 or 2: ";
        cin >> isLinear;
        if (isLinear == '1') {
                // linear
                cout << "Enter coeff. a and b: ";
                cin >> a >> b;
                        if (a == 0){
                                if (b == 0){
                                        cout << "INF\n";
                                } else {
                                        cout << "NO\n";
                                }
                        } else if (b == 0){
                                        cout << "0\n"; 
                        } else {
                                        cout << -((double)b / (double)a) << endl;
                        }
                
                
        } else if (isLinear == '2'){
                // quadratic
                int c;
                cout << "Enter coeff. a, b, c: ";
                cin >> a >> b >> c;
                
                double discriminant = b * b - 4 * a * c;
                if (discriminant > 0){
                        double root1 = (- b + sqrt(discriminant)) / 2 * (double)a; 
                        double root2 = (- b - sqrt(discriminant)) / 2 * (double)a; 

                        cout << "Root 1: " << root1 << "\nRoot 2: " << root2 << endl;
                } else if(discriminant = 0){
                        double root = - b / 2 * (double)a;
                        cout << "Only one root: " << root << endl; 
                } else {
                        cout << "No solution" << endl; 
                }
                

        } else {
                cout << "Invalid option.\n"; 
        }
  }