#include <stdio.h>
long int multiplyNumbers(int n);
int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Factorial of %d = %ld", n, multiplyNumbers(n));
    return 0;
}

long int multiplyNumbers(int n)//3
{
    if (n > 1)
        return n * multiplyNumbers(n - 1);//3*2*1*1
    else
        return 1;
}
