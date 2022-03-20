#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
class student
{
	char name[20];
	char address[20];
	int roll;
	float marks;
	public:
		void getdata()
		{
		cout<<"Enter Name: ";
		cin>>name;
		cout<<"Enter Address: ";
		cin>>address;
		cout<<"Enter Roll: ";
		cin>>roll;
		cout<<"Enter Marks: ";
		cin>>marks;
		}
		void putdata()
		{
			cout<<setw(10)<<name<<setw(15)<<address<<setw(10)<<roll<<setprecision(2)
			    <<setw(10)<<marks<<endl;
		}
};
int main()
{
	student s;
	int n;
	fstream inout;
	inout.open("student2.txt",ios::out | ios::in);
	cout<<"Enter the number of student: ";
	cin>>n;
	for(int i =0; i<n;i++)
	{
		s.getdata();
		inout.write((char*)&s,sizeof(s));
	}
	inout.seekg(0);
	while(inout.read((char*)&s,sizeof(s)))
	{
		s.putdata();
	}
	inout.close();
	cout<<"File written succesfully";
}
