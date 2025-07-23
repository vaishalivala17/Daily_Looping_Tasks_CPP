#include <iostream>
using namespace std;

int main(){
	
	int sum = 0;
	int array[3][3] = {{1,2,3},  {4,5,6}, {7,8,9}};
	int array2[3][3]= {{11,12,13}, {14,15,16}, {17,18,19}};
	int ans[3][3];
	
	// 1 2 3        11 12 13        12 14 16
	// 4 5 6    +   14 15 16   =    18 20 22
	// 7 8 9        17 18 19        24 26 28
	
	for(int i=0; i<3; i++){
		for(int j=0; j<=2; j++){
			sum = array[i][j] + array2[i][j];
			ans[i][j] = sum ;
		}
		cout << endl ;
	}
	cout << endl ;
	
	for(int i=0; i<3; i++){
		for(int j=0; j<=2; j++){
			cout << array[i][j] << " ";
		}
		cout << endl ;
	}
	cout << endl ;
	
	for(int i=0; i<3; i++){
		for(int j=0; j<=2; j++){
			cout << array2[i][j] << " " ;
		}
		cout << endl ;
	}
	cout << endl ;
	
	for(int i=0; i<3 ;i++){
		for(int j=0; j<=2; j++){
			cout << ans[i][j] << " " ;
		}
		cout << endl ;
	}
	
	
	return 0;
}
          