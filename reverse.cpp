#include<iostream>
using namespace std;

int main(){

    // Reverse of the Number 
    int n , digit = 0, reverse = 0;

    // Enter  : 123
    // Output : 0*10+3 = 3,  3*10+2 = 32, 32*10+1 = 321

    cout << "Enter the number for revrse : " ;
    cin >> n;              

    while(n != 0){
        digit = n % 10;
        reverse = reverse * 10 + digit;  
        n = n / 10;      //  123 = 123/10=12,  12/10= 1
    }
    cout << "Reverse of the Number is : " << reverse << endl ;
    return 0;
}