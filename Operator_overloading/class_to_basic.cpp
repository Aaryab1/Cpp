#include<iostream>
#define MTF 3.280833
using namespace std;
class distances
{
	int feet;
	float inch;
	public:
		distances()
		{
			feet = 0;
			inch = 0;
		}
		distances(int a,float b)
		{
			feet = a;
			inch =b;
		}
		operator float()
		{
			float f= inch /12;
			f = f + feet;
			return(f/feet);
		}
};
int main()
{
	distances d(3,3.37);
	float meter;
	meter = d;
	cout<< meter;
	
}
