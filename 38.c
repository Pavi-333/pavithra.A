#include<stdio.h>
void main()
{
int a,b,temp;
printf("Enter the two numbers:");
scanf("%d%d",&a,&b);
printf("Before swapping a=%d b=%d",a,b);
a=a^b;
b=a^b;
a=a^b;
printf("\n After swapping %d %d",a,b);
}
