#include<iostream>
using namespace std; 	

int main() 		
{
	//Infinite while loop with break
	int count=0;
	while(1){
		cout<<"Chocolates";
		count++;
		if(count>100) break;
	}
	
	cout<<endl;
	//Infinite for loop with break
	int i;
	
	for(i=0; ;i++){
		cout<<i<<" ";
		if(i>100) break;
	}

	return 0;
}
