#include<stdio.h>
#include<conio.h>
void main()
{
char s[29];
int flag=0,i;
printf("enter the string");
scanf("%s",s);
for(i=0;s[i]='\0';i++)
{
if(s[i]='0'||s[i]='1'||s[i]='2'||s[i]='3'||s[i]='4'||s[i]='5'||s[i]='6'||s[i]='7'||s[i]='8'||s[i]='9')
{
flag=flag+1;
}
}
if(flag==0)
{
printf("the num is string")
}
else 
{
printf("not srting")
}
