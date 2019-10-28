#include <iostream>

//Swap if one is bigger than other
void swap(int* x, int* y)
{
    int* tmp = x;
    *x = *y;
    *y = *tmp;
}
//Check which one is bigger
bool max(int x, int y)
{
    return (x>y)?true:false;
}
using namespace std;
int main()
{
    int nums[] = {7, 5, 9, 8, 6, 15, 29, 23, 40, 35};
    int Size = sizeof(nums) / sizeof(int);
    cout <<"Size is: " << Size << endl;
    int x = 0, i = 0, counter = 0, mCount = 0;
    do { while (x < Size)
        {   if (max(nums[x], nums[x+1]) == true)
            {
                counter = counter + 1;
                swap(nums[x], nums[x+1]);
                cout << "Nums[" << x << "] is: " << nums[x] << endl;
            }
            counter = counter - 1;
            x++;
            if (counter > 1)
            {
                mCount = mCount + 1;
            }
        } cout <<"Counter now: " << counter << endl;
       mCount = mCount - 1;
    } while (mCount > 0); //Check for the shuffle iterations

    cout <<"New loop below! i is now: " << i << endl;
    int Size1 = sizeof(nums) / sizeof(int);
    cout <<"Size1 is: " << Size1 << endl;
    while (i < Size1 )
    {
        cout << "Nums[" << i << "] is: " << nums[i] << endl;
        i++;
    }
    return 0;
}
