#include <iostream>
using namespace std;

class person
{
private:
    int code;

public:
    string name;
    int age;
    string gender;
    int weight;

    //Below is a constructor for class person
    person(string a, int b, string c, int d)
    {
        cout << "Constructing object !" <<endl;
        name = a;
        age = b;
        gender = c;
        weight = d;
        code = 354;
    }

    person()
    {
        cout <<"No default arguments"<<endl;
        name = "no default name";
        age = 99;
        gender = "undefined";
        weight = 40;
    }

    void printInfo()
    {
        cout <<" Name is: " << name <<endl;
        cout <<" Age is: " << age <<endl;
        cout <<" Gender is: " << gender <<endl;
        cout <<" Weight is: " << weight <<endl;
    }

    void getCode()
    {
        cout <<"Current code is: " <<code << endl;
    }

    void setCode(int c)
    {
        if (code < 500)
        {
            code = c;
        } else
        {
            code = 500;
        }
    }

};

int main()
{
    person ali("Meesam", 31, "male", 59);
    ali.printInfo();
    person shah = person();
    ali.getCode();
    ali.setCode(340);
    shah.printInfo();
    return 0;
}
