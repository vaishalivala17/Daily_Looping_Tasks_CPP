#include <iostream>
using namespace std;

int main(){
    
     // WHILE LOOP START: SUM

     int n, va=1, sum = 0;
     int temp = n;  // store orignal value
 
     cout << "Enter the Number for end of sum: " << endl;
     cin >> n;
 
     // while(n>0){
     //     int num = n % 10;  // 541%10=1, 54%10=4, 5=5 ,we get number for sum
     //     n = n / 10;  // 541/10=54, 54/10=5, 5=0 remove the last number
     //     sum= sum + num;  // 0+1 =1, 1+4=5, 5+5=10    SUM OF NUM IS: 10
     //     va++;
     // }
     // cout << "Sum of Number is: " << sum ;
 
    //  DO WHILE LOOP START: SUM
    
    // do{
    //     int num = n % 10; // 541%10=1, 54%10=4, 5=5 ,we get number for sum
    //     n = n / 10; // 541/10=54, 54/10=5, 5=0 remove the last number
    //     sum = sum + num;  // 0+1 =1, 1+4=5, 5+5=10    SUM OF NUM IS: 10
    //     va++;
    // } while(n>0);
    // cout << "Sum of Number is: " << sum << endl ;

    // FOR LOOP START : SUM

    // for(;n>0;va++){
    //     int num = n % 10; // 541%10=1, 54%10=4, 5=5 ,we get number for sum
    //     n = n / 10; // 541/10=54, 54/10=5, 5=0 remove the last number
    //     sum = sum + num; // 0+1 =1, 1+4=5, 5+5=10    SUM OF NUM IS: 10 
    // }
    // cout << "Sum of Number is: " << sum << endl;


}