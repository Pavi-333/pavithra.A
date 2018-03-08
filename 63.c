#include<stdio.h>
void main()
{
	int i,c=1;
	char str[30];
	scanf("%[^\n]s",&str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			c++;
		}
	}
	printf("%d",c);
}
