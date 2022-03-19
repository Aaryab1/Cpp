#include<iostream>
using namespace std;
int main()
{
	int a,b,x;
	char name[]="Aaryab";
	cout<<"Enter two numbers: ";
	cin>>a>>b;
	x = a-b;
	try{
		if(x==0)
		{
			throw(x);
		}
		else
		{
			cout<<"The result of a/x is: "<<a/x<<endl;
		}
		for(int i = 0;i<=20;i++)
		{
			if(i>5)
			{
				throw(name[i]);
			}
			cout<<name[i];
		}
		}
		catch(int ci)
		{
			cout<<"Exception Occured due to zero";
		}
		catch(char ce)
		{
			cout<<endl<<"Exception Occured due to array out of bound";
		}
		return 0;
}
