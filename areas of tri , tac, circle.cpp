#include <iostream>
using namespace std;

 double areaOfCircle(float rad){
 	double areaOfCircle=2*3.14*rad;
	 return areaOfCircle; 
 }
 double areaOfRac(float a,float b){
 	double areaOfRac=a*b;
	 return areaOfRac; 
 }
 double areaOfTri(float a,float b){
 	double areaOfTri=a*b/2;
	 return areaOfTri; 
 }
 
 int main()
 {
 	int check;
 	float x,y,z;
 	cout<<"to find area of circle Enter 1 :"<<endl<<" To find area of Ractangle Enter 2: "<<endl<<"To find area of Triangle Enter 3"<<endl<<" Thank you :) "<<endl;
 	cin>>check;
 	if(check==1)
 	{
 		cout<<"Enter the radius of a Given Circle: "<<endl;
 		cin>>x;
 		cout<<areaOfCircle(x)<<" Meter square"<<endl;
	 	cout<<"_______________________________________"<<endl;
 	}
 	else if(check==2)
 	{
 		cout<<"Enter the Length and width of given Ractangle: "<<endl;
 		cin>>y>>z;
 		cout<<areaOfRac(y,z)<<"Meters square"<<endl;
	 	cout<<"_______________________________________"<<endl;
 		
	 }
	 else if(check==3)
	 {
	 	cout<<"Enter the Length and width of given triangle: "<<endl;
	 	cin>>y>>z;
	 	cout<<areaOfTri(y,z)<<"Meter square"<<endl;
	 	cout<<"_______________________________________"<<endl;
	 }
	 else {
	 	cout<<" Please Enter a correct number!!! /n Thank you:) "<<endl;
	 }
	 return 0;
 }
 
 