#include<iostream>
using namespace std;
template <class T , int size>
class stack
{
	T A[size];
	int top;
	public:
		stack(){
			top = -1;
		}
		void push(T data)
		{
			if (top == size - 1)
			{
				cout<<"\nStack is full";
			}
			else
			{
				top ++;
				A[top] = data;
			}
		}
		void pop()
		{
			if (top<0)
			{
				cout<<"\nStack is empty";
			}
			else
			{
				cout<<"\nPopped element is: "<<A[top];
				top--;
			}
		}
};
int main()
{
	stack <int,3>si;
	si.push(3);
	si.push(2);
	si.push(1);
	si.push(0);
	si.pop();
	si.pop();
	si.pop();
	si.pop();
	stack <float,2>sf;
	sf.push(3.2);
	sf.push(2.2);
	sf.push(1.1);
	sf.pop();
	sf.pop();
	sf.pop();
}
