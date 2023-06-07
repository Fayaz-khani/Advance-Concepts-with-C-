#include <iostream>
#define size 10
using namespace std;
int a[size];
int top=-1;
bool empty()
{
	if(top==-1)
		return true;
		else
		return false;
}

void push(int value)
{
	
	if(top==size-1)
	{
		cout<<"stack is full"<<endl;
		
	}
	else 
	{
		top++;
		a[top]=value;
	}
}

void pop()
{
	if(empty())
	{
		cout<<"stack is empty"<<endl;
		}
		else
		 top--;
}

void display()
{
	if(empty())
	{
		cout<<"stack is empty"<<endl;
	}
	else
	{
		for(int i=0;i<=top;i++)
		{
			cout<<a[i]<<" ";
		}
	}
}

void show_top()
{
	
	if(empty())
{
	cout<<"stack is empty"<<endl;
}
else cout<<"Element at top is : "<<a[top]<<endl;
}


int main()
{
	push(234);
	push(444);
	
	display();
	show_top();
	return 0;
}
















