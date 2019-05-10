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

    return 0;
}
