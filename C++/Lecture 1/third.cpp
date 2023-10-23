#include<iostream>
using namespace std;
int main(){
	int num[10],i,n,j;
	cout<<"Enter your table range :";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter your numbers ";
		cin>>num[i];	
	}
	
	for(i=0;i<n;i++)
	{
		cout<<num[i]<<" This is your table  "<<endl;
		for(j=1;j<=10;j++)
		{
			cout<<num[i]<<" * "<<j<<" = "<<num[i]*j<<endl;
		}
//	/*	cout<<"This is your numbers "<<num[i]<<endl;*/
	}
	
	return 0;
}
