#include<iostream>
using namespace std;
class student
{
	private:
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
class student_union:public student
{
	private:
		char union_name[25];
	public:
		void getdata()
		{
			student::getdata();
			cout<<"\nEnter union name: ";
			cin>>union_name;
		}
		void showdata()
		{
			student::showdata();
			cout<<"\nUnion Name: "<<union_name;
		}
};
int main()
{
	class student_union s;
	s.getdata();
	s.showdata();
}
