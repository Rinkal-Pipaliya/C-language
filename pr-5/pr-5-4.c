#include<stdio.h>

main()
{

	int r,c;
	
	printf("enter the row:");
	scanf("%d",&r);
	printf("enter the column:");
	scanf("%d",&c);

	int a[r][c],i,j,n1,n2;
	int sum=0;
	
	for(i=0;i<r;i++)	
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}	
	printf("enter the row :");
	scanf("%d",&n1);
	
	for(i=n1;i<n1;i++)	
	{
		printf("elements :");
		for(j=0;j<c;j++)
		{
			printf("%d",a[i][j]);
			sum+=a[i][j];
		}
		printf("sum of row %d %d ",i,sum);
	}
	for(i=n2;i<n2;i++)	
	{
		printf("elements :");
		for(j=0;j<r;j++)
		{
			printf("%d",a[i][j]);
			sum+=a[i][j];
		}
		printf("sum of column %d %d ",j,sum);
	}
	
}
