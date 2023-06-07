#include <iostream>
using namespace std;

class animal
{
	public:
	 animal(){
		cout<<"Cat is four lag animal: "<<endl;
	}
	void cow(){
		cout<<"markhoor is our national animal:"<<endl;
	} 

};

class goot: public animal{
	public:
	goot(){
	cout<<"dog is fathful animal:"<<endl;
	}	
};


int main(){ 
	
	goot obj1;
	obj1.cow();
	cout<<"will done"<<endl;
	return 0;
}