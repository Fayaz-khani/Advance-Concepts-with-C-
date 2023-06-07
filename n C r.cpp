#include <iostream>
using namespace std;

int fac(int n)
{
	int factorial=1;
	for(int i=2;i<=n;i++)
	{
		factorial*=i;
	}
	return factorial;
}
int main()
{
	int n,r,c;
	cout<<"Enter the value of n:"<<endl;
	cin>>n;
	cout<<"Enter the value of r:"<<endl;	
	cin>>r;
	c=fac(n)/(fac(r)*fac(n-r));
	cout<<c<<endl;
	//cout<<"Factorial of r = "<<fac(r)<<endl;
	//cout<<"Factorial of n = "<<fac(n)<<endl;
	//c=n>r?fac(n)-fac(r):fac(r)-fac(n);
	//cout<<"the difference = "<<c<<endl;;
		
return 0;
}