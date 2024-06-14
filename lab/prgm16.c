#include<stdio.h>
void transpose(int m[10][10],int a,int b)
{
	int i,j,n[10][10];
	for(i=0;i<a;i++)
	{
	   for(j=0;j<b;j++)
	   {
	   	n[j][i]=m[i][j];
	   }
}
	   	printf("\n after transpose:\n ");
	   	for(i=0;i<b;i++)
	   	{
	   		for(j=0;j<a;j++)
	   		{
		 printf("%d\t",n[i][j]);  
	        }
	        printf("\n");
	    }
}	
	    int main()
	    {
	    	int m,n,i,j;
	        printf("enter the number of rows and coloums:\n");
	        scanf("%d%d",&m,&n);
	        int a[10][10];
	        printf("\n enter the elements of matrix:\n");
	        for(i=0;i<m;i++)
	        {
	        	for(j=0;j<n;j++)
	          {
	   	scanf("%d",&a[i][j]);
	   }
		}
		 printf("element:\n");
		  for(i=0;i<m;i++)
	{
	   for(j=0;j<n;j++)
	   {
	   	printf("%d\t",a[i][j]);
	   }
	   printf("\n");
}
transpose(a,m,n);
return 0;
        }
