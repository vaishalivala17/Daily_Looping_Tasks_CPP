#include <iostream>
using namespace std;

int main(){
   

    int va=1;

    // PRINT THE NUM / BY 3-RED AND / BY 5-WHITE AND / BY BOTH FOR RED & WHITE 

    // WHILE LOOP START

        while(va<=100){
        if(va%3==0 && va%5==0){
            cout << " Red & White " << endl;
        }
        else if(va%3==0){
            cout << " Red " << endl;
        }
        else if(va%5==0){
            cout << " White " << endl;
        }
        else{
            cout << va << endl;
        }
        va++;
       }

    // DO-WHILE LOOP START
    do{
        if(va%3==0 && va%5==0){
                    cout << " Red & White " << endl;
                }
                else if(va%3==0){
                    cout << " Red " << endl;
                }
                else if(va%5==0){
                    cout << " White " << endl;
                }
                else{
                    cout << va << endl;
                }
                va++;
    }while(va<=100);
  
   // FOR LOOP START

    for(va;va<=100;va++){
        if(va%3==0 && va%5==0){
                    cout << " Red & White " << endl;
                }
                else if(va%3==0){
                    cout << " Red " << endl;
                }
                else if(va%5==0){
                    cout << " White " << endl;
                }
                else{
                    cout << va << endl;
                }
    }
}