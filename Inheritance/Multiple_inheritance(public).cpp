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
class student_union
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
class leader: public student,public student_union
{
	private :
		char program[10];
	public:
		void getdata()
		{
				student::getdata();
				student_union::getdata();
				cout<<"\nEnter your program: ";
				cin>>program;
		}
		void showdata()
		{
				student::showdata();
				student_union::showdata();
				cout<<"\nProgram: "<<program;
		}
};
int main()
{
	class leader l;
	l.getdata();
	l.showdata();
}
