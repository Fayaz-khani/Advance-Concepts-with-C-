#include<iostream>
using namespace std;
int nPowerk(int n,int k)
{
	if(k==0)
	return 1;
	int prepower=nPowerk(n,k-1);
	return n*prepower;
}

int main(){
	
	int n,m;
	cout<<"enter base:"<<endl;
	cin>>n;
	cout<<"Enter power:"<<endl;
	cin>>m;
	cout<<"The result is : ";
	cout<<nPowerk(n,m)<<endl;
	return 0; 
}