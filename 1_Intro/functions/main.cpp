#include <iostream>

using namespace std;

void swap1(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}

void swap2(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 15; int b = 35;
    swap1(a,b);
    cout <<"Swap1: values of a and b: "<<a <<" and " <<b <<endl;
    swap2(a,b);
    cout <<"Swap1: values of a and b: "<<a <<" and " <<b <<endl;
    return 0;
}
