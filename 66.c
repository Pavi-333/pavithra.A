#include<stdio.h>
void main()
{
int num,i,count=0;
printf("enter a number");
scanf("%d",&num);
for(i=2;i<num;i++)
{
if((num%i)==0)
count++;
}
if(count==0)
{
printf("yes");
}
else
{
printf("no");
}
}
