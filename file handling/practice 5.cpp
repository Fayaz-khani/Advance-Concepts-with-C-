#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ifstream file;
	file.open("mudassir.txt");
	if(file.is_open())
{
	string rr;
	while(file.good()){
		getline(file,rr);
		cout<<rr<<endl;
	}
	}
	else 
	cout<<"arror occuring"<<endl;
	return 0;
}