#include<iostream>
using namespace std;

int main(){
    // TABLE OF THE NUMBER
    int n;

    cout << "Enter the Number for Print the Table : " ;
    cin >> n;

    for(int i=1; i<=10; i++){
        cout << n << " * " << i << " = " << n*i << endl;
    }cout << endl;

    return 0;
}
