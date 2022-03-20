#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char name[20],address[20];
	int roll;
	long tell;
	ifstream in;
	in.open("List.txt",ios::in);
	while(in.fail())
	{
		cout<<"Error opening file!!";
		exit(0);
	}
	in>>name>>address>>roll>>tell;
	while(in)
	{
		cout<<name<<"\t"<<address<<"\t"<<roll<<"\t"<<tell<<endl;
		in>>name>>address>>roll>>tell;
	}
	in.close();
}
