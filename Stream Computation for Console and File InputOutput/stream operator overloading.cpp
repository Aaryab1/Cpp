#include<iostream>
using namespace std;
class complex
{
	float real,img;
	public:
		complex()
		{
			real=0;
			img =0;
		}
		friend istream& operator>>(istream& in,complex &c)
		{
			cout<<"Input real and imaginary part: ";
			in>>c.real>>c.img;
		}
		friend ostream& operator<<(ostream& out,complex &c)
		{
			cout<<"Real Part: ";
			out<<c.real;
			cout<<"\nImaginary Part: ";
			out<<c.img;
		}
};
int main()
{
	complex c;
	cin>>c;
	cout<<c;
}
