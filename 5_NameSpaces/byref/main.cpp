#include <iostream>

using namespace std;

void increase(int a)
{
    a++;
    cout<<"Value of a: " << a << endl;
}

int main()
{
    int testNo = 5;
    increase(testNo);
    cout << "Test no. after increment: " << testNo << endl;
    return 0;
}
