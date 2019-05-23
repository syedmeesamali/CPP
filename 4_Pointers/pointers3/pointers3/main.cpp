#include <iostream>

using namespace std;

int main()
{
    int a[3];
    short int zm;
    int *p = &a[0];
    cout << a << endl;
    cout << &a[0] << endl;  //Name of an array is also a pointer
    cout << p << endl;
}
