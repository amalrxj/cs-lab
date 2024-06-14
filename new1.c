#include<stdio.h>

int main(){
	int a=10,b=20,*p1,**p2;

p1=&a;
p2=&p1;

printf("B =%d\n",b);
printf("A =%d\n",a); 
printf("A =%d\n",*p1); 
printf("A =%d\n",**p2); 

printf("address a =%u\n",&a); 
printf("address b =%u\n",&b); 
printf("address p1 =%u\n",p1); 
printf("address p2 =%u\n",*p2); 
return 0;
}