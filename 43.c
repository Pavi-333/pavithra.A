#include<stdio.h>
void main()
{
  char s[25],s1[25];
  int i=0,j=0;
  printf("\nEnter First String:");
  scanf("%s",s);
  printf("\nEnter Second String:");
  scanf("%s",s1);
  while(s[i]!='\0')
  i++;
  while(s1[j]!='\0')
  {
    s[i]=s1[j];
    j++;
    i++;
  }
  s[i]='\0';
  printf("\nConcatenated String is %s",s);
}
