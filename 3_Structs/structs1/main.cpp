#include <iostream>
using namespace std;

//First struct
struct person
{
    string name;
    int age;
    string gender;
};

struct Marriage
{
    person guy;
    person girl;
    int age;
    int people;
};

void printinfo(person p)
{
    cout <<"Name is: "<<p.name<<" Gender is: "<<p.gender<<" and age is: "<<p.age <<endl;
}

void printMarriageInfo(Marriage m)
{
    cout <<m.guy.name<<" got married to >> "<<m.girl.name<<" for "<<m.age <<" years!" <<endl;
}


int main()
{
    person ali;
    person mary = {"mary", 30, "female"};
    ali.name = "Syed Meesam Ali";
    ali.age = 32;
    ali.gender = "Male";
    printinfo(ali);
    Marriage marriage = {ali, mary, 10, 200};

    printMarriageInfo(marriage);
    return 0;
}
