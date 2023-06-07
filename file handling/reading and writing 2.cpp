#include <iostream>
#include <fstream>
using namespace std;
int main(){
	
	fstream file("SRT.txt",ios::in|ios::out|ios::app);
	if(file.is_open()){
		cout<<"file is opened successfully "<<endl;
		cout<<"writing to the file:::"<<endl;
		file<<"this is mudassir fayaz"<<endl;
		file.seekg(0);
		while(file.good())
		{
			string s;
			getline(file,s);
			cout<<s<<endl;
		}
	}
	else 
	cout<<"doesn't opened the file"<<endl;
	return 0;
}