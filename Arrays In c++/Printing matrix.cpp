#include<iostream>
using namespace std;
int main()
{
	int array[3][2]={{2,4},{6,8},{10,2}};
	for(int row=2; row>=0; row--)
	{
		cout<<"[";
		for(int column=1; column>=0; column--)
		cout<<array[row][column]<<" ";
		cout<<"]"<<endl;
	}
	
}
