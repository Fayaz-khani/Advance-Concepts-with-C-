#include<iostream>
using namespace std;
 string arr1[20],arr2[20],arr3[20],arr4[20],arr5[20];
	int total=0;
	
	void enter(){
		int choice;
	
		cout<<"how many student do you want to store:"<<endl;
		cin>>choice;
		if(total==0){
		
			for (int i=0;i<choice;i++)
				{	
					cout<<"Enter data of student "<<i+1<<endl<<endl;
					cout<<"Enter your name:"<<endl;
					cin>>arr1[i];
					cout<<"Enter your roll number"<<endl;
					cin>>arr2[i];
					cout<<"Enter your course:"<<endl;
					cin>>arr3[i];
					cout<<"Enter your class: "<<endl;
					cin>>arr4[i];
					cout<<"Enter your contact number: "<<endl;
					cin>>arr5[i];
					cout<<"____________________________"<<endl;
				}
			
				}
			else{	
						for (int i=total;i<total+choice;i++)
						{		
							cout<<"Enter data of student "<<i+1<<endl<<endl;
							cout<<"Enter your name:"<<endl;
							cin>>arr1[i];
							cout<<"Enter your roll number"<<endl;
							cin>>arr2[i];
							cout<<"Enter your course:"<<endl;
							cin>>arr3[i];
							cout<<"Enter your class: "<<endl;
							cin>>arr4[i];
							cout<<"Enter your contact number: "<<endl;
							cin>>arr5[i];
							cout<<"____________________________"<<endl;
						}
				}	
				total=+choice;
	}
//______________________________// c++ project student management system with source code

	void show(){
		
		for(int i=0;i<total;i++){
			cout<<"data of student "<<i+1<<"  is "<<endl<<endl;
			cout<<"Name: "<<arr1[i]<<endl;
			cout<<"Roll number: "<<arr2[i]<<endl;
			cout<<"Course: "<<arr3[i]<<endl;
			cout<<"Class: "<<arr4[i]<<endl;
			cout<<"Contact: "<<arr5[i]<<endl;
			cout<<"____________________________"<<endl<<endl;
		}
		
	}
//______________________________//
	void search(){
		string rollno;
		
		cout<<"Enter the roll number of a student for search:"<<endl;
		cin>>rollno;
		for(int i=0;i<total;i++)
		{
			if(rollno==arr2[i])
			{
				cout<<"data of student "<<i+1<<"  is "<<endl<<endl;
			cout<<"Name: "<<arr1[i]<<endl;
			cout<<"Roll number: "<<arr2[i]<<endl;
			cout<<"Course: "<<arr3[i]<<endl;
			cout<<"Class: "<<arr4[i]<<endl;
			cout<<"Contact: "<<arr5[i]<<endl;
			cout<<"____________________________"<<endl<<endl;		
			}
		}
	}
//______________________________//
	void delet(){
		int a;
		cout<<"Do you want to delete all the data or specific rollnumber"<<endl;
		cout<<"Press 1 to delete all:"<<endl;
		cout<<"Press 2 to delete one student:"<<endl;
		cin>>a;
		if(a==1){
			total=0;
			cout<<"All record is deleted"<<endl<<endl;
			
		}
		else{
			string rollno;
		
		cout<<"Enter the roll number of a student for deletion:"<<endl;
		cin>>rollno;
		for(int i=0;i<total;i++)
		{
			if(rollno==arr2[i])
			{
				cout<<"data of student "<<i+1<<"  is "<<endl<<endl;
			cout<<"Name: "<<arr1[i]<<endl;
			cout<<"Roll number: "<<arr2[i]<<endl;
			cout<<"Course: "<<arr3[i]<<endl;
			cout<<"Class: "<<arr4[i]<<endl;
			cout<<"Contact: "<<arr5[i]<<endl;
			cout<<"____________________________"<<endl<<endl;
			int j;	
			cout<<"Are you sure to delete the data Enter again 1:"<<endl;
			cin>>j;
			if(j==1)
			{
				for(int x=i;x<total;x++)
				{
					arr1[x]=arr1[x+1];
					arr2[x]=arr2[x+1];
					arr3[x]=arr3[x+1];
					arr4[x]=arr4[x+1];
					arr5[x]=arr5[x+1];
				}
				total--;
				cout<<"Your record is deleted!!!"<<endl;
				
			}
			
			}
			
		}
			
		}
		
	}
//______________________________//
	void update(){
			string rollno;
		
		cout<<"Enter the roll number of a student for search:"<<endl;
		cin>>rollno;
		for(int i=0;i<total;i++)
		{
			if(rollno==arr2[i])
			{
				cout<<"previous data of the student is geven:"<<endl<<endl;
				cout<<"data of student "<<i+1<<"  is "<<endl<<endl;
			cout<<"Name: "<<arr1[i]<<endl;
			cout<<"Roll number: "<<arr2[i]<<endl;
			cout<<"Course: "<<arr3[i]<<endl;
			cout<<"Class: "<<arr4[i]<<endl;
			cout<<"Contact: "<<arr5[i]<<endl;
			cout<<"____________________________"<<endl<<endl;
			
			cout<<"Enter new data:"<<endl;
			cout<<"Name: "<<arr1[i]<<endl;
			cout<<"Roll number: "<<arr2[i]<<endl;
			cout<<"Course: "<<arr3[i]<<endl;
			cout<<"Class: "<<arr4[i]<<endl;
			cout<<"Contact: "<<arr5[i]<<endl;
				
			}
		}
		
	}
//______________________________//
	int exit(){
		return 0;	
	}
//______________________________//


int main()
{
	int value;
	while(1){
		cout<<"Enter 1 for Enter data :"<<endl;
		cout<<"Enter 2 for show data :"<<endl;
		cout<<"Enter 3 for search data :"<<endl;
		cout<<"Enter 4 for update data :"<<endl;
		cout<<"Enter 5 for delete data :"<<endl;
		cout<<"Enter 6 for exit :"<<endl;
		cin>>value;
		switch(value)
		{
			case 1:
				enter();
				break;
			case 2:
				show();
				break;
			case 3:
				search();
				break;
			case 4:
				update();
				break;
			case 5:
				delet();
				break;
			case 6:
				exit();
				break;
			default:
				cout<<"Invilid input:"<<endl;
				break;
		}
	}
	
	return 0;
}