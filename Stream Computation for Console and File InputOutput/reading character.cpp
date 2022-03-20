#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char ch;
	ifstream in;
	in.open("student.txt",ios::in);
	if(in.fail())
	{
		cout<<"Error opening file exiting...";
		exit(0);
	}
	cout<<"Content of the file: "<<endl;
	while(ch!='\n')
	{
		in.get(ch);
		cout.put(ch);
	}
	in.close();
}
