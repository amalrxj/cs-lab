
#include<stdio.h>
#define area(b,h)  (b*h)/2
#define volume(b,h) ((b*b*h)/3)
int main()
{
	int a,b,h,v;
	printf("enter the base and height");
	scanf("%d%d",&b,&h);
	a=area(b,h);
	printf("area=%d\n",a);
	v=volume(b,h);
	printf("volume=%d\n",v);
	return 0;
	
}
