#include <iostream>
using namespace std;

int main()
{
		int n;
	cout<<"Enter the size of an array:"<<endl;
	cin>>n;
	cout<<"Enter the elements upto "<<n<<endl;
	int a[n];
	for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
	int counter=1;
	while(counter<n-1)
	{
		
		
	for(int i=0;i<n-counter;i++)	
		{
			if(a[i]>a[i+1])
			{
				int temp=a[i+1];
				a[i+1]=a[i]
				;
				a[i]=temp;
			}
		counter++;
	}}}