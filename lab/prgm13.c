#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],i,j,m,n,p,q,k;
	printf("enter the rows and columns of first matrix:");
	scanf("%d%d",&m,&n);
	printf("enter the rows and columns of second matrix:");
	scanf("%d%d",&p,&q);
	if(n==p)
	{
		printf("enter the %d elements of first matrix: \n",m*n);
		for(i=0;i<m;i++)
		{
          for(j=0;j<n;j++)
		  scanf("%d",&a[i][j]);
		  printf("\n");
		}
		printf("enter the %d elements second matrix: \n",p*q);
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			scanf("%d",&b[i][j]);
			printf("\n");
		}
		
	    for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
			{
			c[i][j]=0;
			for(k=0;k<n;k++)
			c[i][j]+=a[i][k] * b[k][j];
		}
		}
		printf("\n first matrix \n\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			printf("%d\t",a[i][j]);
			printf("\n");
		}
		printf("\n second matrix \n\n");
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			printf("%d\t",b[i][j]);
			printf("\n");
		}
		printf("\n product matrix \n\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
			printf("%d\t",c[i][j]);
			printf("\n");
		}
	}
		return 0;
}

