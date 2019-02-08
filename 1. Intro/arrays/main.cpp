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
    int x = 10;
    while (x >= 0) {
        if (x == 0)
            cout <<"Blast-off" << endl;
        else
            cout << x << endl;
        --x;
        }
    return 0;
}
