#include <iostream>

using namespace std;

int main()
{
    int a[3];
    a[0] = 23;
    a[1] = 35;
    a[2] = 40;


    int *p = &a[0];
    cout << a << endl;
    cout << &a[0] << endl;  //Name of an array is also a pointer
    cout << &a[1] << endl;
    cout << &a[2] << endl;
    cout <<endl << endl <<endl;
    cout << a << endl;
    cout << a+1 << endl;
    cout << a+2 << endl;
    cout <<endl << endl <<endl;
    cout << *a << endl;
    cout << *(a+1) << endl;
    cout << *(a+2) << endl;
}
