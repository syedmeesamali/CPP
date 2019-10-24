#include <iostream>
using namespace std;
//Generalization of functions

template <class Mine>
class MathTools
{

public:
    Mine multiply(Mine a, Mine b)
    {
        return a * b;
    }

    Mine divide(Mine a, Mine b)
    {
        return a / b;
    }

    Mine add(Mine a, Mine b)
    {
        return a + b;
    }

    Mine subtract(Mine a, Mine b)
    {
        return a - b;
    }

};

int main()
{
    MathTools<int> intMaths;
    MathTools<double> dblMaths;
    MathTools<string> stringMaths;
    cout << MathTools.add<double, double>(3.2, 5.2) <<endl;
    cout << dblMaths.add(3.2, 5.2) <<endl;
    cout << stringMaths.add("ali ", "shah") <<endl;
    return 0;
}
