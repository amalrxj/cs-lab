#include <stdio.h>

int main()
{
	int r, c, k, a[10][10], b[10][10], mul[10][10], i, j, m, n;
	printf("enter the values of rows and columns ");
	scanf("%d%d,&r,&c");
	printf("enter the values of first matrix");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("enter the values of rows and columns of second matrix");
	scanf("%d%d", &m, &n);
	printf("enter the values of second matrix");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	if (c == m)
	{
		for (i = 0; i < r; i++)
		{
			for (j = 0; j < c; j++)
			{
				mul[i][j] = 0;
				for (k = 0; k < c; k++)
				{
					mul[i][j] += a[i][j] * b[1][j];
				}
			}
		}
	}
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d\t", mul[i][j]);
		}
		printf("\n");
	}
}
