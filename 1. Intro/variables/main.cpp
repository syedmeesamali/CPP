#include <iostream>

using namespace std;

int main()
{
    int test = 5;
    bool d = true;
    bool e = false;
    bool k = e && d;
    bool k2 = e || d;

    double h = 0.3;
    double j = 0.9;
    int x = h + j;
    cout << "Hello world!" << test << endl;
    cout << "Value of K is (AND): " <<k << endl;
    cout << "Value of L is (OR): " <<k2 << endl;
    cout << "Value of x is : " <<x << endl;
    cout <<"Because x is casted to int" <<endl;
    return 0;
}
