#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0;
    while (a < 5)
    {
        a++;
        if (a == 3)
        {
            printf("Inside if loop \n");
        }
        printf("a = %d \n",a);
    }
    return 0;
}
