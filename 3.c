#include<stdio.h>
#include<conio.h>
void main()
{
	char a[50];
	int i,j=1,k,l=0,m=0,n;

	printf("Enter a sentence = ");
	scanf("%[^\n]s",&a);

	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		{
			j++;
		}
	}
	n=i;

	
	for(k=n-1;a[k]==' ';k--)
	{
		
		if(a[k]==' ')
		{
			l++;		
		}
	}
	
	j=j-l;

	printf("There are %d word in %s",j,a);
}