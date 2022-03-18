#include<iostream>
using namespace std;
template <class T>
void great(T a, T b)
{
	cout<<"Template function: \n";
	if(a>b)
	{
		cout<<a<<" is greater"<<endl;
	}
	else
	{
		cout<<b<<" is greater"<<endl;
	}
}
void great(int a,int b)
{
	cout<<"Integer function: \n";
	if(a>b)
	{
		cout<<a<<" is greater"<<endl;
	}
	else
	{
		cout<<b<<" is greater"<<endl;
	}
}
int main()
{
	great(1,2);
	great(10.25,20.25);
}
