#include <stdio.h>

int factorial(int num){
    int fact=1,i;
    for ( i = 1; i <= num; i++)
    {
        fact=fact*i;
    }
    return fact;

}
main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Factorial is: %d",factorial(num));

}
