#include<iostream>
using namespace std;

int primeSeive(int n)
{
	int prime[299]={0};
	for(int i=2;i<=n;i++)
	{
		if(prime[i]==0)
		{
			for(int j=i*i;j<n;j+=i)
			{
				prime[j]=1;
			}
			
		}
		cout<<endl;
	}
	
	for(int i=2 ;i<n;i++)
	{
		if(prime[i]==0)
		{
			cout<<i<<"   ";
		}
	}
	cout<<endl;
	return 0;
}
int main(){
	
	int n;
	n=50;
	primeSeive(n);
	cout<<"These are our prime numbers from 1 to "<<n<<endl;
	cout<<primeSeive(n);
	
	
	return 0;
}