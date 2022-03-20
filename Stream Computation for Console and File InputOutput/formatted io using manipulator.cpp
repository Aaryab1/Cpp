#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float x=0.29392;
	cout<<setw(9)<<setfill('*')<<"Pulchowk"<<setw(20)<<"Values"<<endl;
	cout<<setprecision(3)<<x<<endl;
	cout<<scientific<<x<<endl;
}
