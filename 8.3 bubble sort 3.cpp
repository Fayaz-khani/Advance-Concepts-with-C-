#include <iostream>
using namespace std;

int main()
{
	int n ;
	cout<<"Enter size of an Array: "<<endl;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
      {
	  	cin>>a[n];
	  }
	int counter=1;
	while(counter<n-1){
	   for(int i=0;i<n-counter;i++){
		if (a[i]>a[i+1]){
		  int temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
			}
		}
		counter++;
	}
	
	for(int i=0;i<n;i++)
	{
	cout <<	a[i] << "  ";
	}
	cout<<endl;
return 0;
}