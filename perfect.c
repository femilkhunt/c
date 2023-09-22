#include<stdio.h>

int check(int a)
{
    int b=0,c=0,d,e,i;

    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            c=c+i;
        }
    }

    return c;
}

void main()
{
    int a,b,c,i;

    printf("Enter a number = ");
    scanf("%d",&a);

    b=check(a);
    a=a*2;

    if(b==a)
    {
        printf("%d is a perfect number",a/2);
    }
    else
    {
        printf("%d is not a perfec number",a/2);
    }
}