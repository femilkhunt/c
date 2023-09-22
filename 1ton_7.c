#include<stdio.h>

void series()
{
    int i,n;
    printf("Enter a number = ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
    }
}

void main()
{
    series();
}