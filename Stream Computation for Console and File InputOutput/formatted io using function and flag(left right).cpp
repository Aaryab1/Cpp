#include<iostream>
using namespace std;
int main()
{
	cout.width(50);
	cout.setf(ios::left);
	cout<<"This is left justified"<<endl;
	cout.unsetf(ios::left);
	cout.width(50);
	//cout.setf(ios::right); by default right justify
	cout<<"This is right justified"<<endl;
	//cout.unsetf(ios::right);
	
}
