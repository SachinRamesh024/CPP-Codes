#include<iostream>
using namespace std;
int main()
{
	int product=1,sum=0;
	int array[0];
	cout<<"Enter five Nunbers in an Array: "<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<"Enter Number @ index: "<<i<<" : ";
		cin>>array[i];
	}
	for(int i=0; i<5; i++)
	{
		sum+=array[i];
		product*=array[i];
	}
	int average=sum/5;
	cout<<"Menu: ";
	for(int i=1; i<=3; i++)
	{
		int num;
		cout<<"\nEnter 1 to Display Sum: ";
		cout<<"\nEnter 2 to Display Product: ";
		cout<<"\nEnter 3 to Display Average: ";
		cin>>num;
		if(num==1)
		{
			cout<<"Sum of Elements of Array is: "<<sum;
		}
		else if(num==2)
		{
			cout<<"Product of Elements of Array is: "<<product;
		}
		else if(num==3)
		{
			cout<<"Average of Elements of Array is: "<<average;
		}
}
}
