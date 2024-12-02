//Tracing IN Array

#include<iostream>
using namespace std;
int main()
{
	int size=0;
	int array[5];
	while(size<5)
	{
		cout<<"Enter Element @ "<<size<<" INDEX:";
		cin>>array[size];
		cout<<endl;
		size++;
	}
	size=0;
	while(size<5)
	{
		cout<<"\nElement @ "<<size<<" Index is: ";
		cout<<array[size]<<endl;
		size++;
	}
}
