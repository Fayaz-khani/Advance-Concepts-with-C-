#include <iostream>
using namespace std;

class stck{
	int arr[200];
	int top;
	public:
	
	stck(){
		int n;
		n=100;
		top=-1; 
	}	
	
	void push(int x)
	
	{
		if(top ==100-1)	
		{
			cout<<"stack overflow"<<endl;
			return;
		}
		top++;
		arr[200]=x;
	}

	void pop()
	{
		if(top==-1)
		{
			cout<<"There is no element in stack to pop";
			return;
		}
		top--;
	}
	
	int Top()
	{
		
			if(top==-1)
		{
			cout<<"There is no element in stack";
			return -1;
		}
		return arr[200];
	}

	bool empty()
	{
		return top==-1;
	}

};
int main()
{
	
	stck obj;
	obj.push(23);
	obj.push(123);
	obj.pop();
	cout<<obj.Top()<<endl;
}