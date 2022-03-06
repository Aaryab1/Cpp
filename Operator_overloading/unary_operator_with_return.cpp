#include<iostream>
using namespace std;
class complex
{
	int real,img;
	public:
		complex()
		{
			real = 0;
			img =0;
		}
		complex(int a ,int b)
		{
			real = a;
			img = b;
		}
		complex operator -()
		{
			complex temp;
			temp.real = -real;
			temp.img = - img;
			return temp;
		}
		void display()
		{
			cout<<"\nReal part: "<< real<<"\nImaginary part: "<< img;
		}
};
int main()
{
	complex c1(1,2), c2;
	cout<<"Before:";
	c2.display();
	c2 = -c1;
	cout<<"\nAfter:";
	c2.display();
}
