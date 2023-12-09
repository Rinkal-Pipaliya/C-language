#include<stdio.h>

main()
{
	int r,c;
	
	printf("enter the row:");
	scanf("%d",&r);
	printf("enter the column:");
	scanf("%d",&c);

	int matrix[r][c],i,j,a[i][j];

	for(i=0;i<r;i++)	
	{
		for(j=0;j<c;j++)
		{
			printf("matrix[%d][%d] :",i,j);
			scanf("%d",&matrix[i][j]);
		}
	}
	for(i=0;i<r;i++)	
	{
		for(j=0;j<c;j++)
		{
			a[i][j]=matrix[j][i];
		}
	}
		for(i=0;i<r;i++)	
	{
		for(j=0;j<c;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	
}
