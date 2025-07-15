#include<iostream>
using namespace std;

int main(){
    
    //  Print 1 To n Even numbers

    //  Enter  : 10
    //  Output : 2 4 6 8 10 

    int n;
    cout << "Enter the Number for print even numbers before N : " ;
    cin >> n;

    for(int i=1; i<=n; i++){
        if(i%2==0){
            cout << i << " " ;
        }
    }

    return 0;
}