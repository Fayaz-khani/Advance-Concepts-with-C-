#include <iostream>
using namespace std;
int main()
{

	cout<<"Enter three numbers for checking greater amoung them"<<endl;
	int a,b,c;
	cin>>a>>b>>c;
	cout<<endl;
	
	if (c>a)
	{
		if (c>b)
		{
			cout<<"The value of C is greater: "<<c<<endl;
			
		}
		else if(b>c)
		
		{
			cout<<"The value of B is greater: "<<b<<endl;	
		}
	
	}	
	
	else if(a>b)
	{
		cout<<"The value of A is greater: "<<a<<endl;
		}	
			return 0;
}