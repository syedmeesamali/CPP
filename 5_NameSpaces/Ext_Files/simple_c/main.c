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
