#include <iostream>
using namespace std;

int main(){
    //Print 1 to N numbers

    //  Enter  : 5
    //  Output : 1, 2, 3, 4, 5 
    int i = 1, n;

    cout << "Enter the n Number for print 1 to n Numbers : " ;
    cin >> n;

    while(i<=n){
        cout << i << " " ;
        i++;
    }

    return 0;
}
