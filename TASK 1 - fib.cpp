#include<iostream>

using namespace std;

int main()
{
	int a=0, b=1, c;
	int n;
	
	int check=0;
	
	while(check==0)
	
	{
		cout<<"Enter the number of terms: ";
		cin>>n;

	

	
	try{
		if(n<0)
		{
			throw "THE NUMBER IS NEGATIVE";
			check=0;
		}
		
	check=1;
	
	
	
	
	cout<<a<<" "<<b;
	
	
	for (int i=0; i<n; i++)
	{
		c=a+b;
		cout<<" "<<c;
		a=b;
		b=c;
	}	
	
	
	 }
	 		catch(const char * msg)
	 		{
	 			cout<<"error :: "<<msg<<endl;
			 }
		
		}	
		
	return 0;
}