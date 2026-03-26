#include<iostream>
using namespace std;

int main()
{
	int n;
	int d=2;
	
//	cout<<"ENTER THE SIZE OF ARRAY: ";
//	cin>>n;
	
	int arr[]={1, 2, 3, 4, 5, 6, 7}	;
	
	cout<<"\n\tTHE ORIGNAL ARRAY IS:";
	
	for(int i=0; i<7; i++)
	{
		cout<<"	"<<arr[i];
	}
	
	
	cout<<"\nEnter the number of elements to swap: ";
	cin>>d;
	
	cout<<"\n\tTHE UPDATED ARRAY IS:";
	
	
	for(int i=d; i<7; i++)
	{
		cout<<"	"<<arr[i];
	}
	
	for (int i=0; i<d; i++)
	{
		cout<<"	"<<arr[i];
	}
	
	
	return 0;
}

