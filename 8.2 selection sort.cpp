#include <iostream>
using namespace std;
int selectionSort(int n,int a[] )
{
	
for(int i=0;i < n-1;i++)
{
	for(int j=i;j<n;j++)
	{
		if(a[j]<a[i])
		{
			int temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
}
return 0;
}
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

     cout<<selectionSort(n,a);
		
		
	for(int i=0;i<n;i++)
		{
			cout<<a[i]<<"  ";
		}


	return 0;
}