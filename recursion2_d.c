#include<stdio.h>

int a[2][5],b,c,d,e,f,i=0,j=0,l,k=0,z=0;

void take()
{
        printf("Enter a number = ");
        scanf("%d",&b);
        a[k][i]=b;
        i++;
        if(i<=4)
        {
          take();
        }
        else
        {
            k++;
            if(k<=1)
            {
                 i=0;
                take();
            }
        }
}

void print()
{
        printf("%d ",a[k][i]);
        i++;
        if(i<=4)
        {
          print();
        }
        else
        {
            k++;
            if(k<=1)
            {
                i=0;
                print();
            }
        }
}

void main()
{
    printf("Enter a series :\n");

    take();
    k=0;
    i=0;
    printf("\n");
    print();

}