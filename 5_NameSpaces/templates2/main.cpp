#include <iostream>
using namespace std;

class IntMathTools
{

public:
    int multiply(int a, int b)
    {
        return a * b;
    }

    int divide(int a, int b)
    {
        return a / b;
    }

    int add(int a, int b)
    {
        return a + b;
    }

    int subtract(int a, int b)
    {
        return a - b;
    }

};

int main()
{
    IntMathTools mathtools = IntMathTools();
    cout << mathtools.add(3,2) <<endl;
    cout << mathtools.divide(5,3) <<endl;
    return 0;
}
