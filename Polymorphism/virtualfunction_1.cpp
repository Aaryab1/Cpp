//TO THIS
#include<iostream>
using namespace std;
class base
{
	public:
		int base_var;
		virtual void display()
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
			cout<<"This is base from derived"<<base_var<<endl;
			cout<<"This is derived"<<base_var<<endl;
		}
};
int main()
{
	base *basepointer;
	derived obj;
	basepointer = &obj;
	basepointer->display();
}
