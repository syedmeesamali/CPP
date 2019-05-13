#include <iostream>

using namespace std;

void increase(int& a) //Due to passing value as reference now the original value also will change
{
    a++;
    cout<<"Value of a: " << a << endl;
}

int main()
{
    //arguments passed by value don't change original
    int testNo = 5;
    increase(testNo);

    cout << "Test no. after increment: " << testNo << endl;
    return 0;
}
