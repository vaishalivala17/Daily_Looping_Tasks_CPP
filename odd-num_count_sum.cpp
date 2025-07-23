#include<iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter how many odd numbers you want: ";
    cin >> n;

    cout << "Odd numbers: ";
    int odd = 1;  // Start from the first odd number
    for (int i = 1; i <= n; i++) {
        cout << odd << " ";          // Print the current odd number : 1 3 5 7 9
        sum = sum + odd;             // Add to the sum  : 0+1=1, 1+3=4, 4+5=9, 9+7=16, 16+9=25..
        odd = odd + 2;               // Next odd number : 1=1, 1+2=3, 3+2=5, 5+2=7, 7+2=9... 
    }

    cout << "Sum = " << sum << endl;
    
    return 0;
}
