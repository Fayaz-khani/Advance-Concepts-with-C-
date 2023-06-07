#include<iostream>
#include<fstream>
using namespace std;
int main(){
	
	fstream file; 
	file.open("fayaz.txt",ios::binary|ios::in|ios::out);
	string str;
	int total;
	cout<<"how many values do you want to store:"<<endl;
	for(int i=0;i<=total;i++){
	cout<<"Enetr values."<<endl;
	file<<str;

}
	string you;
	getline(file,you);
	cout<<you;
	cout<<you<<endl;
	return 0;
}