#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter any two number: ";
	cin>>a>>b;
	int x = a-b;
	try{
		if(x!=0)
		{
			cout<<"The result is:"<<a/x;
		}
		else
		{
			throw(x);
		}
	}
	catch(int i)
	{
		cout<<"Exception Caught X ="<<i;
	}
}
