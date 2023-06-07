#include <iostream>
using namespace std;
int main()
{
	int n;
	
	cout<<"Enter any number upto which we can print odd numbers "<<endl;
	cin>>n;
	for(int y=0;y<n;y++)
		{
			if(y%2==0){
				continue;
			}
			cout<<" This number is Odd : "<<y<<" upto "<<n<<endl;
		}
			
			return 0;
}