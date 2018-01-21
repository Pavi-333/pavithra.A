#include<stdio.h>
#include<conio.h>
void main()
{
int sum=0,d,r,n=153;
t=n;
for(i=0;i<=n;i++)
while(t!=0)
{
r=n%10;
d=r*r*r;
sum=sum+d;
t=n/10;
}
if(sum==n)
{
printf("armstrong",n);
}
else
{
printf("not amstrong");
}
}
