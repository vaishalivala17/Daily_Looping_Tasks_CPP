#include<iostream>
using namespace std;

//Print numbers from 1 to N with using a recursion
int printNumbers(int n){
    if(n <= 0){
        return 0;
    }
   // print numbers from 1 to n-1 beacuse we call first time on main function after call on recursion
    printNumbers(n-1); // 
    cout<< n << " ";   

}

int main(){
    int num;  

    cout << "Enter a positive integer: " << endl ;
    cin >> num ;

    if(num < 1){
        cout<< "Enter a positive integer." << endl ;
    }else{
        printNumbers(num);
        cout << endl;
    }

    return 0;
}
