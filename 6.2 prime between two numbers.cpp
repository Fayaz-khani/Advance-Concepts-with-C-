#include <iostream>
#include <math.h>
using namespace std;
bool prime(int n)
{
	for(int j=2;j<sqrt(n);j++)	
		{
			if(n%j==0)
			{
				return false;	
			}
			else {
					
			}
		}
			return true;
}
int main()
{
	cout<<"Enter two integer : "<<endl;
	int a , b;
	cin>>a>>b;
	for(int i=a;i<=b;i++)
		{
			if(prime(i)){
				cout<<"this number is prime:"<<i<<endl;
			}
		cout<<"non prime"<<endl;
		}
			
		
	return 0;
}