#include<stdio.h>
#include<string.h>

int main()
{
	char str1[50],str2[50];
	int l1,l2,result,ch;
	
	printf("enter the first string");
	fgets(str1,sizeof(str1),stdin);
	printf("\n enter the second string");
	fgets(str2,sizeof(str2),stdin);
	while(1)
	{
		printf("1 length\n2 copy\n3 concatenated\n4 reversed \n5 compare");
		printf("\n enter your choice");
		scanf("%d",&ch);
		switch (ch)
		{
			case 1: l1=strlen(str1);
			        l2=strlen(str2);
			        printf("length of the first string is %d\nlength of second string is%d\n",l1-1,l2-1);
			        break;
			case 2: printf("copied first string to another string: '%s'\n",strcpy(str2,str1));
			        break;
			case 3: printf("concatenated string '%s'\n",strcat(str1,str2));
				    break;
			case 4: printf("Reversed string: '%s'\n",strrev(str1));
					break;	    
			case 5: result=strcmp(str1,str2);
			        if(result==0)
			       {
			       	 printf("'%s'and '%s'are equal\n ",str1,str2);
					}
					else if(result>0)
					{
						printf("'%s' is greater than '%s'\n",str2,str1);
					}
					else
					{
						printf("'%s'is less than'%s'\n",str2,str1);
					}	
					break;	
			default: printf("invalid");			    
		}
	}
	return 0;
}

