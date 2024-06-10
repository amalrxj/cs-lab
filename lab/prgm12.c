#include <stdio.h>

int main()
{
    int decinum, binarynum[50], i;

    printf("Enter a decimal number: ");
    scanf("%d", &decinum);//6

    for (i = 0; decinum > 0;i++)
    {
        binarynum[i] = decinum % 2;//0,1,1
        decinum = decinum / 2;//3,1
    }

    printf("Binary representation is: ");
    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", binarynum[i]);
    }

    return 0;
}