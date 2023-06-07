#include <iostream>
using namespace std;
int sum(int y)
{
	int nxt=0;
	for(int i=0;i<=y;i++)
	{
		nxt+=i;	
	}
	return nxt;
	
}


int main()
{
	int x;
	cin>>x;
	cout<<sum(x)<<endl;
	cout<<"!------------------------------------!"<<endl;
	
	return 0;
	
}