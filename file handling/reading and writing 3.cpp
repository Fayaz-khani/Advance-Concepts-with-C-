#include<iostream>
#include <fstream>
using namespace std;
int main(){
	fstream quick;
	quick.open("different.txt",ios::out|ios::in|ios::app);
	if(quick.is_open())
	{
		cout<<"opened successfully:"<<endl;
		string arr[10];
		for(int i=0;i<3;i++)
		{
			cout<<"Enter something related to string ";//<<end
			cin>>arr[i];
		}
	
	
		quick.seekg(0);
		while(quick.good()){
			string s;
				getline(quick,s);
		cout<<s<<endl;
		}
	}
	else 
	cout<<"not declared"<<endl;
	return 0;
}