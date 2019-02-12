#include <iostream>

using namespace std;

int main()
{
    int a = 4;
    cout <<"variable a has value: " << a <<endl;
    cout <<"address of a is: "<< &a <<endl;
    char t4 = 'a';
    cout <<"Char t4 has value: " << t4 <<endl;
    string new1 = "First string";
    cout <<"String new1 has value: " << new1 <<endl;
    /*
    string name1 = "";
    cout <<"Please enter your name: ";
    cin >> name1;
    cout<< "Your name is: " << name1 <<endl;
    */
    string name1 = "";
    getline(cin, name1);
    cout <<"Hello how are you Mr.  "<<name1 <<endl;
    string s1 = "Mar";
    s1 += "ty";
    cout <<"Concatenation of strings: "<< s1 <<endl;
    return 0;
}
