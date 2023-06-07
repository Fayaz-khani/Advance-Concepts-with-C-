#include<iostream> 
using namespace std;
int fact(int n){ 	
	if(n==0)
	return 1;
	int prevfact= fact(n-1);
	return n*prevfact;
}

int main(){
	
	int n;
	cout<<"Enter a number for a factorial: "<<endl;
	cin>>n;
	cout<<"the answer is: "<<endl;
	cout<<fact(n);
	return 0;
}