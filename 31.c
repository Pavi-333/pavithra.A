#include<stdio.h>
#include<conio.h>
void main()
{
int t=0;i=0;
char s[20];
printf("enter the string");
scanf("%s",s);
for(i=0;i<=s[20];s++)
{
while(s!='\n')
{
t=t++;
}
printf("the count is%d",t);
}
getch();
}
