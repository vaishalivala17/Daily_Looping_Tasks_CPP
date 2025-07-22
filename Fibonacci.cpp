#include<iostream>
using namespace std;

int main(){
    // Fibonacci series from 1 to n
    
    int n, a=0, b=1, c;
    
    cout << "Enter the number of terms in Fibonacci series: ";
    cin >> n;
    
    cout << "Fibonacci Series: " << a << ", " << b;
    
    for(int i=2; i<n; i++){
        c = a + b;  // c = 0+1=1, 1+1=2, 1+2=3, 2+3=5, 3+5=8
        cout << ", " << c;
        a = b;      // a = 1, a = 2, a = 3, a = 5
        b = c;      // b = 1, b = 2, b = 3, b = 5
    }
    
    cout << endl;
    return 0;
}
