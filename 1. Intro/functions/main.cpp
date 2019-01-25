#include <iostream>

using namespace std;

int circleArea(double r) {
    return 3.141 * r * r;
}

int main() {
    int num = -5;
    int i = 0;
    int rad=0;
    for (i = 0; i<=100; i++) {
        if (i % 2 == 0) {
            cout <<"Even number : "<<i <<endl;
        }
    }
    cout << "Enter radius to calculate area of circle:" <<endl;
    cin >> rad;
    cout << "Circle area is: " <<circleArea(rad);
    return 0;
}
