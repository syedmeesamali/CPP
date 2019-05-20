#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks = 0;
    printf("Enter student marks below");
    scanf("%d", &marks);
    if (marks >= 90)
    {
        printf("A");
    }
    else if (marks <90 && marks >= 80)
    {
        printf("B");
    }
    else if (marks <80 && marks >= 70)
    {
        printf("C");
    }
    else if (marks <70 && marks >= 60)
    {
        printf("D");
    } else
    {
        printf("F");
    }
    return 0;
}




#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=5, b=4, c=3, d=0;
    d = a+b/(4*c-3*b)+b;
    printf("d is %d", d);
    return 0;
}


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=15, b=12, c=5, d=0;
    d = a+a/b-b/c+c*a/c;
    printf("d is %d", d);
    return 0;
}


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks[10];
    int sum = 0;
    int avg = 0; int count = 0;
    for (int i=0; i<10; i++)
    {
        scanf("%d",&marks[i]);
        sum += marks[i];
    }

    for (int j=0; j<10; j++)
    {
        printf("%d  ",marks[j]);
    }

    printf("\nSum is %d \n", sum);
    avg = sum / 10;
    printf("Average is %d \n", avg);
    for (int a=0; a<10; a++)
    {
        if (marks[a] > avg)
        {
            count++;
        }
    }
    printf("Above Average is %d \n", count);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a1[3]={4,2,3}, a2[3];
    int temp, i, k=2;
    for (i=0; i<4; i++)
    {
        a2[k-i] = a1[i];
    }
    printf("%d", a2[2]);
    return 0;
}


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=11, b=15, c=10;
    if (a > b)
    {
        if (a>c)
        {
            printf("a: %d", a);
        } else {
        printf("b: %d", b);
        }
    }
    else if (b > c)
    {
        printf("c: %d", c);
    }
    return 0;
}


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c=0;
    while (c <7)
    {
        c++;
        printf("C: %d \n", c);
    }
}


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
