#include <iostream>
using namespace std;

class person
{
private:
    int code;
    string name;
    int age;
    string gender;
    int weight;

public:
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
//Defining new class below called as Employee
//It will INHERIT all the properties of person class

class Employee: public person
{
    public:
    Employee(string a, int b, string c, int d) : person(a,b,c,d)
    {

    }
};


int main()
{
    person ali("Meesam", 31, "male", 59);
    ali.printInfo();
    Employee meesam = Employee("Meesam shah", 32, "male", 62);
    meesam.printInfo();
    meesam.getCode();

    return 0;
}
