#include<stdio.h>
int fact(int);
int main()
{
	int x,f;
	printf("enter the numbers");
	scanf("%d,&x");
	if(x==0)
	{
		f=fact(x);
	}
	
	printf("%d!=%d",&x,f);
	return 0;
}
int fact (int n)
{
	if(n==1||n==0)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
