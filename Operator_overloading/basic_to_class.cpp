#include<iostream>
#define MTF 3.280833;
using namespace std;
class distances
{
	int feet;
	float inch;
	public:
		distances()
		{
			feet = 0;
			inch =0;
		}
		distances(float m)
		{
			float total;
			total = m * MTF;
			feet = (int)total;
			inch = 12 * (total - feet);
		}
		void display()
		{
			cout<<"Feet = "<<feet<<"\tInches ="<<inch;
		}
};
int main()
{
	float meter;
	cout<<"Enter meter : ";
	cin>>meter;
	distances d(meter);
	cout<<"After conversion:\n";
	d.display();
}

