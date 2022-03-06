#include<iostream>
using namespace std;
class student
{
	protected:
		char name[25];
		int id;
	public:
		void getdata()
		{
			cout<<"\nEnter name: ";
			cin>>name;
			cout<<"\nEnter id: ";
			cin>>id;
		}
		void showdata()
		{
			cout<<"Name: "<<name<<"\nId:"<<id;
		}
};
class exam: public student
{
	protected:
		int sub1,sub2;
	public:
		void getmark()
		{
			cout<<"\nEnter marks of sub1:";
			cin>>sub1;
			cout<<"\nEnter marks of sub2:";
			cin>>sub2;
		}
		void showmark()
		{
			cout<<"\nSub1: "<<sub1<<"\nSub2: "<<sub2;
		}
};
class result:public exam
{
	protected:
		int total;
	public:
		
			void calculate()
			{
				total = sub1 + sub2;
			}
			void showtotal()
			{
				cout<<"\nTotal: "<<total;
			}
		
};
int main()
{
	result r;
	r.getdata();
	r.getmark();
	r.calculate();
	r.showdata();
	r.showmark();
	r.showtotal();
}
