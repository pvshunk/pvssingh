#include<iostream>
using namespace std;

int main(){
	
	//Basic PATTERN 1
	int n;
	cin>>n;
	
	int i=1;
	
	/*
	while(i<=n){
		cout<<"****"<<endl;
		i+=1;
	}//ROW != COLUMN
	
	/*
	For n = 5
    ****
    ****
    ****
    ****
    ****
	*/
	
	//Type 2 FOR ROW=COLUMN
	while(i<=n)
	{
		
		int j = 1;
		while(j<=n)
		{
			cout<<"i";//If we put endl here then * is not able to print n times accordingly loop
			j+=1;     //it goes down at every process.
		}
		cout<<endl; // to complete the n loop we put endl out of the loop
		i+=1;
	}
	
	/*For N = 5 equal row equal column
	iiiii
    iiiii
    iiiii
    iiiii
    iiiii
	*/


return 0;
}

