#include<stdio.h>
int main()
{
int n1,n2,temp=0;
printf("Enter the numbers");
scanf("%d%d",&n1,&n2);
printf("\n%d %d",n1,n2);
if((n1!=0)&&(n2!=0))
{
temp=n1;
n1=n2;
n2=temp;
}
printf("\n%d %d",n1,n2);
return 0;
}
