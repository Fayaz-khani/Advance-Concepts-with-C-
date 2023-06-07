#include <iostream>
using namespace std;
int factorial(int x)
{
	int fact=1;
	for(int i=2;i<=x;i++)
		{
			fact*=i;
		}
		
		return fact;
}
int main()
{
	
	int n,m,sub;
	cout<<"enter two numbers :"<<endl;
	cin>>n>>m;
	int c=n>m?factorial(n)-factorial(m):factorial(m)-factorial(n);
	factorial(n),factorial(m);
	cout<<c;
	cout<<factorial(n)<<endl<<factorial(m)<<endl;
	return 0;
}