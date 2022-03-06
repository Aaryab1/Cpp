#include<iostream>
using namespace std;
class Dimension
{
protected:
int length;
int breadth;
public:
Dimension()
{
}
Dimension(int L, int B)
{
length=L;
breadth=B;
}
virtual void area()=0;
};
class Square:public Dimension
{
public:
Square(int L):Dimension(L,L)
{
}
void area()
{
cout<<"\nArea of Square is : "<<length*breadth;
}
};
class Rectangle:public Dimension
{
public:
Rectangle(int L, int B):Dimension(L,B){}
void area()
{
cout<<"\nArea of Rectangle is : "<<length*breadth;
}
};
int main()
{
Dimension d(5,10);
Square S1(10);
Rectangle R1(10,12);
Dimension *dptr[]={&S1,&R1};
for(int i=0;i<2;i++)
{
dptr[i]->area();
}
return 0;
}
