#include <iostream>
using namespace std;

template <class T>
T multiply(T a, T b)
{
    return a * b;
}


int main()
{
    cout <<"Multiplication using template class: " << endl;
    cout << "5 * 3: " << multiply(5, 3) << endl;
    //cout << "5 * 3.0: " << multiply(5, 3.0) << endl;
    cout << "5.0 * 3.0: " << multiply(5.0, 3.0) << endl;

    return 0;
}
