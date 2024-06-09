#include<stdio.h> 
#include <math.h>

int main()
{
	int num,val,n,sum,r;
	printf("enter a number: ");
	scanf("%d",&num);
	val=num;
	n=0;
	while(val>0)
	{
		n++;
		val=val/10;
	}
	val=num;
	sum=0;
	while(val>0)
	{
		r=val%10;
		sum=sum+pow(r,n);
		val=val/10;
	}
	if(num==sum)
	{
		printf("number is armstrong");
	}
	else
	{
		printf("number is not armstrong");
	}
	return 0;
}
