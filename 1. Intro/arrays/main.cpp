#include <iostream>
using namespace std;

struct Rectangle {
    int length;
    int width;
};

int area(int a, int b) {
    return a*b;
}

int main()
{
    int x = 0;
    while (x <= 50) {
        if (x < 10)
            cout <<"0" << x << endl;
        else
            cout << x << endl;

        if (x % 10 == 0)
            cout << "\n" <<endl;

        ++x;
        }
    return 0;
}
