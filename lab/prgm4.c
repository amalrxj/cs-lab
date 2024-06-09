#include <stdio.h>
#include <math.h>

int main(){
	float a,b,c,d,r1,r2,img;
	printf("Enter the value of a,b,c: ");
	scanf("%f%f%f",&a,&b,&c);
	 
	d=(b*b)-(4*a*c);
	
	if(d>0){
		r1=(-b+sqrt(d))/(2*a);
		r2=(-b-sqrt(d))/(2*a);
		printf("roots are %.2f and %.2f",r1,r2);
	}
	else if(d==0){
		r1=r2=(-b)/(2*a);
		printf("root is %.2f and %.2f",r1,r2);
	}
	else{
		r1=(-b/(2*a));
		img=sqrt(-d)/(2*a);
		printf("roots are %.2f+%.2fi and %.2f-%.2fi",r1,img,r1,img);	
	}
	return 0;
	
}
