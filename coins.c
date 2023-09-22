#include<stdio.h>

void convert(int a)
{
    int b[5],c,d=0,e=0,f=0,g=0,h=0,i;

    for(i=1;a!=0;i++)
    {
        if(a>=25)
        {
            a=a-25;
            d++;         //25 rs coin
        }
        else if(a>=10)
        {
            a=a-10;
            e++;         //10 rs coin
        }
        else if(a>=5)
        {
            a=a-5;
            f++;           //5 rs coin
        }
        else if(a>=2)
        {
            a=a-2;
            g++;          //2 rs coin
        }
        else if(a>=1)
        {
            a=a-1;
            h++;           //1 rs coin
        }
    }

        for(i=1;i<=d;i++)
        {
            printf("25 ");
        }
        for(i=1;i<=e;i++)
        {
            printf("10 ");
        }
        for(i=1;i<=f;i++)
        {
            printf("5 ");
        }
        for(i=1;i<=g;i++)
        {
            printf("2 ");
        }
        for(i=1;i<=h;i++)
        {
            printf("1 ");
        }

}

void main()
{
    int a,b[5],c,d,i;
    printf("Enter a money amount = ");
    scanf("%d",&a);

    convert(a);


}