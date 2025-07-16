#include <iostream>
using namespace std;

int main(){

     int n, fact = 1;

     cout << "Enter the Number for factoreal : " ; // 5! = 5*4*3*2*1 = 120
     cin >> n;
 
     // WHILE LOOP START: FACTORIAL -- 
     while(n>=1){
          fact = fact * n;
          cout << n << " * " ;
          n--;
     }cout << endl ;
     cout << "Factorial of Number is: " << fact << endl;

     return 0; 
 
}