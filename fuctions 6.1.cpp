#include <iostream>
using namespace std;

	int sub( int a,int b,int c)
	{
	 int sub = a+b+c;
	 return sub;
	}
	
int  main()
{
	bool val;
	
	int x,y,z;
	val= 0 ;
	cout<<"Enter three values for sum: "<<endl;
	cin>>z>>x>>y;	
	cout<<"The sum of given three numbers is: "<<sub(x,y,z)<<endl;
	cout<<"____________________________________________________"<<endl;
	if(val==1)
	{
		cout<<"coreect numbers "<<endl;
	}
	else cout<<"wrong numbers were given to the piece of code "<<endl;
}