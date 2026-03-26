#include<iostream>
 
 using namespace std;
 
 int main()
 {

// 		int d, sum;
// 		int ch;
// 		int d1, d2, d3, d4;
// 	    cout<<"ENTER A 4-DIGIT NUMBER: ";
// 	    cin>>d;
// 	    
// 	    
// 		d4 = d % 10;
// 		
// 		d=d/10;
// 		
// 		d3 = d % 10;
// 		d = d/10;
// 		
//		d2 = d % 10;
// 		d = d/10;
// 	
//	   	d1 = d % 10;
// 		d = d/10;
// 		
//		 sum=d1+d2+d3+d4;
// 		
// 		cout<<"\nThe number you enterred is: \t"<<d1<<d2<<d3<<d4;
// 		cout<<"\n\n\tTHE SUM OF NUMBERS IS: \t"<<sum<<endl;
// 	
 	
 	int dig;
 	int n, m;
 	int sum=0;
 	
 	cout<<"Enter the number of digits: ";
 	cin>>dig;
 	
 	cout<<"Enter the number: ";
 	cin>>n;
 	
 	m=n;
 	
 	int arr[dig];
 	
 	for(int i=dig-1; i>=0; i--)
 	{
 		
 		arr[i]=n % 10;
 		n = n / 10;
 		
	 }
 	
 	
 	for(int i=0; i<dig; i++)
 	{
 		sum+=arr[i];
 	
	 }
 	
 	cout<<"\nTHE NUMBER IS : \n\t\t\t ";
 	
	 for(int i=0; i<dig; i++)
 	{
 		cout<<" "<<arr[i];
	 }
 	
 	
 	cout<<"\nTHE SUM OF DIGITS IS : \n\t\t\t "<<sum<<endl;
 		
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	return 0;
 }
