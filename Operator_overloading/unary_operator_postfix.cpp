#include<iostream>
using namespace std;
class distances
{
	int m,cm;
	public:
		distances()
		{
			m=0;
			cm=0;
		}
		distances(int a,int b)
		{
			m= a;
			cm =b;
		}
		void display()
		{
			cout<<"Meter ="<<m<<"\tCentimeter ="<<cm;
		}
		distances operator ++(int)
		{
			distances temp;
			temp.m = m++;
			temp.cm = cm++; 
			return temp;
		}
		
};
int main()
{
	distances d1(1,2),d2;
	cout<<"Before:";
	cout<<"\nFirst distance:\n";
	d1.display();
	cout<<"\nSecond distance:\n";
	d2.display();
	d2 = d1++;
	cout<<"\nAfter:";
	cout<<"\nFirst distance:\n";
	d1.display();
	cout<<"\nSecond distance:\n";
	d2.display();
	
	
}
