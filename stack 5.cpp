#include <iostream>
using namespace std;
 class stk{
 	
 	private :
 		int top;
 		int arr[6];
 		public:
 	 stk(){
 	 		top= -1;
 			for(int i=0;i<6;i++)
			 {
			 	arr[i]=0;
						 }			
			 }
 		
 		void push(int val)
 		{
 			if(top==4)
 			{
 				cout<<"Stack overflow"<<endl;
			 }
			 else 
			 {
			 	top++;
				 arr[top]=val;	
			 }			 
		 }
		
 		int pop()
 		{
			if(top==-1)
			{
				cout<<"stack is empty"<<endl;
				
						 } 			
 			else{
 				int popval =arr[top];
 				arr[top]=0;
 				top--;
 				return popval;
			 }
		 }
 	
 	int display()
 	{
 		cout<<"stack elements"<<endl;
 		for(int i=4;i>=0;i--)
 		{
 			cout<<arr[i]<<endl;
 			
		 }
		 return 0;
	 }
 
 };
 int main()
 {
 	stk you;
 	you.push(12);
 	you.push(14);
 	you.push(16);
 	you.push(18);
 	you.push(20);	
 	return 0;
 }