#include <stdio.h>

int main(){
	float a,b;
	int choice;
	printf("Enter two numbers:");
	scanf("%f%f",&a,&b);
	printf("1. Addition\n2. Substraction\n3. Multiplication\n4. Division\n");
	printf("Enter your choice:");
	scanf("%d",&choice);
	
	switch(choice){
		case 1: 
			printf("Sum: %f",a+b);
			break;
		case 2:
			printf("Difference: %f",a-b);
			break;
		case 3:
			printf("Product: %f",a*b);
			break;
		case 4:
			printf("Div: %f",a/b);
			break;
		default:
			printf("You entered invalid choice.");
			break;
			
	return 0;
			
			
	}
	
}
