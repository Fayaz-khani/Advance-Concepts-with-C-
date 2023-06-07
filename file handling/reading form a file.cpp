#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream file;
	file.open("mudassir.txt");
	string you;
	while(file.good()){
		getline(file,you);
		cout<<you<<endl;
	}	return 0;
}