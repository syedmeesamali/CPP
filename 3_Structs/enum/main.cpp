#include <iostream>
using namespace std;

enum weekDays {SA, SU, MO = 1, TU, WE, TH, FR};
string getDay(weekDays);

int main()
{
    weekDays d = SU;
    cout <<"Enum SU is: " << d << endl;
    return 0;
}

string getDay(weekDays d)
{
    switch(d)
    {
    case MO:
        return "Monday";
    case TU:
        return "Tuesday";
    case WE:
        return "Wednesday";
    case TH:
        return "Thursday";
    case FR:
        return "Friday";
    case SA:
        return "Saturday";
    case SU:
        return "Sunday";
    }

}
