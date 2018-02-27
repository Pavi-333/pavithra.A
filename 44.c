#include <stdio.h>
int main()
{
    int num;
    printf("Enter the Number:");
    scanf("%d",&num);
    if(num>=0&&num<=10)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
