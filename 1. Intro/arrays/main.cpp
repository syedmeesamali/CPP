#include <iostream>
using namespace std;

int main()
{

    for (int i = 0; i<10; i++ ) {
        for (int j=0; j<10; j++) {
            if (i == j)
                continue;
            cout.width(4);
            cout << i * j;
        }
    }


    return 0;
}
