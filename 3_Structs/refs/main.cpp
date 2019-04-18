#include <iostream>
using namespace std;
void swap(int &, int &);

int main()
{
    int a = 15;
    int b = 20;

    swap (a,b);
    cout <<"a is now: " << a << endl;
    cout <<"b is now: " << b << endl;

    return 0;
}

void swap(int &a, int &b)
{
    int t;
    t = a;
    a = b;
    b = t;
}
