#include<iostream>
#include <math.h>
#include <cmath>
using namespace std;


bool chk(int x,int y, int z){
			int a=max(x,max(y,z));
			int b,c;
			if(a==x)
			{
				b=y;
				c=z;
				
			}
			
			else if(a==y)
			{
				b=x;
				c=z;
				
			}
			
			else{
				b=x;
				c=y;
			}
			
			if(a*a==b*b+c*c)
			{
				cout<<"this is pythagorean triplet"<<endl;
				
			}
			
			else{
					cout<<"not a pythagorean triplet!!!"<<endl;

			}
	}



int main()
{
	
	int u,v,w;
	cout<<"Enter three values for pythogorean triplet"<<endl;
	cin>>u>>v>>w;
	cout<<chk(u,v,w)<<endl;
	
}