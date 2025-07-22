#include <iostream>
using namespace std;

int main() {
    int n;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> n;   // 2

    if (n <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i <= n / 2; i++) {  // 2 <= 2/2= 0 , loop  2 to 0
            if (n % i == 0) {   // 2%2==0 
                isPrime = false;
                break;
            }
        }    }
        
    if (isPrime) {
        cout << "The number is Prime Number." << endl;
    } else {
        cout << "The number is Not Prime Number." << endl;
    }

    return 0;
}
