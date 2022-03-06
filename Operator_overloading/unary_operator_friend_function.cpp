#include<iostream>
using namespace std;
class complex
{
	int real,img;
	public:
		complex()
		{
			real =0;
			img =0;
		}
		complex(int a,int b)
		{
			real =a;
			img = b;
		}	
		void display()
		{
			cout<<"Real part="<<real<<endl<<"Imaginary Part="<<img<<endl;
		}
		friend complex operator -(complex);
};
complex operator -(complex a)
{
	complex temp;
	temp.real = -a.real;
	temp.img = -a.img;
	return temp; 
}
int main()
{
	complex c1(1,2),c2;
	c2 = -c1;
	c2.display();
}
