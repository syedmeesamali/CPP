#include <iostream>
using namespace std;

class person
{
public:
    string name;
    int age;
    string gender;

    //Below is a constructor for class person
    person(string a, int b, string c)
    {
        cout << "Constructing object !" <<endl;
        name = a;
        age = b;
        gender = c;
    }

    person()
    {
        cout <<"No default arguments"<<endl;
        name = "no default name";
        age = 99;
        gender = "undefined";
    }

    void printInfo()
    {
        cout <<" Name is: " << name <<endl;
        cout <<" Age is: " << age <<endl;
        cout <<" Gender is: " << gender <<endl;
    }

};

int main()
{
    person ali("Meesam", 31, "male");
    ali.printInfo();
    person shah = person();
    shah.printInfo();
    return 0;
}
