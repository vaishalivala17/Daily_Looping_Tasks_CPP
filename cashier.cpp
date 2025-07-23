#include <iostream>
using namespace std;

int main(){
    
    int amount;

    cout << "Enter the money value for exchange : " ;
    cin >> amount ;

    int array[10] = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
   
    cout << "The curruncy you recieve is : " << amount << endl ;
    for (int i = 0; i < 10 ; i++){
        if ( amount >= array[i] ){
            int count = amount / array[i];      // count = 515 / 500 = 1 : 15/10 = 1 : 5/5 = 1
            amount = amount % array[i];      // amount = 515 % 500 = 15 : amount = 15..5..
            cout << array[i] << " * " <<  count << " = " << array[i] * count << endl;
        }
    }

    return 0 ;
}