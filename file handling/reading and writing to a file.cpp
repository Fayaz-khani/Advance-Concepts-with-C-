#include<iostream>
#include<fstream>

using namespace std;
int main(){
	string arr[12];
		fstream fayaz;
	
		fayaz.open("fayaz.txt",ios::in|ios::trunc|ios::out);
		
	if(fayaz.is_open()){
		string arr;
		cout<<"Enter some thing here::::"<<endl;
		getline(fayaz,arr);
		cout<<arr;
			}
		
	
	else 
		cout<<"this is another new file "<<endl;
	
	return 0;	
}