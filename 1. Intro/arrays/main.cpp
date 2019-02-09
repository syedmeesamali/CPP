#include <iostream>
using namespace std;

int main()
{
    string tmp;

    cout <<"Enter the number: "<<endl;
    cin >> tmp;

    bool isNumber = true;

    for (int i=0; i<tmp.length(); i++) {
        if (!(tmp[i] >=45 && tmp[i] <=57)) {
            isNumber = false;
        }
    }

    if (isNumber)
        cout <<"number entered properly" <<endl;
    else
        cout <<"Number wasn't entered properly"<<endl;

    return 0;
}
