#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char ch;
	ofstream out;
	out.open("student.txt",ios::out);
	while(ch!='\n')
	{
		cin.get(ch); 
		out.put(ch);
	}
	out.close();
	cout<<"File written succesfully";
}
