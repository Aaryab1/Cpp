#include<iostream>
using namespace std;
class salary
{
	protected:
	float salary;
	public:
		getsalary(float s)
		{
			salary =s;
		}
};
class manager: public salary
{
	float bonus;
	public:
		void getbonus(float b)
		{
			bonus = b;
		}
		void netsal()
		{
			cout<<"\nTotal Salary(manager): "<< bonus+salary;
		}
};
class sales_person: public salary
{
	float bonus;
	public:
		void getbonus(float b)
		{
			bonus = b;
		}
		void netsal()
		{
			cout<<"\nTotal Salary(Sales person): "<<bonus+salary;
		}
};
int main()
{
	manager m;
	sales_person s;
	s.getsalary(1500);
	s.getbonus(500);
	m.getsalary(2000);
	m.getbonus(1000);
	s.netsal();
	m.netsal();
}
