#include <iostream>
using namespace std;


int main(){
	int n,m;

	cin>>n>>m;
		int a[n][m];
	cout<<"Enter values for an array"<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}	
	
	int key;
	cout<<"Enter the term which you wanna search in this Array:"<<endl;
	cin>>key;
	for(int i=0;i<n;i++){
	
		for(int j=0;j<m;j++){
			cout<<a[i][j]<<"     ";
		}
	}	
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]==key){
				cout<<"The position is given /n"<<endl<<i<<"   "<<j<<endl;
			}
				}
	
		}
		
			cout<<endl;
	return 0;
}