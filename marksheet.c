#include<stdio.h>
int m,p,c,tot=0;
float per;

void get()
{

    printf("Enter maths marks = ");
    scanf("%d",&m);
    printf("Enter chemistery marks = ");
    scanf("%d",&c);
    printf("Enter physics marks = ");
    scanf("%d",&p);
}

void check()
{
    tot = m + c + p;
    per = tot/3;
}

void result()
{
    printf("You got %d marks out of 300\n",tot);
    printf("You got %f percentage\n",per);

    if(per>=80 && per<=100)
    {
        printf("\nYou got A grade");
    }
    if(per>=60 && per<=80)
    {
        printf("\nYou got B grade");
    }
    if(per>=40 && per<=60)
    {
        printf("\nYou got C grade");
    }
    if(per>=33 && per<=40)
    {
        printf("\nYou got D grade");
    }
    if(per>=0 && per<=33)
    {
        printf("\nFail");
    }

}

void main()
{
    int a,b,c,i;

    printf("Enter student marks\n");

    get();
    check();
    result();
}