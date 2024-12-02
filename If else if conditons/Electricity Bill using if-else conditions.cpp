#include<iostream>
using namespace std;
int main()
{
	float bill;
	int units;
	cout<<"Enter Number of consumed units: ";
	cin>>units;
	
	if(units<=300)
	{
		bill=units*2;
	}
	else if(units>300 && units<500)
	{
		bill=units*5;
	}
	else
	{
		bill=units*7;
	}
	bill=bill+150;
	if(bill>2000)
	{
		bill=bill+(bill*0.05);
	 } 
	 cout<<"Total Bill= "<<bill;
}
