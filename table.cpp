#include <iostream>
using namespace std;

int main(){
    int n, va=1, sum=0 ;
    int temp = n; // store orignal value 

    // WHILE LOOP START: TABLE 
    int table;

    cout << "Enter the Number for table : " << endl; 
    cin >> n;
 
    while(va<=10){
        table = n * va;
        cout << n << " * " << va << " = " << table << endl;
        va++;
    }

    //  DO WHILE LOOP START: TABLE 

    do{
        table = n * va;
        cout << n << " * " << va << " = " << table << endl;
        va++;
    } while(va<=10);
   
     // FOR LOOP START FOR TABLE  
                 
    for(va; va<=10; va++){
            table = n * va;
            cout << n << " * " << va << " = " << table << endl;
        }
 

}