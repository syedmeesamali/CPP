#include <iostream>
using namespace std;
enum weekDays {MO = 1, TU, WE, TH, FR, SA, SU};
string getDay(weekDays);

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
    default:
        return "You typed something wrong!";
    }
}

int main()
{
    cout << getDay(TH) << endl;
    return 0;
}
