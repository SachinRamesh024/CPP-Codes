#include<iostream>
using namespace std;
int main()
{
	int A[5];
	
	for(int i=0; i<5; i++)
	{
	cout<<"Enter Number @ index: "<<i<<": ";
	cin>>A[i];	
	}
	for(int j=4; j>=0; j--)
	{
		cout<<"Number @ index: "<<j<<": "<<A[j]<<endl;
	}
	return 0;
}
