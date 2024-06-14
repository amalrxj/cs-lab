#include<stdio.h>
void swap(int*,int*);
int main()
{
	int a,b;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	printf("before swap a=%d and b=%d",a,b);
	swap(&a,&b);
	printf("\nafter swap a=%u and b=%u",a,b);
	
	return 0;
}
void swap(int*p,int*q)
{
	int t;
	t=*p;
	*p=*q;
	*q=t;
}
