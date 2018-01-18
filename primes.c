#include<stdio.h>
#include<conio.h>
void main()
{
int n=23,j ,flag;
if(num<=1)
{
printf("not prime",n);
exit(1);
}
flag=0
for(j=2;j<=n%2;j++)
{
if(n%j=0)
{
flag=1;
break;
}
if(flag==0)
{
printf("prime",n);
}
else
{
printf("notprime",n);
}
getch();
}
