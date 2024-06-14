#include<stdio.h>
void print(int[10][10]);
int main()
{
	int a[10][10],i,j,r,c;
	printf("enter the order of the matrix\n");
	scanf("%d%d",&r,&c);
	printf("\n enter the elements");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		scanf("%d",a[i][j]);
		printf("%d\t",a[i][j]);
		print(a);
	}
}
void print(int a[10][10])
{
	int b[10][10],i,j,r,c;
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		printf("%d",b[j][i]);
	}
}
