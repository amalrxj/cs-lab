#include<stdio.h>

int main()
{
	int a,b;
	int option;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	printf("1.Addition \n2.Substract \n3.Multiplication \n4.Division \n5.Reminder \n");
	printf("Enter your option: ");
	scanf("%d",&option);
	switch(option){
		case 1:printf("Sum: %d \n",a + b);
		break;
		case 2:printf("Difference: %d \n",a-b);
		break;
		case 3:printf("Product: %d \n",a * b);
		break;
		case 4:printf("Division: %d \n",a / b);
		break;
		case 5:printf("Modulus: %d \n",a % b);
		break;
		default:printf("Invalid Option");
	}
	
	return 0;

}
