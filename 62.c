#include<stdio.h>
#include<string.h>
void main()
{
	char a[50];
	int i,l,c=0;
	scanf("%s",a);
	l=strlen(a);
	for(i=0;i<=l;i++)
	{
		if(a[i]=='1'||a[i]=='0')
		{
			c++;
		}
	}
	if(c==l)
	{
		printf("It is Binary Digits");
	}
	else
	{
		printf("Not a Binary Digits");
	}
}
