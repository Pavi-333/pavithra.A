#include<stdio.h>
void main()
{
	int num,i,count=0;
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("No,Its not a composite");
	}
	else
	{
		printf("Yes,it is a composite");
	}
	
}
