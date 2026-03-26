#include<iostream>
using namespace std;
void sortArray(int *arr, int size){
	int temp;
	for( int i=0; i<size; i++){
		for (int j=0; j<size-1; j++){
			if( arr[j] > arr[j+1] ){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
					}	}	}
	for(int i=0; i<size; i++){
		for (int j=0; j<size - 1; j++){
			if(  ( arr[j] % 2 == 0) && ( arr[j+1] % 2 != 0 ) ){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				}	}	}	}

int main(){
	int size;
	cout<<"Enter the size of array: ";
	cin>>size;
	int arr[size];
	
	cout<<"\n   -----------TAKING INPUT------------\n";
	for (int i=0; i<size; i++){
		cout<<"Enter element at index "<<i<<":	";
		cin>>arr[i];
	}
	cout<<"\n\n       ---------------------- ORIGNAL ARRAY ----------------------\n\n";
	for (int i=0; i<size; i++)	{
		cout<<"	"<<arr[i];}
		
	sortArray( arr, size);
	cout<<"\n\n       ---------------------- AFTER SORTING ----------------------\n\n";
	
	for (int i=0; i<size; i++){
		cout<<"	"<<arr[i];
	}
	
	return 0;	}