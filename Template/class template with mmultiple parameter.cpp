#include<iostream>
using namespace std;
template<class T1,class T2>
class distances
{
	T1 feet  ;
	T2 inch;
	public:
		distances(){
		}
		distances(T1 x, T2 y):feet(x),inch(y){
		}
		void show_data()
		{
			cout<<"Feet= "<<feet<<"Inches= "<<inch;
		}
};
int main()
{
	distances <int,float>d(10,12.6);
	d.show_data();
}
