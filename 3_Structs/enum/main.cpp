#include <iostream>
using namespace std;

enum weekDays {SA, SU, MO, TU, WE, TH, FR};
int main()
{
    weekDays d = SU;
    cout <<"Enum SU is: " << d << endl;
    return 0;
}
