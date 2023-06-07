#include<iostream>

using namespace std;

int binarySearch(int b[],int m,int ele)
{
	int first=0;
	int last=m;
	while(first<=last)
	{
		int med=(first+last)/2;
			if(b[med]==ele)
			{
				return med;
			}
			else if(b[med]>ele){
			first=med-1;	
			}
		else 
	      last=med+1;
	}
	
	return -1;
}
int linearSearch(int a[],int n,int key)
{
	for(int i=0;i<n;i++)
		{
			if(a[i]==key)
			{
				return i;
			}
		}
	return -1;
}

int main()
{
	int n;
	cout<<"Enter Number of an Array"<<endl;
	cin>>n;
	cout<<"Enter elements of an Array:"<<endl;
	int key;
		int a[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the term for searching in Array: "<<endl;
	cin>>key;
	cout<<binarySearch(a,n,key);
	return 0;
}