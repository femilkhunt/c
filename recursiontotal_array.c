#include<stdio.h>
int z;
int test()
{
    int b;
    printf("Enter a number = ");
    scanf("%d",&b);

    return b;
}

int print(int c)
{
    z=z+c;

    return z;
}


void main()
{
    int i,a[5],b=0;
    printf("Enter a series : \n");

    for(i=0;i<5;i++)
    {
        a[i]=test();
    }

    for(i=0;i<5;i++)
    {
        b=print(a[i]);
    }
    printf("\n\n%d is total",b);
}