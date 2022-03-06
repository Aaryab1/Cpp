//Polar coordinate(Source) to rectangular coordinate(destination)
#include<iostream>
#include<math.h>
using namespace std;
class polar
{
	float r, angle;
	public:
		polar()
		{
			r = 0;
			angle =0;
		}
		polar(float a , float b)
		{
			r = a;
			angle = b;
		}
		float getr()
		{
			return(r);
		}
		float getangle()
		{
			return(angle);
		}
};
class rectangle
{
	float xco,yco;
	public:
		rectangle()
		{
			xco=0;
			yco=0;
		}
		rectangle(float a,float b)
		{
			xco = a;
			yco =b;
		}
		rectangle(polar p)
		{
			float r,a;
			r = p.getr();
			a = p.getangle();
			xco = r*cos(a);
			yco = r*sin(a);
		}
		void display()
		{
			cout<<"X="<<xco<<"\tY="<<yco;
		}
};
int main()
{
	polar p(10,0.79);
	rectangle r;
	r = p;
	r.display();
}

