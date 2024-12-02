#include<iostream>
using namespace std;
int main()
{
	int A[4];
	int temp;
	for(int i=0; i<=3; i++)
	{
		cout<<"Enter Number @ index: "<<i<<"-->";
		cin>>A[i];
	}
		temp=A[3];
		cout<<"\nAfter Swapping the number at index 0 and index 3 numbers are: "<<endl<<endl;
	for(int j=0; j<=3; j++)
	{
		if(temp==A[3])
		{
			temp=A[3];
			A[3]=A[0];
			A[0]=temp;
		}
		cout<<"Number at index : "<<j<<" is "<<A[j]<<endl;
	}
	return 0;
}
