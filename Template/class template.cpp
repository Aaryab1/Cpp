#include<iostream>
using namespace std;
template <class T>
class rectangle
{
	T len,bread;
	public:
		rectangle()
		{
			len = 0;
			bread =0;
		}
		rectangle(T a , T b):len(a),bread(b){
		}
		T area()
		{
			return(len * bread);
		}
};
int main()
{
	rectangle <int>ri(2,5);
	rectangle <float> rf(2.5,2.6);
	cout<<"The area of integer rectangle is: "<<ri.area()<<endl;
	cout<<"The area of float rectangle is: "<<rf.area();
}
