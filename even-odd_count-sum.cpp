#include <iostream>
using namespace std;

int main(){
	
	int num, count = 0, sum = 0, count2=0;
	
	for(int i=0; i<10; i++){
		cout << "Enter the number = " ;
		cin >> num ;
	}
	
	for(int i=0; i<10; i++){
		if(num % 2 == 0){
			sum = sum + num;
			count++;
		}else if(num/2!=0){
			sum = sum + num;
			count2++;
		}else{
			cout << " " ;
		}
	}
	
	cout << "Count of even number is = " << count ;
	cout << "Sum of even number is = " << sum ;
	cout << "Count of odd number is = " << count2 ;
	cout << "Sum of odd number is = " << sum ;
	
	return 0;
}