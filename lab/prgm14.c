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
    if (n >= 1)
        return n * multiplyNumbers(n - 1);//3*2*1*1
    else
        return 1;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);  // Note: gets() is unsafe, use fgets() for safer input handling in real applications

    if (isPalindrome(str)) {
        printf("\"%s\" is a palindrome\n", str);
    } else {
        printf("\"%s\" is not a palindrome\n", str);
    }

    return 0;
}
