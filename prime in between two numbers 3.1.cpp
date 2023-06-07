#include <iostream>
using namespace std;
int main()
{
	
	int a,b,i;
	cout<<"Enter two values for prime in between them: "<<endl;
	cin>>a>>b;
	
	for (a;a<=b;a++)
		{
			for(i=2;i<b;i++)
			{
				if(a%i==0){
					continue;
				}			
			}
			if(a==i)
			{
				cout<<a<<endl;
			}
			}	
}