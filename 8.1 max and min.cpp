#include <iostream>
using namespace stderr;

int main()
{
	int n, max, min;
	cout<<"Enter the size of an array:"<<endl;
	cin>>n;
	int a[n];
	for(int i=0;i<=n;i++)
		{
			cin>>a[i];
		}
	for(int i=0;i<=n;i++)
	{
		max=a[i];
		if(a[i]>max){
			max=a[i];
			cout<<a[i]<<endl;
		}
	}		
	
	
	return  0;
	
}