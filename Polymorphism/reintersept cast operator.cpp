#include <iostream>

using namespace std;

int main()

{

int* p = new int(65);
cout << p << endl;
char* ch = reinterpret_cast<char*>(p);

cout << *p << endl;

cout << *ch << endl;

cout << p << endl;

return 0;

}
