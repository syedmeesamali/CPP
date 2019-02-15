#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    int guess = 0;
    int num = 37;
    int counter = 0;
    do {
        cout <<"Enter guess value: " << endl;
        cin >> guess;
        counter++;
        if (guess == num) {
            cout <<"Congrats you guessed it right !" << endl;
            break;
        } else if (guess < num){
            cout <<"Guess too low ! Try again" << endl;
            continue;
        } else {
            cout <<"Guess too high ! Try again" << endl;
            continue;
        }

    } while(counter < 5);

    if (counter >= 5) {
        cout <<"Sorry you couldn't guess the number within 5 tries! It was 37" << endl;
    }

    return 0;
}
