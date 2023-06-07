#include <iostream>
using namespace std;

int main()
{
	//now I will try to practice if else and nested if else statements
		
		cout<<"Enter your pocket power "<<endl;
		int x;
		
		cin>>x;	
		if(x>5000)
		{
			
			cout<<"Shop of cloths :)"<<endl;
			
		}
		else if( x<5000){
			if(x<4500)
			{
				cout<<"save 500 and use 4000 for shoes "<<endl;
			}
			
			else{
				cout<<"Use for cloths "<<endl;
			}
		}
		else if(x>4000) {
			
			cout<<"Shop of shoes :)"<<endl;
		}
		else if (x>3000){
			
			cout<<"Shop of sweets :)"<<endl;
			
		}
		else if(x>2000)
		{
			cout<<"business of Masks :)"<<endl;
			
		}
		else if(x>1000)
		{
			cout<<"try to save or use for school fee"<<endl;
		}
	 
	 	else if ( x<1000)
		 {
	 	if (x<500)
	 	{
	 		cout<<"Your amount is very low please save within a month"<<endl;
		 }
		 else
		 {
			cout<<"Please save your amount for future use thank you :)"<<endl;
		 }
	 	
	 }
	 else
	 {
	 	cout<<"Please Enter a correct format thanks!"<<endl;
	 }
	
	
	
/*std::cout<<"Hello world"<<std::endl;
	std::cout<<"this is my own laptop you can say easily!"<<std::endl;	
	return 0;
	std::cout<<"This is me : ";
	
*/

return 0;
}