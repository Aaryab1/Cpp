#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int main()
{
	char name[20],address[20],ch;
	int roll,n;
	long tell;
	ofstream out;
	out.open("List.txt",ios::out);
	cout<<"How many number of student you want to enter?";
	cin>>n;
	out<<"Name"<<"\t\tAddress"<<"\t\tRoll"<<"\t\tPhone"<<endl; 
	for(int i=0;i<n;i++)
	{
		cout<<"Enter Name: ";
		cin>>name;
		cout<<"Enter Address: ";
		cin>>address;
		cout<<"Enter Roll: ";
		cin>>roll;
		cout<<"Enter telephone: ";
		cin>>tell;
		out<<name<<"\t\t"<<address<<"\t\t"<<roll<<"\t\t"<<tell<<endl;
	}
	cout<<"File return Successfully\n";
	out.close();
	ifstream in;
	in.open("List.txt",ios::in);
	if(in.fail())
	{
		cout<<"Error opening file exiting...";
		exit(0);
	}
	while(in)
	{
		in.get(ch);
		cout.put(ch);
	}
	in.close();
}
