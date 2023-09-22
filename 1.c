#include<conio.h>
#include<stdio.h>
void main()
{
	char a[50];
	int i,j=0,k=0,l=0;
	
	printf("Enter a word or sentence = ");
	scanf("%[^\n]s",&a);

	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
		{
			j++;
		}
		else if(a[i]==' ')
		{
			k++;
		}
		else
		{
			l++;
		}	
	}
	printf("\nThere are total %d vowel in %s",j,a);
	printf("\n\nThere are total %d constant in %s",l,a);
	printf("\n\ntHERE are total %d space in %s",k,a);
}