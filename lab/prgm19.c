#include<stdio.h>
void swap(int*,int*);
int main()
{
	int a,b;
	int *p=&a,*q=&b;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("the value of a=%u and b=%u",*p,*q);
	return 0;
}
void swap(int*p,int*q)
{
	int t;
	t=*p;
	*p=*q;
	*q=t;
}
