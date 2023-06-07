#include <iostream>
using namespace std;
float triangle(float a,float b)
{
	float triangle=a*b/2;
	return triangle;
}
int main()
{
	float i,j;
		cout<<"NOTE: the length and width must be in a basic unit which is meter!!!"<<endl;
	cout<<"Enter length and width of a triangle"<<endl;
	cin>>i>>j;
	cout<<triangle(i , j)<<"  Meters square"<<endl;
	cout<<"______________________________"<<endl;
	return 0;
}