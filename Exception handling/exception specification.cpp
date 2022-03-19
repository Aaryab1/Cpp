#include<iostream>
#include<cstdlib>
#include<exception>
using namespace std;
void prog()
{
	cout<<"Unexpected exception found!!Terminating..";
	exit(0);
}
int main()throw(int,float)
{
	try{
		set_unexpected(prog);
		throw 'z';
	}
	catch(float n)
	{
		cout<<"Float error found!!";
	}
	catch(int n)
	{
		cout<<"Integer error found!!";
	}
}
