#include<stdio.h>
#include<conio.h>
void main()
{
int t,r,n=151,d=0;
t=n
while(n>=1)
{
r=n%10;
d=d*10+t;
n=t/10
}
if(n==d)
{
printf("palindrome");
}
else{
prinrf("not palindrome");
}
}
