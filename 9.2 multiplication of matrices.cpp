#include <iostream>
using namespace std;
int main(){
		int n1,n2,n3;
		cout<<"Enter first matric"<<endl;
	cout<<"Enter number of rows: "<<endl;
	cin>>n1;
	cout<<"Enter number of coloums: "<<endl;
	cin>>n2;
	cout<<"Enter The values for "<<n1<<"X"<<n2<<endl;
	int a1[n1][n2];
	cout<<"_______________________"<<endl;
	for(int i=0;i<n1;i++){
		for(int j=0 ;j<n2;j++){
			cin>>a1[i][j];
		}
	}
	cout<<"________________________"<<endl<<endl;
		cout<<"Enter secend matric"<<endl;
	cout<<"Enter number of rows: "<<endl;
	cin>>n2;
	cout<<"Enter number of coloums: "<<endl;
	cin>>n3;
	cout<<"Enter The values for "<<n1<<"X"<<n3<<endl;
	int a2[n2][n3];
	cout<<"_______________________"<<endl;
	for(int i=0;i<n2;i++){
		for(int j=0 ;j<n3;j++){
			cin>>a1[i][j];
		}
	}
	cout<<"________________________"<<endl<<endl;
	
	
	for(int i=0;i<n1;i++){
		for(int j=0 ;j<n2;j++){
			cout<<a1[i][j]<<"    ";
		}
		cout<<endl;
	}

	for(int i=0;i<n2;i++){
		for(int j=0 ;j<n3;j++){
			cout<<a2[i][j]<<"    ";
		}
		cout<<endl;
	}
	cout<<"________________________"<<endl<<endl;
		
	cout<<"________________________"<<endl<<endl;
	return 0;
}