#include<stdio.h>
#include<conio.h>
void main()
{
	char a[50],b[50],c[50];
	int i,j,k,l,m,n=0;
	
	printf("Enter a word = ");
	scanf("%s",&a);
	
	
	for(i=0;a[i]!='\0';i++)
	{
		b[i]=a[i];
	}
	j=i;
	b[i]='\0';
	
	i--;
		
	l=0;
	for(k=i;k>=0;k--)	
	{
		c[l]=b[k];
		l++;
	}
	

	for(m=0;a[m]!='\0';m++)
	{
		if(c[m]==a[m])
		{
			n++;
		}
	}
		
	
	if(n==j)
	{
		printf("%s is paledrome word",a);
	}
	else
	{
		printf("%s is not a paledrome word",a);
	}
}