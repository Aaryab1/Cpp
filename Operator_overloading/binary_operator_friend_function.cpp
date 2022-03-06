#include<iostream>
using namespace std;
class distances
{
	int feet ,inch;
	public:
		distances()
		{
			feet = 0;
			inch = 0;
		}
		distances(int a,int b)
		{
			feet  = a;
			inch = b;
		}
		void display()
		{
			cout<<"Feet = "<< feet<<"\t Inches = "<<inch;
		}
		friend distances operator +(int,distances);
};
distances operator +(int n,distances d)
{
	distances temp;
	temp.feet =  n + d.feet;
	temp.inch = n + d.inch;
	if (temp.inch>=12)
	{
		temp.feet = temp.feet + temp.inch/12;
		temp.inch = temp.inch %12;
	}
	return temp;
}
int main()
{
	distances a(6,9),b;
	b = 5 + a;
	cout<<"Orginal:"<<endl;
	a.display();
	cout<<endl<<"Final:"<<endl;
	b.display();
}
