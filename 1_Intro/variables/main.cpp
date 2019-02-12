#include <iostream>

using namespace std;

int main()
{
    double rainfall[4];
    rainfall[0] = 2.5;
    rainfall[1] = 3.5;
    rainfall[2] = 4.3;
    cout << "Average  three numbers of rainfall is: " << (rainfall[0] + rainfall[1] + rainfall[2])/3 << endl;

    while (count < 10) {
        cout << "Count is: " << count << endl;
        ++count;
    }
    cout <<"End of while loop" <<endl;
    return 0;
}
