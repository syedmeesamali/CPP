#include <iostream>
using namespace std;

int main()
{
    string name = "Ali";

    cout <<"Name is : "<< name <<" and address is: " << &name << endl;
    string &no_1 = name;
    cout <<"Name is : "<< no_1 <<" and address is: " << &no_1 << endl;
    return 0;
}
