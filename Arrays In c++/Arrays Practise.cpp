#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int myarray[5];
	int sum=0, product=1;
	double average;
	
	for(int i=0; i<5; i++)
	{
		cout<<"Enter Number @ index: "<<i<<": ";
		cin>>myarray[i];	
	}
	
	cout<<"Press 1 for Sum of all Numbers: "<<endl;
	cout<<"Press 2 for Product of all Numbers: "<<endl;
	cout<<"Press 3 for Average of all Numbers: "<<endl;
	
	char hold;
	hold=getch();
	if(hold=='1')
	{
	for(int j=0; j<5; j++)
		sum+=myarray[j];
	cout<<"Sum of Numbers is : "<<sum;
	}
	else if(hold=='2')
	{
		for(int k=0; k<5; k++)
		product*=myarray[k];
		cout<<"Product of Number is: "<<product;
	}
	else if(hold=='3')
	{
		for(int l=0; l<5; l++)
		{
			sum+=myarray[l];
		}
		average=sum/5;
		cout<<"Average of Numbers is : "<<average;
	}
	else
	cout<<"Enter valid Number!";

	return 0;
	
}
