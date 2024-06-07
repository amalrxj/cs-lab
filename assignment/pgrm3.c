#include <stdio.h>

int checkEvenOdd(int num)
{
    // int r = num;
    if (num % 2 == 0)
    {
        printf("Number is even");
    }
    else
    {
        printf("Number is odd");
    }
    return 0;
}

int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    checkEvenOdd(num);
    return 0;
}
