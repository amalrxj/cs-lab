#include <stdio.h>

int main(){
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	if(num==0){
		printf("Zero is neither even nor odd.");
	}else if(num%2 == 0){
		printf("Even");
	}else{
		printf("Odd");
	}
	return 0;	
}
