#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char ch;
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
