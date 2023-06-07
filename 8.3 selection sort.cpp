#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter number of items"<<endl;
	cin>>n;
	
	int a[n];
	cout<<"Enter values"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];	
	}
	//n=6
	//i=0
	//j=1
	//a0=87, a1=2,a2=4 a5=9,a4=7 a5=28,
	
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[j]>a[i])
			{
				int temp=a[j];
				a[j]=a[i];
				a[i]=temp;	
			}
		}
	}
	
	cout<<"_____________________________________"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"    ";
	}
	cout<<endl;
	cout<<endl<<"--------------------------"<<endl;
	
	
	return 0;
}