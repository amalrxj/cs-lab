#include <stdio.h>

int main()
{

    int mark;
    printf("Enter your total mark: ");
    scanf("%d", &mark);
    if (mark <= 100)
    {
        if (mark >= 80)
        {
            printf("A Grade");
        }
        else if (mark >= 75)
        {
            printf("B Grade");
        }
        else if (mark >= 60)
        {
            printf("C Grade");
        }
        else if (mark >= 45)
        {
            printf("D Grade");
        }
        else if (mark >= 30)
        {
            printf("E Grade");
        }
        else
        {
            printf("You Failed!");
        }
    }

    return 0;
}