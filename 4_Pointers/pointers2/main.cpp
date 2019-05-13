#include <iostream>

using namespace std;

int main()
{
    int myAge = 33;
    cout <<"My age is: " << myAge << endl;
    cout <<"Address of my age is: " << &myAge << endl;

    int* ptr = &myAge;  //Pointer variable stores LOCATION of another variable
    cout <<"Pointer points to location: " << ptr << endl;
    cout <<"Value pointed by pointer is: " << (*ptr) << endl;
    (*ptr)++;
    cout <<"Age value is: " <<myAge << endl;

    return 0;
}
