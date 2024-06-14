#include <stdio.h>

int main()
{
    int num, range, i = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the range: ");
    scanf("%d", &range);
    printf("Multiplication table of %d: ", num);
    do
    {
        printf("\n%d x %d = %d", i, num, num * i);
        i++;
    } while (i <= range);

    return 0;
}