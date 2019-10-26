#include <iostream>
/*
void OperationOnPoints();
template<typename t, typename t2>
t add(t var1, t var2)
{
    return var1 + var2;
}

template<>
Point2D add(Point2D var1, Point2D var2)
{
    Point2D temp;
    temp.setX(var1.getX + var2.getX);

}

*/
using namespace std;

int main()
{
    int nums[] = {7, 5, 9, 8, 6, 15, 23, 29, 35, 40};
    int Size = sizeof(nums) / sizeof(int);
    int x = 0;
    int i = 0;
    while (x < Size)
    {
        cout << "Nums[" << x << "] is: " << nums[x] << endl;
        if (nums[x] > nums[x+1])
        {
            nums[x+1] = nums[x];
            nums[x] = nums[x+1];
        }
        x++;
    }
    cout <<"new loop below:" << endl;
    cout <<"Size is: " << Size << endl;
    while (i < Size)
    {
        cout << "Nums[" << i << "] is: " << nums[i] << endl;
        i++;
    }

    return 0;
}
/*
void OperationOnPoints()
{
    Point2D
}
*/
