#include<iostream>
using namespace std;
#include<fstream>
int main()
{
	ofstream file;
	file.open("mudassirfayaz.txt",ios::in|ios::trunc|ios::out);
	if(!file.is_open()){
		cout<<"File isnot open"<<endl;
	}
	//||||||||||\\||||||||Llllllllll
	else{
		cout<<"file is opened successfully!!!"<<endl;
	}
	return 0;
}