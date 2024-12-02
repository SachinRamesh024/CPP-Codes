#include<iostream>
using namespace std;
int main()
{
	char anychar;
	cout<<"Enter Any character: ";
	cin>>anychar;
	
	switch(anychar){
	case 'a': case 'A': case 'e': case 'E': case 'i': case 'I': case 'O': case 'o': case 'U':case 'u':
	{
	 cout<<"Its Vowel" <<endl; break;
	 } 
	case 'B': case 'b': case 'C': case 'c': case 'D': case 'd': case 'f': case 'F': case 'g': case 'G': case 'h': case 'H': case 'J': case 'j': 
	case 'k': case 'K': case 'l': case 'L': case 'M': case 'm': case 'N': case 'n': case 'p': case 'P': case 'q': case 'Q': case 'r': case 'R': 
	case 'S': case 's': case 'T': case 't': case 'v': case 'V': case 'w': case 'W': case 'x': case 'X': case 'y': case 'Y': case 'z':case 'Z':
	{ 
	cout<<"Its consonant" <<endl; break;	
}
	default : 
	{
	cout<<"Enter any Letter"<<endl;
}
	return 0;
	
}
}
