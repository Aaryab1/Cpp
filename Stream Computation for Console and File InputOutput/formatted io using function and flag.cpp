#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	cout.setf(ios::hex,ios::basefield);
	cout<<"Hexadecimal equivalent is: "<<n;
	cout.unsetf(ios::hex);
	cout.setf(ios::oct,ios::basefield);
	cout<<"\nOctadecimal eqyuivalent is: "<<n;
	cout.unsetf(ios::oct);
}
