#include<iostream>
using namespace std;
template<class T1,class T2, class T3>
void calculatesize(T1 a, T2 b , T3 c)
{
	cout<<"The size of a is: "<<sizeof(a)<<"bytes"<<endl;
	cout<<"The size of b is: "<<sizeof(b)<<"bytes"<<endl;
	cout<<"The size of c is: "<<sizeof(c)<<"bytes"<<endl;
}
int main()
{
	calculatesize(10,7.2,'a');
}
