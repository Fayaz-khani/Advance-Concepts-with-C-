#include <iostream>
using namespace std;

double rectangle(float x,float y)
{
	double rectangle=2*x*y;
	return rectangle;
}
int main()
{
	double length , width;
	cout<<"NOTE: the length and width must be in a basic unit which is meter!!!"<<endl;
	cout<<"Enter length and width of a rectangle"<<endl;
	cin>>length>>width;
	cout<<rectangle(length , width)<<"Meters square"<<endl;
	cout<<"______________________________"<<endl;
	return 0;
}