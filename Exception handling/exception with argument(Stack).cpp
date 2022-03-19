#include<iostream>
#define size 3
using namespace std;
class stack{
	int A[size];
	int top;
	public:
		stack()
		{
			top = -1;
		}
		class out_of_range
		{
			
		};
		void push(int data)
		{
			if(top==size-1)
			{
				throw out_of_range();
			}
			else
			{
				top++;
				A[top]=data;
			}
		}
		void pop()
		{
			if(top<0)
			{
				throw out_of_range();
			}
			else {
				cout<<A[top]<<endl;
				top--;
			}
		}
};
int main()
{
	stack s;
	try{
	
	s.push(1);
	s.push(2);
	s.push(3);
	//s.push(4);
	cout<<"Popped elelment: "<<endl;
	s.pop();
	s.pop();
	s.pop();
	s.pop();
}
	catch(stack::out_of_range)
	{
		cout<<"The stack is full or empty"<<endl;
	}
}
