//Program to print  the Assignment Operators in C++
#include <iostream>
using namespace std;

int main()
{
 int a = 3, b = 4;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "a += b is " << (a += b) << endl;
    cout << "a -= b is " << (a -= b) << endl;
    cout << "a *= b is " << (a *= b) << endl;
    cout << "a /= b is " << (a /= b) << endl;

 return 0;
}
