
#include <stdio.h>
#include<string.h>

int main(void) {
	char a[1000],b[1000];
	int i,j,k,s=0;
	printf("enter the string ");
	scanf("%s",a);
	scanf("%s",b);
	i=strlen(a);
	j=strlen(b);
	for(k=i;k<i+j;k++)
	{
		a[k]=b[s];
		s++;
	}
	printf("%s",a);
	
	return 0;
}
