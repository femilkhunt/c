#include<stdio.h>
int i=0;
void main()
{
    

 
    if(i<=10)
    {
        printf("%d\n",i);
        i++;
        main();
    }
}