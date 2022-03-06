#include<iostream>
using namespace std;
class student
{
	private:
		char name[25];
		int id;
	public:
		void getdata1()
		{
			cout<<"\nEnter name: ";
			cin>>name;
			cout<<"\nEnter id: ";
			cin>>id;
		}
		void showdata1()
		{
			cout<<"Name: "<<name<<"\nId:"<<id;
		}
};
class student_union:private student
{
	private:
		char union_name[25];
	public:
		void getdata()
		{
			cout<<"\nEnter union name: ";
			cin>>union_name;
		}
		void showdata()
		{
			cout<<"\nUnion Name: "<<union_name;
		}
};
int main()
{
	class student_union s;
//	s.getdata1();Inaccessible
	s.getdata();
//	s.showdata1();//Inaccessible
	s.showdata();
}
