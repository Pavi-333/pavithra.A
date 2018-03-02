#include <stdio.h>

int main(void) {
	char a1[1000];
	int count=0,i;
	printf("enter the string ");
	scanf("%[^\n]s",a1);
	for(i=0;a1[i]!='\0';i++)
	{
		if(a1[i]>='a'&&a1[i]<='z'||a1[i]>='A'&&a1[i]<='Z')
		{
		count++;
		break;
			
		}
	}
	for(i=0;a1[i]!='\0';i++)
	{
		if(a1[i]>='0'&&a1[i]<='9')
		{
		count++;
		break;
			
		}
	}
	if(count==2)
	printf("yes");
	else
	printf("no");
	
	return 0;
}
