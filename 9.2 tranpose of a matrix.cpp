#include <iostream>
using namespace std;
int main(){
		int n,m,key;
	bool chk;
	cout<<"Enter number of rows: "<<endl;
	cin>>n;
	cout<<"Enter number of coloums: "<<endl;
	cin>>m;
	cout<<"Enter The values for "<<n<<"X"<<m<<endl;
	int a[n][m];
	cout<<"_______________________"<<endl;
	for(int i=0;i<n;i++){
		for(int j=0 ;j<m;j++){
			cin>>a[i][j];
		}
	}
	cout<<"________________________"<<endl<<endl;
	for(int i=0;i<n;i++){
		for(int j=0 ;j<m;j++){
			cout<<a[i][j]<<"    ";
		}
		cout<<endl;
	}
	
	cout<<"________________________"<<endl<<endl;
	for(int i=0;i<n;i++){
		for(int j=0 ;j<m;j++){
			cout<<a[j][i]<<"    ";
		}
		cout<<endl;
	}
		cout<<"________________________"<<endl<<endl;
	return 0;
}