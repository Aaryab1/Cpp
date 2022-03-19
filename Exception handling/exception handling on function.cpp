#include<iostream>
using namespace std;
void divide(int x, int y,int z)
{
	int r = x-y;
	if(r!=0)
	{
		cout<<"The result of z/r is: "<<z/r<<endl;
	}
	else
	{
		throw(r);
	}

}
int main()
{
	try{
		divide(20,10,30);
		divide(10,10,30);
	}
		catch(int i)
	{
		cout<<"Excepetion Occured R ="<<i<<endl;
	}
	
}
