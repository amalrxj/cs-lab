#include <stdio.h>

int main()
{
    int n1, n2, i, j, flag;
    printf("Enter the starting and ending numbers: ");
    scanf("%d%d", &n1, &n2);//3, 13
    for (i = n1; i <= n2; i++)
    {
        if (i == 1)
            printf("%d should not be 1", i);
        flag = 1;
        for (j = 2; j <= (i / 2); j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            printf("%d\t", i);
        }
    }
    return 0;
}
