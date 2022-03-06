#include<iostream>
using namespace std;
class complex
{
	int img,real;
	public:
		complex()
		{
			real = 0;
			img = 0;	
		}
		complex(int a,int b)
		{
			real = a;
			img = b;	
		}	
		void display()
		{
			cout<<real<<"+j"<<img;
		}
		complex operator +(complex c)
		{
			complex temp;
			temp.real= real + c.real;
			temp.img= img + c.img;
			return temp;
		}
};
int main()
{
	complex c1(1,2),c2(3,4),c3;
	c3 = c1 + c2;
	cout<<"The result of addition is: ";
	c3.display();
}
