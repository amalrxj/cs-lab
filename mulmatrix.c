#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],i,j,m,n,p,q,d=0,k;
	printf("enter the order of first matrix:");
	scanf("%d%d",&n,&m);
	printf("enter order of second matrix:");
	scanf("%d%d",&p,&q);
	if(m==p)
	{
		printf("enter the elements of first matrix: \n");
		for(i=0;i<n;i++)
		{
          for(j=0;j<m;j++)
		  {
			scanf("%d",&a[i][j]);
			printf("%d\t",a[i][j]);
		  }
		  printf("\n");
		}
		printf("enter the elements second matrix: \n");
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
				scanf("%d",&b[i][j]);
				printf("%d\t",b[i][j]);
		}
			printf("\n");
		}
		printf("enter the resultant matrix=\n");
	    for(i=0;i<n;i++)
		{
			for(j=0;j<q;j++)
			{
				d=0;
				for(k=0;k<n;k++)
				{
					d=d+(a[i][k]*b[k][j]);
				}
				printf("%d\t",d);
			}
			printf("\n");
		}
	}
	else
	{
		printf("invalid order");
	}
	return 0;
}

