#include <stdio.h>
int main()
{
    int i,b[5],n=2,sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
        sum+=b[i];
    }
    printf("The sum is %d",sum);
    return 0;
}
