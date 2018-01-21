#include<stdio.h>
#include<conio.h>
void main()
{
int a[10];
int size,i,j,temp;
printf("enter the size");
scanf("%d",size);
printf("enter the array",);
for(i=0;i<=size;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=size;i++)
{
for(j=i+1;j<=size;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<=size;i++)
{
if(a[i]==a[n%2]
   {
     printf(" the middle element is",a[i]);
}
}
