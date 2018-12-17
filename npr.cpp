#include<iostream>
using namespace std;
int factorial(int n);
int nPr(int n , int r );

int main()
{
	int n,r;
	cout<<"\n\n\t\t Enter the Value of n and r  =  ";
	cin>>n>>r;
	
	
	
	cout<<"\n\n\t\t nPr  =  "<<nPr(n,r);
}

int factorial(int n)
{
	int result=1
	;
	for(int i=1; i<=n; i++)
	{
		result= result*i;
	}
	return result;
}

int nPr(int n , int r )
{
	if(n<r)
	{
		return 0;
	}
	else
	{
		return factorial(n)/factorial(n-r);
	}
	
	
}
