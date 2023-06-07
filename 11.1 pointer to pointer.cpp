#include<iostream>
using namespace std;
int main(){
	
	int g=12;
	int *p=&g;
	cout<<*p;
	
	int **k=&p;
	cout<<endl<<**k;
	++**k;
	cout<<endl<<**k;//yaha tak ta pointer to pointer 
	// es k baad hai pointer to pointer to pointer (means three pointers ka use karna)
	// our es sy zyada b ham kar sakty hai ager ham chahy...// method bilkul same hai esee ko follow karty huye ham 10 pointers ka use b ek sath kar sakty hai.
	// our 10 sy b zyada ......
	// now lets see!!!
	
	int ***h=&k;
	--***h;
	cout<<endl;
	cout<<***h;
	
	
	
	cout<<endl;
	cout<<endl;
	cout<<endl;
	
	cout<<**h;
	
	
	cout<<endl;
	
	cout<<endl;
	cout<<endl;
	cout<<*h;
	return 0;
}