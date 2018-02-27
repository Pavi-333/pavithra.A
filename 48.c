#include <stdio.h>
int main()
{
     int i,a[50],s,sum=0,avg;
    printf("Enter the Size :");
    scanf("%d",&s);
    for(i=1;i<=s;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("%d\n",sum);
    avg=sum/s;
    printf("%d",avg);
    return 0;
    
}
