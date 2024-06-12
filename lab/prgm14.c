#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int len,i;
    int palindrome =1;
    printf("enter the string:\n");
    scanf("%s",str);
    len=strlen(str);
    for(i=0;i<len/2;i++)
    {
        if(str[i]!=str[len-i-1])
        {
            palindrome=0;
            break;
        }
    }
    if(palindrome==1)
    {
    	printf("the string is palindrome");
	}
	else
	{
		printf("the string is not palindrome");
	}
}
