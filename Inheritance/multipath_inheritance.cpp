#include<iostream>
using namespace std;
class base
{
	public:
		int i;
};
class derived1: public base
{
	public:
		int j;
};
class derived2: public base
{
	public:
		int k;
};
class son: public derived1, public derived2
{
	public:
		int sum;
};
int main()
{
	son s;
//	s.i=10; ambigious
	s.j=10;
	s.k=11;
	s.sum = /*s.i*/ + s.j+s.k;//ambigious
//	cout<<s.i<<endl;ambigious
	cout<<s.j<<endl;
	cout<<s.k<<endl;
	cout<<"Total="<<s.sum;
}

