#include<iostream>

using namespace std;

void sortArray1(int *arr, int s){
	int temp;
	for(int i=0; i<s; i++)	{
		for (int j=0; j<s-1; j++)	{
			if(arr[j+1]<arr[j])
			{
				temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;	}	}	}
}

void sortArray2(int *arr, int s){
	int temp;
	for(int i=0;i<s;i++)
	{
		for(int j=0; j<s-1; j++)
		{
			if( (arr[j]%2==0) && (arr[j+1]%2!=0))
			{
				temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;	}	}	}
}

int main()
{
	int s;
	cout<<"Enter the size of array: ";
	cin>>s;
	int arr[s];
	cout<<"\nEnter the elements for array: "<<endl;
	for ( int i=0; i<s; i++){
		cin>>arr[i];
	}
		cout<<"\nThe Array is: "<<endl;
	
	for ( int i=0; i<s; i++)	{
		cout<<"  "<<arr[i];
	}
	
	cout<<"\n------------------------------------------\n";
	cout<<"\nAFTER SORTING FOR ASCENDING ORDER: "<<endl;
	
	sortArray1( arr, s);	
	for ( int i=0; i<s; i++)	{
		cout<<"  "<<arr[i];
	}		
	cout<<"\n------------------------------------------\n";
	cout<<"\nAFTER SORTING FOR ODD-EVEN ORDER: "<<endl;
	
	sortArray2( arr, s);	
	for ( int i=0; i<s; i++)
	{
		cout<<"  "<<arr[i];
	}
	
	
	
	return 0;
}