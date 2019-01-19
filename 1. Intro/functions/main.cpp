#include <iostream>

using namespace std;

void test() {
    cout << "Testing testing" <<endl;

}

int returnFive() {
    return 5;
}

int main() {
    test();
    test();
    test();
    cout << returnFive() << endl;;
    return 0;
}
