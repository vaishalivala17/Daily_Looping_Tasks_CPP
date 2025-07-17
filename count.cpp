#include<iostream>
using namespace std;

int main(){

    // Count of Digits

    int n, count = 0, digit = 0;
    // Enter  : 123
    // Output : 3

    cout << "Enter the number for count the digit : " ;
    cin >> n;  

    while (n != 0){
        digit = n % 10 ;
        n = n / 10 ;
        count++;
    }
    cout << "Count of the Number is : " << count << endl ;
    
    return 0;
}