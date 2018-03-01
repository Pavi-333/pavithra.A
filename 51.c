#include<stdio.h>
int main()
{
int num,b[50],i=0,j,rem=0;
printf("Enter the number");
  scanf("%d",&num);
  while(num!=0)
  {
    rem=num%10;
  b[i]=rem;
    num=num/10;
    i++;
  }
  printf("\nThe number is:");
  for(j=i-1;j>=0;j--)
  {
    printf("%d ",b[j]);
  }
  return 0;
}
