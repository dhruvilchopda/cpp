#include<iostream>
using namespace std;
int main ()
{
	int a,b,add,sub,multi,division,modulo;
	
	// getting input from the user
	cout<<"Enter a :";
	cin>>a;
	cout<<"Enter b :";
	cin>>b;
	
	// Perform arihmetic operations
	add = a+b;
	sub = a-b;
	multi = a*b;
	division = a/b;
	modulo = a % b;
	
	// Dsplay result
	cout<<"Addition ="<<add<<endl;
	cout<<"Subtraction = "<<sub<<endl;
	cout<<"Multiplication ="<<multi<<endl;
	cout<<"Division ="<<division<<endl;
	cout<<"Modulo ="<<modulo;
	
	return 0;
	
	
}

