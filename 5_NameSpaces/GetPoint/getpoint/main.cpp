#include <iostream>
using namespace std;
int main()
{
    int nums[] = {7, 5, 9, 8, 6, 15, 23, 29, 40, 35};
    int Size = sizeof(nums) / sizeof(int);
    int x = 0, i = 0, counter = 0, tmp = 0;
    do { while (x < Size)
        {   tmp = nums[x];
            if (nums[x] > nums[x+1])
            cout <<"Counter ------> " << counter << endl;
            {   counter = counter + 1;
                nums[x] = nums[x+1];
                nums[x+1] = tmp;
            }
            cout << "Nums[" << x << "] = " << nums[x] << endl;
            x++;
        }
        counter = counter - 1;
    } while (counter > 0);
    cout <<"After shuffle... " << endl;
    int Size1 = sizeof(nums) / sizeof(int);
    while (i < Size1 )
    {   cout << "Nums[" << i << "] = " << nums[i] << endl;
        i++;
    }
    return 0;
}
