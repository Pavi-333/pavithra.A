#include<stdio.h>
int main()
{
int b[10],max,i;
for(i=0;i<10;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<10;i++)
{
printf("%d",b[i]);
}
max=b[0];
for(i=0;i<10;i++)
{
if(max<b[i])
{
max=b[i];
}
}
printf("\n%d",max);
return 0;
}
