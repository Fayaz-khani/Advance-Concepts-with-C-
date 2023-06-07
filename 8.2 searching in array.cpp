#include <iostream>
using namespace std;

int search(int a[],int n, int key)
{	
	for(int i=0;i<=n;i++)
	{
		if(a[i]==key)
		{
			return i;
		}
	
	}
return -1;		
}


int binarysearch(int a[],int n,int key)
{
	int s=0,e=n;
	while(s<=e)
	{
		int mid=(s+e)/2;
		if(a[mid]==key){
			return mid;
		}
		
		else if(a[mid]>key)
		{
			e=mid-1;
		}
		else
		s=mid+1;
	}
	
	return -1;
	
}

int main()
{
	int n;
	int key;
	cout<<"Enter the size of an array:"<<endl;
	cin>>n;
	cout<<"Enter the elements upto "<<n<<endl;
	int a[n];
	for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		
	cout<<"Enter the key which you are going to search in this array"<<endl;
	cin>>key;	
		cout<<"The position of searched element in the array is given below:"<<endl;
	cout<<binarysearch(a,n,key)<<endl;
	return  0;
	
}