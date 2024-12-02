#include<iostream>
using namespace std;

void table(int num, int i)
{
	cout<<num<<"*"<<i<<"="<<num*i<<endl;
	if(i<10)
	{
		i++;
		table(num,i);
	}
}

int main()
{
	int num,i=1;
	cout<<"Enter Number: ";
	cin>>num;
	table(num,i);
	return 0;
}
