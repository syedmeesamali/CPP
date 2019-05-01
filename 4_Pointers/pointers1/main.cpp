#include <iostream>

using namespace std;

int main()
{
    int var = 5;
    cout << &var << endl;

    int *p; // * means that this variable is a POINTER only
    p = &var; //So now in this pointer variable p we can store the ADDRESS of variable 'var'

    cout << *p << endl; //This star helps to retrieve the value POINTED at by pointer variable p

    return 0;
}
