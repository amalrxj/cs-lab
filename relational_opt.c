#include <stdio.h>

int main()
{
	int a,b,c;
	printf("enter two numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	printf("the ans:%d", (a>b) && (a<c));
	printf("the ans:%d", (a>b) || (a<c));
	printf("the ans:%d", (a>b) ! (a<c));
	
	return 0;
}
