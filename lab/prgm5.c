#include <stdio.h>

int main(){
	int mark;
	printf("Enter your mark: ");
	
	scanf("%d",&mark);
	if(mark>=80)
		printf("A Grade");
	else if(mark>=60){
		printf("B Grade");
	}else if(mark>=40){
		printf("C Grade");
	}else if(mark>=20){
		printf("D Grade");
	}else{
		printf("Failed");
	}
	
	return 0;
}
