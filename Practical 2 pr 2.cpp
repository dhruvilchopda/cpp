#include<iostream>
using namespace std;
int main ()
{
	int i,j,k,count=1;
	for (i=0; i<=4; i++)
	{
		for(k=4; k>=i; k--)
		{
			cout<<" ";
		}
			for (j=1; j<=i; j++)
			{
				cout<<" "<<count++;
			}
		cout<<"\n";
	}
}
