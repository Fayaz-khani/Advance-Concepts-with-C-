#include <iostream>
using namespace std;
int main()
{
	int r,c,i,j;
	cout<<"Enter two val : "<<endl;
	cin>>r>>c;
	for(i=0;i<=r;i++)
	{
		for(j=0;j<=c;j++)
		{
	  		if(j==1 != i==1)
				{				
					cout<<"*";
				}
		}
		cout<<endl;
	}
	
	
	return 0;
}					