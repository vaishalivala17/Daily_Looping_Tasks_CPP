//  If the reversed number is equal to the original number, then it is a palindrome

#include<iostream>
using namespace std;

int main(){
    //- Check if a number is a palindrome

    int n, digit, rev = 0;

    
    cout << "Enter a Number: ";
    cin >> n;
    int org = n;  // Save the original value of n
    
    while( n != 0){
    digit = n % 10 ;
    rev = rev * 10 + digit ;
    n = n / 10 ;
    };

    cout << "Reversed Number: " << rev << endl ;

    if(rev == org){
        cout << "The number is a Palindrome." << endl;
    } else {
        cout << "The number is not a Palindrome." << endl;
    }

    return 0;
}