#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1="meesam";
    string s2="ali";
    if (s1 > s2) {
        cout << "S1 is great than s2" <<endl;
        cout <<"string comparison based on their ascii values" <<endl;
    };

    s1[3] = 't';
    cout <<"s1 is now: " << s1 << endl;
    s2.append(" shah");
    cout <<"s2 is appended now with shah;" <<s2 <<endl;
    return 0;
}
