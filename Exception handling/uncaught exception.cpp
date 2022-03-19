#include<iostream>
#include<cstdlib>
#include<exception>
using namespace std;
void prog()
{
	cout<<"Uncaught exception found!!Terminating..";
	exit(0);
}
int main()
{
	try{
		set_terminate(prog);
		throw 5;
	}
	catch(float n)
	{
		cout<<"Float error found!!";
	}
}
