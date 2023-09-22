#include<stdio.h>

int reverse(int a)
{
    int b,c,d=0,e,i;
    b=a;

    for(i=1;b!=0;i++)
    {
        c=b%10;
        d=d+c;
        e=d;
        d=d*10;
        b=b/10;
    }

    return e;
}


void main()
{
    int a,b,c,d;

    printf("Enter a number = ");
    scanf("%d",&a);

    b=reverse(a);

    printf("The reverse number is = %d",b);
}