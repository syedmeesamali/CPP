#include <iostream>
using namespace std;

//First struct
struct person
{
    string name;
    int age;
    string gender;
};

void printinfo(person p)
{
    cout <<"Name is: "<<p.name<<" Gender is: "<<p.gender<<" and age is: "<<p.age;
}

int main()
{
    person ali;
    ali.name = "Syed Meesam Ali";
    ali.age = 32;
    ali.gender = "Male";
    printinfo(ali);
    return 0;
}
