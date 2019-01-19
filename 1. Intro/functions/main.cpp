#include <iostream>

using namespace std;

void test() {
    cout << "Testing testing" <<endl;

}

int returnFive() {
    return 5;
}

int multiply(int a, int b) {
    return a * b;
}

string createGreeting(string name) {
    return "Greetings " + name;
}

int main() {
    test();
    test();
    test();
    cout << returnFive() << endl;;
    cout << multiply (5,9) << endl;
    string name;
    cout <<"Enter some name for greetings!" <<endl;
    cin >> name;
    string greetString = createGreeting(name);
    cout << greetString;

    return 0;
}
