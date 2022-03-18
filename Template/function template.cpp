#include<iostream>
using namespace std;
template<class T>
T add(T x, T y)
{
	T sum;
	sum = x + y;
	return sum;
}
int main()
{
	int a=100,b=100;
	int sumi;
	float c=103.2,d=98.2;
	float sumf;
	sumi = add(a,b);
	sumf = add(c,d);
	cout<<sumi<<endl<<sumf;
}
