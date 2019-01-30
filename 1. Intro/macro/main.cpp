#include <iostream>
using namespace std;
#define AreaRect(x,y) ((x)*(y))
int main()
{
    double x,y;
    cout <<"Enter two sides of rectangle!";
    cin >> x;
    cin >> y;
    cout<<"Area of rectangle is: "<<AreaRect(x,y);
    return 0;
}
