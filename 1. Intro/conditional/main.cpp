#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout <<"Enter a: " <<endl;
    cin >> a;
    cout <<"Enter b: " <<endl;
    cin >> b;

    if (a > b)
        cout << a <<" is > " << b <<endl;
    else
        cout << a <<" is < " << b << endl;
    return 0;
}
