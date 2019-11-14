#include <iostream>
void swap(int* x, int* y)
{
    int* tmp = x;
    *x = *y;
    *y = *tmp;
}
using namespace std;
int main()
{
    int nums[] = {7, 5, 9, 8, 39, 15, 29, 23, 40, 35};
    int Size = sizeof(nums) / sizeof(int);
    int x = 0; int i = 0; int j = 0; int k = 0;
    for (j=0; j<Size-1; j++)
    {
        for (k=0; k<Size-j-1; k++)
        {    if (nums[k] > nums[k+1])
                swap(nums[k], nums[k+1]);
        }
    }
    cout <<"Sorted list below!"<< endl;
    int Size1 = sizeof(nums) / sizeof(int);
    while (i < Size1 )
    {   cout << "Nums[" << i << "] = " << nums[i] << endl;
        i++;
    }
    cout << sizeof('A');
    return 0;
}
