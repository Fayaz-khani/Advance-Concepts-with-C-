#include <iostream>
using namespace std;
#define arr 10
int a[arr];
int top= -1;
bool empty()
{
	if(top==-1){
		return true;
	}
	else
	{
		return false;
	}
}

void push(int x)
{
	if(top==arr-1)
	{
		cout<<"stack is full"<<endl;
	}
	
	else{
		
		top++;
		a[top]=x;
	}
}
void pop(){
	if(empty())
	{
		cout<<"stack is empty"<<endl;
		
	}
	else 
	top--;
}

 int stack_top()
 {
 	if(top!= -1)
 	{
 		cout<<a[top]<<endl;
	 }
 	else 
 	cout<<"there is no element present!!!"<<endl;
 }
int main()
{
	push(123);
	push(234);
	push(34);	
	stack_top();
	return 0;
}
