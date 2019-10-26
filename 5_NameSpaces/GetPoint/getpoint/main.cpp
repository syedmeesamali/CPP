#include <iostream>
/*void OperationOnPoints();
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

} */
using namespace std;
int main()
{
    int nums[] = {7, 5, 9, 8, 6, 15, 23, 29, 35, 40};
    int Size = sizeof(nums) / sizeof(int);
    cout <<"Size is: " << Size << endl;
    int x = 0;
    int i = 0;
    int y = 0;
    int counter = 0;
    int tmp;
    while (y < Size )
    {
        cout << "Nums[" << y << "] is: " << nums[y] << endl;
        y++;
    }
    cout <<"Trying to sort below !!" << endl;

    do
    {
        while (x < Size)
        {
            if (nums[x] > nums[x+1])
            counter = counter++ ;
            {
                tmp = nums[x];
                nums[x] = nums[x+1];
                nums[x+1] = tmp;
                counter = counter - 1; //Decrease count for every good shuffle
            }
            cout << "Nums[" << x << "] is: " << nums[x] << endl;
            x++;
        }
    } while (counter > 0); //Check for the shuffle iterations

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
/*
void OperationOnPoints()
{
    Point2D
}
*/
