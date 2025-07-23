#include <iostream>
using namespace std;

int main(){

    // 41 
    // 41 42
    // 41 42 43
    // 41 42 43 44
    // 41 42 43 44 45

    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            cout << "4" << j << " " ;
        }
        cout << endl ;
    }
    cout << endl;
    
    // 11
    // 12 13
    // 14 15 16
    // 17 18 19 20

    int num = 11;        // Starting number

    for (int i=1; i<=4; i++) {
        for (int j=1; j<=i; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    cout << endl;

    // 11 
    // 11 12
    // 11 12 13
    // 11 12 13 14

    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            cout << j << " ";
        }
        cout << endl ;
    }
    cout << endl;

    //         5 
    //       4 5 
    //     3 4 5 
    //   2 3 4 5 
    // 1 2 3 4 5 

    for(int i=5; i>=1; i--){
        for(int s=1; s<i; s++){
            cout << "  " ; // for add space
        }
        for(int j=i; j<=5; j++){
            cout << j << " " ; 
        }
        cout << endl ;
    }
    cout << endl;

    //   1 0 1 0 1 
    //     1 0 1 0
    //       1 0 1
    //         1 0
    //           1
          
    for (int i=1; i<=5; i++) {
        for(int s=1; s<=i; s++){
            cout << "  " ;
        }
        for (int j=5; j>=i; j--) {
            if(j%2==0){
                cout << "0 " ;
            }else{
                cout << "1 ";
            }
        }
        cout << endl;
    }
    cout << endl;

    //          5 
    //        4 5 4
    //      3 4 5 4 3
    //    2 3 4 5 4 3 2
    //  1 2 3 4 5 4 3 2 1

    for(int i=5; i>=1; i--){
        for(int s=1; s<i; s++){
            cout << "  " ; // for add space
        }
        for(int j=i; j<=5; j++){
            cout << j << " " ; 
        }
        for(int v=4; v>=i; v--){
            cout << v << " " ; 
        }
        cout << endl ;
    }
    cout << endl; 

    // 0    : 1*1 = 1-1=0
	// 3 8  : 2*2 = 4-1=3 or 3*3 = 9-1=8
	// 15 24 35
	// 48 63 80 99
	// 120 143 168 195 224
	
	
	//    baki           1
	//       2       1 2
	//     3 2       1 2 3
	//   4 3 2       1 2 3 4
	// 5 4 3 2       1 2 3 4 5
	//   4 3 2       1 2 3 4
	//     3 2       1 2 3
	//       2       1 2
	//                1	
    for (int v=1; v<5; v++){
        for(int n=1; n<=v; n++){ // n=1,v=1: n=1+1=2,v=1+1=2: n=2+1=3,v=2+1=3: n=3+1=4,v=3+1=4: n=4+1=5,v=4+1=5
            cout << n << " " ; // 1,  1 2,  1 2 3,  1 2 3 4,  1 2 3 4 5
        }
        cout << " " << endl;
    }
    for (int v=5; v>=1; v--){
        for(int n=1; n<=v; n++){
            cout << n << " " ;
        }
        cout << " " << endl;
    }
    cout << endl;

	// 5 4 3 2 1
	// 4 3 2 1
	// 3 2 1
	// 2 1
	// 1
	// 2 1
	// 3 2 1
	// 4 3 2 1
	// 5 4 3 2 1

    cout << endl;
    cout << endl;

    for (int v=1; v<5; v++){
    for(int n=6-v; n>=1; n--){ // n=1,v=1: n=1+1=2,v=1+1=2: n=2+1=3,v=2+1=3: n=3+1=4,v=3+1=4: n=4+1=5,v=4+1=5
        cout << n << " " ; // 1,  1 2,  1 2 3,  1 2 3 4,  1 2 3 4 5
    }
    cout << " " << endl;
    }
    for (int v=5; v>=1; v--){
        for(int n=6-v; n>=1; n--){
            cout << n << " " ; 
        }
        cout << " " << endl;
    }
    cout << endl;
	

    return 0;
}