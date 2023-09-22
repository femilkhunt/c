#include<stdio.h>

int a[5],b,i=0,j=0;

void take()
{
    printf("Enter a number = ");
    scanf("%d",&b);
    a[i]=b;
    i++;
    if(i<=4)
    {
        take();
    }
}

void print()
{
    printf("%d ",a[j]);
    j++;
    if(j<=4)
    {
        print();
    }
}

void main()
{
    printf("Enter a series :\n");

    take();
    printf("\n");
    print();
}