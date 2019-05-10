#include <iostream>
using namespace std;

template <class T>
class MathTools
{

public:
    T multiply(T a, T b)
    {
        return a * b;
    }

    T divide(T a, T b)
    {
        return a / b;
    }

    T add(T a, T b)
    {
        return a + b;
    }

    T subtract(T a, T b)
    {
        return a - b;
    }

};

int main()
{
    MathTools<int> intMaths;
    MathTools<double> dblMaths;
    cout << intMaths.add(3.2, 5.2) <<endl;
    cout << dblMaths.add(3.2, 5.2) <<endl;
    return 0;
}
