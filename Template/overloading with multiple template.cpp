#include<iostream>
using namespace std;
template <class T>

void mini(T a, T b)

{

cout<<"\nTwo argument template function:";

if(a<b)

{

cout<<a;

}

else

{

cout<<b;

}

}

template <class T>

void mini(T a, T b, T c)

{

cout<<"\nThree argument template function:";

if(a<b)

{

if(a<c)

{

cout<<a;

}

else

{

cout<<c;

}

}

else

{

if(b<c)

{

cout<<b;

}

else

{

cout<<c;

}

}

}

int main()

{

mini(10,20);

mini(30,20,50);

return 0;

}
