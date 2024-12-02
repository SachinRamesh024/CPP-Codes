#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter Size of Your array: ";
	cin>>size;
	int array[size];
	for(int i=0 ; i<size ; i++)
	{
		cout<<"Enter Number @ index: "<<i<<" : ";
		cin>>array[size];
	}
//	int largest_three=array[0];
	int i1,i2,i3;
//	i1=i2=i3;
	for(int i=0; i<size; i++)
	{
		
		if(array[i]>array[0])
		{
			i1=array[i];
		}
		else if(array[i]>array[1])
		{
			i2=array[i];
		}
		if(array[i]>array[3])
		{
			i3=array[i];		
			}
	}
	cout<<"Largest three Elements are: "<<i1<<" : "<<i2<<" : "<<i3;
	return 0;
}
