#include<iostream>
using namespace std;
int main(){
	
	char a[]={'b','3','g'};
 	cout<<"my name is Fayaz"<<endl;
	char *p=a;
	for(int i=0;i<3;i++)
	{
		cout<<*p<<endl;
		*p++;
	}
return 0;
}