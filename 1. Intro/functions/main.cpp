#include <iostream>

using namespace std;

double circleArea(double r) {
    return 3.141 * r * r;
}

void swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int i = 0;
    int rad=0;
    int a = 15; int b = 35;
    for (i = 0; i<=100; i++) {
        if (i % 2 == 0) {
            cout <<"Even number : "<<i <<endl;
        }
    }
    cout << "Enter radius to calculate area of circle:" <<endl;
    cin >> rad;
    cout << "Circle area is: " <<circleArea(rad);
    swap(a,b);
    cout <<"Swapped values of a and b: "<<a <<" and " <<b <<endl;

    return 0;
}
