#include<stdio.h>
void main()
{
	int num,rem,d,s;
	scanf("%d",&num);
	rem=num%10;
	d=10-rem;
	s=num+d;
	printf("%d",s);
}
