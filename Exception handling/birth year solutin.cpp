#include<iostream>
using namespace std;
int main()
{
	int year,month,day;
	cout<<"Enter your Birth year: ";
	cin>>year;
	cout<<"Enter your Birth month: ";
	cin>>month;
	cout<<"Enter your Birth day: ";
	cin>>day;
	try{
		if(year>=1980 && year<=2000){
		}
		else
		{
			throw 'a';
		}
		if(month>=1 && month<=12){
		}
		else
		{
			throw 1;
		}
		if(day>=1 && day<=30){
		}
		else
		{
			throw 2.0;
		}
		cout<<"Your Birth :"<<year<<"/"<<month<<"/"<<day<<endl;
	}
	
	catch(char p)
	{
		cout<<"Please input validate year!!";
	}
	catch(int p)
	{
		cout<<"Please input validate month!!";
	}
	catch(double p)
	{
		cout<<"Please input validate day!!";
	}
	
}
