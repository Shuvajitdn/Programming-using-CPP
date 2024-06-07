#include<iostream>
using namespace std;
int main(){

	/*float a,b;
	cin>>a;
	cin>>b;
	if(a>0.01 || b>a)
	{
		cout<<"The condition in if statement is correct"; //will only be printed if the statment given in the parantheses is true
	}
	else{
		 cout<<"The condition is false";
	}*/




    /* int marks;
	
	cout<<"Student,please enter the marks to calculate the grade :";
	cin>>marks;
	
	if(marks>90)
	{
		cout<<"A";
	}
	else if(marks>80)
	{
		cout<<"B";
	}
	else if(marks>70)
	{
		cout<<"C";
	}
	else
	{
		cout<<"Pass";
	}*/
   


   /*int a,b,c,d;
	
	cout<<"Give three integers as input : a,b,c,d"<<endl;
	cin>>a>>b>>c>>d;
	
	if(a>b && c>d)
	{
		cout<<"haha";
	}
	else if(a>b && c<d)
	{
		cout<<"hehe";
	}
	else
	{
		cout<<"huhu";
	}*/



    int a;
	
	cout<<"Enter a integer a"<<endl;
	cin>>a;
	
	switch(a) 
	{
		case 1:
			cout<<"The value of a is 1";
			break;
		case 2:
			cout<<"The value of a is 2";
			break;
		case 3:
			cout<<"The value of a is 3";
			break;
			
		default:
			cout<<"Default will always be printed";
			break;
			
	}
}