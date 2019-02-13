#include <iostream>
using namespace std;

void initMenu();
void menuDecision(int);
void areaCircle(double);
void areaRect(double, double);
void areaTriangle(double, double);

int main()
{
    int choice;
    char cont;
    //Initialize the main menu
    do
    {
        initMenu();
        cin >> choice;
        menuDecision(choice);
        do
        {
            cout << "Do you want to continue? (Y/N) " <<endl;
            cin >> cont;
        } while (cont != 'y' && cont != 'Y' && cont != 'n' && cont != 'N');


    } while (cont == 'y' || cont == 'Y');

    return 0;
}

void initMenu()
{
    cout <<"Main Menu !" <<endl;
    cout <<"1. Area of Circle" <<endl;
    cout <<"2. Area of Rectangle" <<endl;
    cout <<"3. Area of Triangle" <<endl;
}

void menuDecision(int choice)
{
    double r;
    double x;
    double y;
    switch(choice)
    {
        case 1:
            cout << "Enter radius of circle: ";
            cin >> r;
            areaCircle(r);
            break;
        case 2:
            cout << "Enter 1st length of rectangle: ";
            cin >> x;
            cout << "Enter 2nd length of rectangle: ";
            cin >> y;
            areaRect(x, y);
            break;
        case 3:
            cout << "Enter 1st length of triangle: ";
            cin >> x;
            cout << "Enter 2nd length of triangle: ";
            cin >> y;
            areaTriangle(x, y);
            break;
        default:
            cout <<"You didn't choose any of the options given above!" <<endl;
    }
}

void areaCircle(double r)
{
    double result = 3.141 * r * r;
    cout <<"The area of circle is: " <<result << endl;
}

void areaRect(double a, double b)
{
    double result = a * b;
    cout <<"The area of rectangle is: " <<result << endl;
}

void areaTriangle(double b, double h)
{
    double result = 0.5 * b * h;
    cout <<"The area of triangle is: " <<result << endl;
}
