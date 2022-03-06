//Polar coordinate(Source) to rectangular coordinate(destination)
#include<iostream>
#include<math.h>
using namespace std;
class rectangle
{
	float x,y;
	public:
		rectangle()
		{
			x=0;
			y=0;
		}
		rectangle(float a, float b)
		{
			x = a;
			y = b;
		}
		void display()
		{
			cout<<"X="<<x<<"\tY="<<y;
		}
};
class polar
{
	float r , angle;
	public:
		polar()
		{
			r = 0;
			angle = 0;
		}
		polar(float a , float b)
		{
			r = a;
			angle = b;
		}
		operator rectangle()
		{
			float x,y;
			x = r * cos(angle);
			y = r * cos(angle);
			return rectangle(x,y);
		}
};
int main()
{
	polar p(70,70);
	rectangle r;
	r = p;
	r.display();
}
