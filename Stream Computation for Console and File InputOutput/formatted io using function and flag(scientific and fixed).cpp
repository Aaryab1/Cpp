#include<iostream>
using namespace std;
int main()
{
	float b=57693293023;
	cout.setf(ios::scientific,ios::floatfield);
	cout<<b<<endl;
	cout.unsetf(ios::scientific);
	cout.setf(ios::fixed,ios::floatfield);
	cout<<b<<endl;
	cout.unsetf(ios::fixed);
}
