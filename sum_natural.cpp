#include<iostream>
using namespace std;

int main(){

    //  Sum of First N Natural Numbers

    // Enter : 5 
    // 1+ 2+ 3+ 4+ 5 = 15
    
    int n, sum = 0;

    cout << "Enter the Numbers for sum :" ;
    cin >> n;

    for(int i=1; i<=n; i++){
        sum = sum + i;
        cout << i << " + " ;
    }cout << " = " << sum ;

    return 0;
}