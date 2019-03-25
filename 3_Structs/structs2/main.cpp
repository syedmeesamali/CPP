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
        name = a;
        age = b;
        gender = c;
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
    return 0;
}

//Below code for comparison only
/*
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

*/
