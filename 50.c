#include <stdio.h>

int main(void) {
	int value;
	int num=2;
	scanf("%d",&value);
	while(num<value)
	{
		num=num*2;
		if(num==value)
		printf("yes");
	}
	if(value==1)
	printf("yes");
	return 0;
}
