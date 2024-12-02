#include<iostream>
using namespace std;
int main()
{
	int array[0];
	int size=sizeof(array)/sizeof(int);
	cout<<size;
	int sum=0;
	
	for(int i=0; i<=size; i++)
	{
		cout<<"Enter nummber @ index: "<<i<<": ";
		cin>>array[i];
		sum=sum+array[i];
		
	}
	cout<<"\n Sum= "<<sum;
}
