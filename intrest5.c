#include<stdio.h>
void intreset()
{
    int a,r=2,p=20000,t=2;
    a=(p*r*t)/100;
    printf("simple intreset = %d",a);
}

void main()
{
    intreset();
}