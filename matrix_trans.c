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
		printf("\n after transpose: ");
		for( i=0;i<b;i++)
		{
			for(j=0;j<a;j++)
			{
				printf("%d\t",n[i][j]);
			}
			printf("\n");
		}
	}
}

int main()
{
	int m,n,i,j;
	printf("enter the number rows and coumns");
	scanf("%d%d",&m,&n);
	int a[10][10];
	printf("enter the elements of matrix");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d\t",a[i][j]);
		}
		
	}
	printf("Element:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	transpose(a,m,n);
	return 0;
}

