#include<stdio.h>

int main()
{
	int num;
	printf("Enter the value: ");
	scanf("%d",&num);
	if((num%3 == 0) && (num%11==0)){
		printf("%d is divisible by 3 and 11",num);
	
	}else{
		printf("%d is not divisible by 3 and 11",num);
		
	}
	return 0;
}5
