#include<iostream>
#include<cmath>
using namespace std;
int main()
{

	int choice;
	float area,circumference,radius;
	const float pi=3.14;
	
	cout<<"Enter the value of radius: ";
	cin>>radius;
	
	cout<<"Enter choice for Area or Circumference: ";
	cin>>choice;
	if(choice==1)
	{
		area=pi*pow(radius,2)
		cout<<"Area is: "<<area; 
	}
	else if (choice==2)
	{
		circumference=2*pi*radius
		cout<<"Circumference is: "<<circumference;
	}
}
