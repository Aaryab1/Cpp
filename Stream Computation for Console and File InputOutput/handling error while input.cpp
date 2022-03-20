#include<iostream>
using namespace std;
int main()
{
	int i;
	while(true)
	{
		cout<<"\nEnter the integer ";
		cin>>i;
		if(cin.good())
		{
			cin.ignore(10,'\n');
			break;
		}
		cin.clear();
		cout<<"\nPlease inpur the valid integer!!";
		cin.ignore(10,'\n');
	}
	cout<<"The input integer is: "<<i;
}
