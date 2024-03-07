// c++ program to swap two numbers
// pass by reference 
#include<iostream>
using namespace std;
void swap(int &x,int &y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}
int main ()
{
	int a=25,b=35;
	cout<<"Before swap\n";
	cout<<"a="<<a<<"\n"<<"b="<<b<<"\n";
	
	swap (a,b);
	
	cout<<"After swap with pass by reference\n";
	cout<<"a="<<a<<"\n"<<"b="<<b<<"\n";
	
}
