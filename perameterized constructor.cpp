#include<iostream>
using namespace std;

class cube{
	public:
		
		int side;

	 cube(int x){
		side=x;
	}
};
int main(){
	cube c1(12);
	cube c2(223);
	cube e1(34);
	cout<<e1.side;
	cout<<c1.side;
	cout<<c2.side;
	return 0;
}