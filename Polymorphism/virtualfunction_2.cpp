#include<iostream>
using namespace std;
class base
{
public:
virtual void display()
{
cout<<"\nbase class display function:";
}
void show()
{
cout<<"\nbase class show function:";
}
};
class derived : public base
{
public:
void display()
{
cout<<"\nderived class display function:";
}
void show()
{
cout<<"\nderived class show function:";
}
};
int main()
{
base *bptr,b1;
bptr=&b1;
bptr->show();
bptr->display();
derived d1;
bptr=&d1;
bptr->show();
bptr->display();
return 0;
}


