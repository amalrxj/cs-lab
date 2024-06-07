#include <stdio.h>

int main()
{
	int a,b,c,sum;
	printf("enter 3 angles: ");
	scanf("%d%d%d",&a,&b,&c);
	sum=a+b+c;
	if(sum==180)
	{
		printf("it is a triangle");
	}
	else
	{
		printf("it is not a triangle");
	}
	return 0;
}
