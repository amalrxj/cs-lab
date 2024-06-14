#include <math.h>
#include <stdio.h>

int main()
{
    double a, b, c, D, r1, r2, real, img;
    printf("Enter coefficients a,b and c: ");
    scanf("%lf%lf%lf", &a, &b, &c);

    // discriminant
    D = b * b - 4 * a * c;

    // condition for real and different roots
    if (D > 0)
    {
        r1 = (-b + sqrt(D)) / (2 * a);
        r2 = (-b - sqrt(D)) / (2 * a);
        printf("Roots are %.2lf and %.2lf", r1, r2);
    }
    // condition for real and equal roots
    else if (D == 0)
    {
        r1 = r2 = -b / (2 * a);
        printf("root1 and root2 = %.2lf", r1);
    }
    // roots are not real
    else
    {
        real = -b / (2 * a);
        img = sqrt(-D) / (2 * a);
        printf("root1 = %.2lf+%.2lf and root2 = %.2lf-%.2lf", real, img, real, img);
    }
    return 0;
}