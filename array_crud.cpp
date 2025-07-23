#include<iostream>
using namespace std;

int main(){
	// CURD ... 
	
	int size,choice,a,index,ele,i;
	
	cout << "Enter the size of Array = " ;
	cin >> size;
	
	int array[size];
	
	for(int i=0; i<size; i++){     // I = index value
		cout << "Enter the number of " << i << " Array = " ;
		cin >> array[i];
	}
	
	cout << endl ;
	cout << "--------------------" ;
	cout << endl ;
	cout << endl ;
	
	do{
		cout << endl << "Enter 1 for Insert value. " << endl ;
		cout << "Enter 2 for Read value. " << endl ;
		cout << "Enter 3 for Delete value. " << endl ;
		cout << "Enter 4 for Update value. " << endl ;
		cout << "Enter 5 for View. " << endl ;
		cout << "Enter 0 for Exit. " << endl ;
		
		cout << endl << "Enter the Number Of Your choice = " ;
		cin >> choice ;
		
		
		switch(choice){
			case 1: //INSERT
			
				cout << "Enter the Index Number for Insert new Element = " ;
				cin >> index;
				
				cout << "Enter the New Element = " ;
				cin >> ele;

				if(index<=size){
				for(int i=size-1; i>=index; i--){
					array[i+1] = array[i];
				}
					array[index] = ele ;
					size++ ;
					cout << endl << "Insert Done......" << endl ;	
					cout << "--------------------" ;
				}else{
					cout << "Enter Valid value...." << endl ;
				}
		
				break; 
			case 2: // READ
				for(int a=0; a<size; a++){
					cout << array[a] << " ," ;
				}
				cout << endl << "Read Done......" << endl ;	
				cout << "--------------------" ;
						
				break;
			case 3: //DELETE
				cout << "Enter the Index Number for Delete Value = " ;
				cin >> index;
				
				if(index<=size){
				for(int i=index; i<=size-1; i++){     //  0  1   2   3   4  5 
					array[i] = array[i+1];            //  10 20 [30] 40  50 60 
				}
					size-- ;		// size = 4 After delete
					cout << endl << "Delete Done......" << endl ;	
					cout << "--------------------" ;
				}else{
					cout << "Enter Valid value...." << endl ;
				}
				break;
			case 4: // UPDATE 
				
				cout << "Enter the Index Number for Update = " ;
				cin >> index;
				
				cout << "Enter the New Element for Update = " ;
				cin >> ele;
				
				if(index<=size){
					array[index] = ele ;
				}else{
					cout << "Enter Valid index value." << endl ;
				}
				
				cout << endl << "Update done........" << endl ;
				cout << "--------------------" ;
				
				break;
			case 5: // VIEW
				cout << "Current Array : ";
                for(int i = 0; i < size; i++) {
                    cout << array[i] << " ";
                }
				break; 
			default : 
				cout << "Enter valid value...." << endl;
				cout << "--------------------" ;
				break;
				
		}
	}while(choice != 0);
	

	
	
	return 0;
}
