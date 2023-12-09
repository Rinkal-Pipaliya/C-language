#include<stdio.h>

main()
{
	int r,c;
	printf("enter the row:");
	scanf("%d",&r);
	printf("enter the column:");
	scanf("%d",&c);
	
	int a[r][c],i,j,count=1;
	float sum;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf(" diagonal elements :\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
			{
				printf("%d ",a[i][j]);
			}
			else
			{
				printf("  ");
			}
		}
        printf("\n");
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
			{
				sum+=a[i][j];
			}
			printf("\n");
		}
	}
	
	printf("the sum of diagonal elemnt of an array :%.2f",sum);
	
	
}
