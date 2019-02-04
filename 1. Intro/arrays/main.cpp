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
    Rectangle rects[4];
    rects[0].length = 4;
    rects[0].width = 3;
    cout << "Area of rectangle - 1 is: " << area(rects[0].length, rects[0].width) << endl;
    for (int i=1; i<4; i++) {
        cout << "Enter length of rect: " <<i+1 << endl;
        cin >> rects[i].length;
        cout << "Enter width of rect: " <<i+1 << endl;
        cin >> rects[i].width;
    cout << "Area of rectangle " << i+1 << "is: " << area(rects[i].length, rects[i].width) << endl;
    }
    cout << "End of program !" <<endl;
    return 0;
}
