#include<iostream>
using namespace std;
class base
{
public:
virtual void display()
{
cout<<"\nBase class display function";
}
};
class derived1:public base
{
public:
void display()
{
cout<<"\nDerived1 class display function";
}
};
class derived2:public derived1
{
public:
void display()
{
cout<<"\nDerived2 class display function";
}
};
int main()
{
base *bptr;
derived1 d1;
bptr=&d1;
bptr->display();//invokes derived1 display() as it is virtual in base
derived1 *dptr;
derived2 d2;
dptr=&d2;
dptr->display();//invokes derived2 display() due to inheritance
return 0;
}
