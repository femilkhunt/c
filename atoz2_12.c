#include<stdio.h>

void series()
{
    int i;
    for(i=65;i<=90;i++)
    {
        printf("%c-%d ",i,i);
    }
}

void main()
{
    series();
}