#include <stdio.h>

int a[5], b, c, d = 0, e, f, i = 0, j, k, l;

void take()
{
    printf("Enter a number = ");
    scanf("%d", &b);
    a[i] = b;
    i++;

    if (i <= 4)
    {
        take();
    }
}

int largest()
{

    if (j <= 4)
    {
        if (a[i] > a[j])
        {
            j++;
            largest();
        }
        else
        {
            i = j;
            j++;
            largest();
        }
    }
    return a[i];
}

int smallest()
{
    if (j <= 4)
    {
        if (a[i] < a[j])
        {
            j++;
            smallest();
        }
        else
        {
            i = j;
            j++;
            smallest();
        }
    }
    return a[i];
}

void main()
{
    printf("Enter a series :\n");

    take();
    printf("\n");

    i = 0;
    j = 1;
    c = largest();

    printf("\n");

    i = 0;
    j = 1;
    d = smallest();

    printf("%d is smallest among all", d);
    printf("\n");
    printf("\n%d is largest among all", c);
}
