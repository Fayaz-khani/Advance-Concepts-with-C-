#include <iostream>
using namespace std;
int sum(int x){
	
	if(x==0){
		return 0;
	}
	
	float pre=sum(x-1);
	return x+pre;
}


int main(){
	int n;
	cout<<"Enter a number upto which you want to a sum of previous numbers: "<<endl;
	cin>>n;
	cout<<sum(n);
	return 0;	
}