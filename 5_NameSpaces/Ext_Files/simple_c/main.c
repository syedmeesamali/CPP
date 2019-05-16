#include <stdio.h>
#include <stdlib.h>
int func_1(int x, int y, int z)
{
    return ((x+y)*z);
}

int main()
{
    int a=2, b=3, c=4, d=5;
    d = func_1(a,b,c);
    printf("d = %d", d);

    return 0;
}
