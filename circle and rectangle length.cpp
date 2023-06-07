#include <iostream>

using namespace std;
 	float circle(float r){
	  float circle= 2*3.17*r; 
	  return circle;
	 }
int main()
{	
    float a;
	cout<<"Enter a radius of a cicle: "<<endl;
	cout<<"The Entered radius will be in a meter!!!"<<endl;
	cin>>a;
	cout<<circle(a)<<" Meters"<<endl;
	
	 cout<<"______________________________________"<<endl;
	 return 0;
}