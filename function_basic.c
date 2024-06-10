#include <stdio.h>

main()
{

	float a,b,average;
	printf("Enter two numbers: ");
	scanf("%f%f",&a,&b);
   	float avg(float a, float b);
    //average=avg(a, b);
    //printf("%f",average);
	printf("%f",avg(a,b));
    return 0;
}

float avg(float a, float b)
{
    float c;
    c = (a + b) / 2;
    return c;
}
