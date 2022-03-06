#include<iostream>
#include<string.h>
using namespace std;
class Base
{
protected:
char *name;
public:
Base(char *n)
{
cout<<"\nBase constructor";
int l=strlen(n);
name=new char[l+1];
strcpy(name,n);
}
virtual void display()
{
cout<<"\nName:"<<name;
}
virtual ~Base()
{
cout<<"\nBase destructor";
delete[]name;
}
};
class Derived:public Base
{
char *address;
public:
Derived(char *name, char *ad):Base(name)
{
cout<<"\nDerived constructor";
int L=strlen(ad);
address=new char[L+1];
strcpy(address,ad);
}
void display()
{
Base::display();
cout<<"\nName:"<<name;
cout<<"\nAddress:"<<address;
}
~Derived()
{
cout<<"\nDerived destructor";
delete[] address;
}
};
int main()
{
Base *bptr;
bptr=new Base("Janak");
bptr->display();
delete bptr;
bptr=new Derived("Mina","Kalimati");
bptr->display();
delete bptr;
return 0;
}
