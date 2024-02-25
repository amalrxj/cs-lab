#include <stdio.h>

int main()
{
    double num1, num2;
    int choice;
    printf("Enter two numbers: ");
    scanf("%lf%lf", &num1, &num2);
    printf("\n1. Addition\n2. Substraction\n3. Multiplication\n4. Division\n");
    printf("\nEnter your choice:\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Sum: %.2lf", num1 + num2);
        break;
    case 2:
        printf("Difference: %.2lf", num1 - num2);
        break;
    case 3:
        printf("Product: %.2lf", num1 * num2);
        break;
    case 4:
        printf("Quotient: %.2lf", num1 / num2);
        break;
    default:
        printf("You entered a invalid choice.");
        break;
    }

    return 0;
}
