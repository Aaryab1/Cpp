#include<iostream>
using namespace std;
class base
{
	public:
		int base_var;
		void display()
		{
			cout<<"This is base"<<base_var<<endl;
		}
};
class derived:public base
{
	public:
		int derived_var;
		void display()
		{
			cout<<"This is base"<<base_var<<endl;
			cout<<"This is derived"<<base_var<<endl;
		}
};
int main()
{
	base *basepointer;
	derived obj;
	basepointer = &obj;
	basepointer->base_var=100;
	basepointer->display();
	derived *derivepointer;
	derivepointer=&obj;
	derivepointer->derived_var=200;
	derivepointer->display();
}
