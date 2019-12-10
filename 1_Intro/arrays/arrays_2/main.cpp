#include <iostream>
using namespace std;

int main()
{
    int s=0, k=0;
    int x[] = {-1, 2, 5, -4, 8, 9};
    for (int i=0; i<6; i++)
    {
        if (x[i] < 0)
        {   continue;   }
        else {
            k++;
            s += x[i];
        }
    };
    cout << k << endl;
    cout << s << endl;
    return 0;
}


