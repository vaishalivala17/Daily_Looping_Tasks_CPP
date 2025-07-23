#include <iostream>
using namespace std;

int main(){
	// Static array's length

	int sum = 0;
	int array[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};      // 1 int = 4 bytes so 9 int = 36 bytes
	int length = sizeof(array) / sizeof(array[0][0]);   // 9 ele*4 bytes = 36 / 4 = 9 elements

	cout << "Length of Array = " << length << endl ;    // length = 9 elements
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			sum = sum + array[i][j];                    // sum of elements
		}
	} 
	
	cout << "Sum of Array Elements is = " << sum << endl ; 
	float avg;
	
	avg = sum / length ;   // 45/9 = 5
	cout << "Avrage of array elements is = " << avg << endl ;
	
}
