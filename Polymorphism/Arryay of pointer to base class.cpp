#include<iostream>
using namespace std;
class Animal
{
public:
virtual void display()
{
cout<<"\nAnimal class";
}
};
class Human:public Animal
{
public:
void display()
{
cout<<"\nHuman class";
}
};
class Cow:public Animal
{
public:
void display()
{
cout<<"\nCow class";
}
};
class Rabbit:public Animal
{
public:
void display()
{
cout<<"\nRabbit class";
}
};
int main()
{
Animal A1;
Human H1;
Cow C1;
Rabbit R1;
Animal *Aptr[] = {&A1,&H1,&C1,&R1};
for(int i=0;i<4;i++)
{
Aptr[i]->display();
}
return 0;
}
