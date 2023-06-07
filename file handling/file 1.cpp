#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	
	char arr[10];
	ofstream myfile("xyz.txt");
	
		cout<<"Enter your name please "<<endl;
		cin.getline(arr,10);
	myfile.open("xyz.txt");
		myfile<<arr;
	myfile.close();

	return 0;
	
}