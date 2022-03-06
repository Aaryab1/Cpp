#include<iostream>
using namespace std;
class base
{
	private:
		int num;
	public:
		void get()
		{
			cout<<"Enter the number(For base): ";
			cin>>num;
		}
		void print()
		{
			cout<<"The number is(base): "<<num;
		}
};
class derived: public base
{
	private:
		int num;
	public:
		void get()
		{
			base::get();
			cout<<"Enter the number(For derived): ";
			cin>>num;
		}
		void print()
		{
			base::print();
			cout<<"\nThe number is(For derived): "<<num;
		}
};
int main()
{
	derived d;
	d.get();
	d.print();
}
