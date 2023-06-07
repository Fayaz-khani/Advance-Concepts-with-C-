#include <iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter a number for checking either it is ODD or EVEN "<<endl;
	cin>> a;
	
	int j=a%2;
	if(j==0)
	{
		cout<<"The Entered Number: "<<a<<" is EVEN"<<endl;
	}
	
	else 
	cout<<"The Entered number: "<<a<<" is ODD"<<endl;
	
	return 0;
}