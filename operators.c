#include<stdio.h>

int main()
{
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	printf("Sum: %d \n",a + b);
	printf("Difference: %d \n",a-b);
	printf("Product: %d \n",a * b);
	printf("Division: %d\n",a / b);
	printf("Modulus: %d\n",a % b);
	return 0;

}
