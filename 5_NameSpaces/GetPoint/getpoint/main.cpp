#include <iostream>

//Swap if one is bigger than other
void swap(int* x, int* y)
{
    int* tmp = x;
    *x = *y;
    *y = *tmp;
}

using namespace std;
int main()
{
    int nums[] = {7, 5, 9, 8, 6, 15, 29, 23, 40, 35};
    int Size = sizeof(nums) / sizeof(int);
    cout <<"Size is: " << Size << endl;
    int x = 0; int i = 0; int j = 0; int k = 0; int swaps = 0;
    for (j=0; j<Size; j++)
    {
        for (k=0; k<Size-j; k++)
        {
            swaps = 0;
            if (nums[k] > nums[k+1])
            {
                swap(nums[k], nums[k+1]);
                cout << "Nums[" << k << "] is: " << nums[k] << endl;
                swaps++;
            } //End of if
        } //End of inner for loop
        if (swaps == 0)  {   break;   }
    } //End of outer for loop

    cout <<"New loop below! i is now: " << i << endl;
    int Size1 = sizeof(nums) / sizeof(int);
    while (i < Size1 )
    {   cout << "Nums[" << i << "] = " << nums[i] << endl;
        i++;
    }
    return 0;
}
