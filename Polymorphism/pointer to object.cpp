#include<iostream>

#include<string.h>
using namespace std;
class Student
{
char name[20];
int roll;
public:
void set(char n[20], int r)
{
strcpy(name,n);
roll=r;
}
void display()
{
cout<<"\nName:"<<name;
cout<<"\nRoll:"<<roll;
}
};
int main()
{
Student s1;
Student *ptr, *btr;
ptr=&s1;
ptr->set("Sagarmatha",10);
s1.display();
btr=new Student();
btr->set("ACEM",12);
btr->display();
//delete btr;
return 0;
}
