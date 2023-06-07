#include <iostream>
using namespace std;
int main()
{
	int a,b,n;
	a=5;
	b=10;
		//5   //6    8    11     9    11    13    9     10    12    13    14    15
	n = a++ + a++ + ++a - ++b + ++a + b++ - ++b + a++ - a++ - ++a - ++a + ++b + ++b ;
	cout<<a<<endl;//13
	cout<<b<<endl;//15
	cout<<n<<endl;//18
	return 0;
}