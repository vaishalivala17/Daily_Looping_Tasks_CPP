#include <iostream>
using namespace std;

int main(){

		// *                                      * 
		// *  *                                *  * 
		// *  *  *                          *  *  * 
		// *  *  *  *                    *  *  *  * 
		// *  *  *  *  *              *  *  *  *  * 
		// *  *  *  *  *  *        *  *  *  *  *  * 
		// *  *  *  *  *  *  *  *  *  *  *  *  *  * 

	for(int i=1; i<=7; i++){
		for(int j=1; j<=i; j++){
			cout << " * " ;
		}
		for(int j=7; j>i; j--){
			cout << "   " ;
		}
		for(int j=7; j>i; j--){
			cout << "   " ;
		}
		for(int j=1; j<=i; j++){
			cout << " * " ;
		}
		cout << endl ;
	}
	for(int i=6; i<1; i++){
		for(int j=7; j>=i; j--){
			cout << " * " ;
		}
		for(int j=1; j<i; j++){
			cout << "  " ;
		}
		for(int j=1; j<i; j++){
			cout << "    " ;
		}
		for(int j=7; j>=i; j--){
			cout << " * " ;
		}
		cout << endl ;
	}
}