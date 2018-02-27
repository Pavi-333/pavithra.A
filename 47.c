#include <stdio.h>
int main()
{
    int b[50],i,n,max,min;
    printf("Enter the size:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      
        scanf("%d",&b[i]);
    }
    min=b[0];
    max=b[0];
    for(i=0;i<n;i++)
    {
        if(b[i]<min)
        {
            min=b[i];
            printf("%d\n",min);
        }
    }
    for(i=0;i<n;i++)
    {
        if(b[i]>max)
        {
            max=b[i];
            printf("%d",max);
        }
    }
    return 0;
}
