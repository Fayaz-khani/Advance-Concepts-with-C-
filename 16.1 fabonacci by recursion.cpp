#include <iostream>
using namespace std;

int fab(int n){
	if(n==1 or n==0)// or operator mery system mai hai nahe to es leye ye code chall nahe raha hai 
	// i'm so sorry for that // i'll buy a new laptop but not yet
	
	return 1;
	return fab(n-1)+fab(n-2);
}
int main()
{
	int np;
	cout<<"Enter a number for factorial"<<endl;
	cin>>np;
	cout<<fab(np);
	
	return 0;
}