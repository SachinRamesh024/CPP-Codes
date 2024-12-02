#include<iostream>
using namespace std;


/*
call catenation.

keyword operator is used to overload the operators.

return type operator (keyword) operator used)(class name )

obj1+obj2---> argument passed is of right side of obj1 
for obj1 the method is called. 

void operator +()---> no error because keyword operator is used.
void +()----> Error will be generated.

*/
class A{
	private:
	int value;
	public:
		A(){
			value=0;
		}
		A(int v)
		{
			value=v;
		}
		int get()
		{
			return value;
		}
		A operator /(A O2){
			A temp;
			temp.value=value/O2.value;
			return temp;
		}
};
int main()
{
	A obj1(10);
	A obj2(5);
	A obj3=obj1/obj2;
	
	cout<<obj3.get();
}
