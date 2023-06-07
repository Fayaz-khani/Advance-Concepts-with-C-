#include<iostream>
using namespace std;
class sd
{
	public:
	string name;
	int age;
	int roll;
	
	
};
int main(){
	int n;
	cout<<"Enter your size"<<endl;
	cin>>n;
	sd a[n];
		for(int i=0;i<n;i++){
			cout<<"Enter your name "<<endl;
			cin>>a[i].name;
			cout<<"Enter your age: "<<endl;
			cin>>a[i].age;
			cout<<"Enter your roll number: "<<endl;
			cin>>a[i].roll;
			cout<<"________________________________"<<endl;
		}
		
		for(int i=0;i<n;i++){
			
			cout<<a[i].name<<endl;
			cout<<a[i].age<<endl;
			cout<<a[i].roll<<endl;
			cout<<"___________________________"<<endl;
		}
	cout<<"______________________________"<<endl;
	sd b;
	b.name="Fayaz";
	cout<<b.name<<endl;
	b.age=12;
	cout<<b.age<<endl;
	b.roll=345;
	cout<<b.roll<<endl;
	cout<<"______________________________"<<endl;

	
	return 0;
}