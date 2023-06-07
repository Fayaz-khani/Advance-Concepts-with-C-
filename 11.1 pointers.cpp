#include<iostream>
using namespace std;
int main(){
	
	int a=89;
	int*b=&a;
	cout<<*b<<endl;
	*b=-23;
	cout<<a;//WITH THE HELP OF POINTERS WE CAN MODIFY AND ACCESS THE VALUE OF ANOTHER VARIABLE.
	//AS YOU SEE AFTER RUNING THIS PROGRAM YOU WILL UNDERSTAND BETTER:
	cout<<endl<<"WEB DEVELOPER ::::: MUDASSIR FAYAZ"<<endl;
	return 0;
}