#include<stdio.h>

void series()
{
    int i,j;

    for(i=65;i<=90;i++)
    {
        j=i+32;
        printf("%c-%c ",i,j);
    }
}

void main()
{
    series();      
}
