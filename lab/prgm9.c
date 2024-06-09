#include<stdio.h>

int main()
{
	int num1=0,num2=1,next=0,range;
	printf("Enter the range:");
	scanf("%d",&range);
	printf("fibonacci series: %d,%d",num1,num2);
	next=num1+num2;
	
	while(next<=range)   
	{
	   printf(",%d",next);
	   num1=num2;
	   num2=next;
	   next=num1+num2;	
	}
	
	return 0;
}
