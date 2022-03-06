//Unary operator

#include<iostream>
using namespace std;
class sample
{
	int x,y,z;
	public:
		sample(int a, int b, int c)
		{
			x = a;
			y = b;
			z = c;
		}
		void display()
		{
			cout<< x << endl << y << endl <<z<<endl;
		}
		void operator -()
		{
			x = -x;
			y = -y;
			z = -z;
		}
};
int main()
{
	sample s(1,2,3);
	cout<<"Before:\n";
	s.display();
	-s;
	cout<<"After:\n";
	s.display();
	
}
