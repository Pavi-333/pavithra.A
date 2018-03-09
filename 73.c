#include<stdio.h>
void main()
{
	int l,i,m,n,c=0;
	scanf("%d",&l);
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		if(l==i)
		{
			c++;
		}
	}
	if(c==1)
	 printf("yes");
	else
	 printf("No");
}
