#include <iostream>
using namespace std;

int main()
{
    int choice; float x;
    cout <<"Enter the number: ";
    cin >> x;
    cout << "0 Inches 1 Yards 2 Centimeters 3 Meters" <<endl;
    cin >> choice;
    switch(choice)
    {
        case 0: cout <<x <<" inches" <<endl; break;
        case 1: cout <<x/36 <<" yards" <<endl; break;
        case 2: cout <<x*2.54 <<" CM" <<endl; break;
        case 3: cout <<x*(2.54/100) <<" meters" <<endl;
    }
    return 0;
}

