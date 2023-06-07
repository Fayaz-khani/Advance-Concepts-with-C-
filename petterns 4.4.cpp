#include <iostream>
using namespace std;
int main()
{
	int rows, col;
	cout<<"Enter amount of rows and columns "<<endl;
	cin>>rows >> col;
	cout<<endl<<endl;
	
	int i , j;
	for( i= 1; i<rows;i++)
	{
		for(j=1;j<col;j++)
		{
			cout<<" * ";
		}
		cout<<endl;
	}
	
	return 0;
}