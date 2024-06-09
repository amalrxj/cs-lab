#include <stdio.h>

int main()
{
	int a,b,c,largest;
	printf( "ENTER 3 NUMBERS:");
	scanf("%d %d %d",&a,&b,&c);
	largest=(a>b)?(a>c?a:c):(b>c?b:c);
	printf("%d is largest",largest);
	return 0;
}
	

