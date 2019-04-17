#include <iostream>
using namespace std;

int main()
{
    string name = "Ali";

    cout <<"Name is : "<< name <<" and address is: " << &name << endl;
    //Reference variable must always be initialized
    string &no_1 = name;
    cout <<"Name is : "<< no_1 <<" and address is: " << &no_1 << endl;

    no_1 = "Meesam";
    cout <<"Name is : "<< name <<" and address is: " << &name << endl;
    cout <<"Name is : "<< no_1 <<" and address is: " << &no_1 << endl;

    return 0;
}
