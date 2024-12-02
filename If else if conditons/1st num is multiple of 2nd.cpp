#include<iostream>
using namespace std;
int main()
{
	int num1, num2;
	cout<<"Input two Numbers: "<<endl; 
	cin>>num1>>num2;
	
	if(num1%num2==0)
	{
		cout<<"Num1 is multiple of Num2";
	}
	else
	{
		cout<<"num1 is not multiple of num2";
	}
	
	return 0;
}
