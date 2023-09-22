#include<stdio.h>

void series()
{
    int i,n;
    printf("Enter a number = ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        printf("%d ",i);
    }
}

void main()
{
    series();

}