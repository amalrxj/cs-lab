#include<stdio.h>
void transpose(int m[10][10],int a,int b)
{
	int i,j,n[10],[10];
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
		  n[j][i]=m[i][j];
		}
		printf("\n after transpose: ");
		for(int i=0;i<b;i++)
		{
			for(j=0;j<a;j++)
			{
				printf("%d\t",n[i][j]);
			}
			printf("\n")
		}
	}
}
