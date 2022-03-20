#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char ch;
	ifstream in;
	in.open("first.txt",ios::in);
	fstream out;
	out.open("second.txt",ios::out | ios::in);
	if(in.fail())
	{
		cout<<"Error opening file exiting...";
		exit(0);
	}
	while(in)
	{
		in.get(ch);
		 if( ch >= 'a' && ch <= 'z' )
        {
           ch = ch - 32;
        }
        out.put(ch);
	}
	cout<<"File copied succesfully"<<endl;
	in.close();
	out.seekg(0);
	cout<<"Content of the file: "<<endl;
	if(out.fail())
	{
		cout<<"Error opening file exiting...";
		exit(0);
	}
	while(out)
	{
		out.get(ch);
		cout.put(ch);
	}
	out.close();
}
