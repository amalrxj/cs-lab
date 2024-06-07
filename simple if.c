#include <stdio.h>

int main()
{
	int num;
	printf("ENTER A NUMBER:");
	scanf("%d",&num);
	if(num<0)
	{
		printf("%d is negative",num);
	}
	return 0;
}
