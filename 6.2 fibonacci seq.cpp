#include <iostream>
using namespace std;

 void fib(int n)
{
	int t1=0,t2=1;
	int next;
	for(int i=1;i<=n;i++)
	{
		cout<<t1<<"  ";
		next=t1+t2;
		t1=t2;
		t2=next;
	}
	
	return ;
}

int main()
{
	cout<<"Upto which number do you want febonacci seq:"<<endl;
	int a;
	cin>>a;
	fib(a);
	
	return 0;
}