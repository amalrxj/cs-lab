#include <stdio.h>

int main(){
	
	int num,range,i=1;
	printf("Enter a number:");
	scanf("%d",&num);
	printf("\nEnter the range:");
	scanf("%d",&range);
	printf("\nMultiplication table of %d:",num);
	do{
		printf("\n%d x %d = %d",num,i,num*i);
		i++;
	}while(i<=range);
	
	
	return 0;
}
