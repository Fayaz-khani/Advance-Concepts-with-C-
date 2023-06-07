#include <iostream>
#define n 100
using namespace std;

class stack{

	int* array;
	int top;
	public:
		stack(){	
			array=new int(n);
		}
		
	void push(int x){
		
		if(top==n-1)
		{
			cout<<"Stack overflow"<<endl;
			return ;
			
		}
		top++;
		array[top]=x;
	}
	void POP(){
	if(top==-1)
	{
		cout<<"No elements to pop"<<endl;
	return;
	}
	
	top--;

}

int Top()
{
		if(top==-1)
	{
		cout<<"No elements to pop"<<endl;
	return -1;
	
	}
	
;}

bool empty(){
	return top==-1;
}

};


int main()
{
	stack me;
	
	me.push(43);
	me.push(333);
	me.push(81);
	me.push(122);
	me.push(823);
	me.push(89);
	cout<<me.Top()<<endl;
	cout<<me.Top();
}