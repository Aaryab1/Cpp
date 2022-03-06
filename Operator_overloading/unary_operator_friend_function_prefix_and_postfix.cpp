#include<iostream>
using namespace std;
class counter
{
	int count;
	public:
		counter()
		{
			count = 0;
		}
		counter(int a)
		{
			count = a;
		}
		void display()
		{
			cout<<count;
		}
		friend counter operator ++(counter &c);
		friend counter operator ++(counter &c,int);
};
counter operator ++(counter &c)
{
	return (++c.count); 
}
counter operator ++(counter &c,int)
{
	return (c.count++); 
}
int main()
{
	counter c1,c2;
	c1.display();
	cout<<endl;
	c2.display();
	++c1;
	++c2;
	c2++;
	cout<<endl;
	c1.display();
	cout<<endl;
	c2.display();
	
}
