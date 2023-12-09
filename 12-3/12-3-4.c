#include<stdio.h>

main()
{
	int r,c;
	printf("enter the row:");
	scanf("%d",&r);
	printf("enter the column:");
	scanf("%d",&c);
	
	int a[r][c],i,j;
	float sum=0;
	
	printf("enter array elements \n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("matrix\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",a[i][j]);			
		}
		printf("\n");
	}
	
	printf("BORDER\n");
	
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==0 || j==0 ||i==r-1 ||j==c-1)
			{
				printf("%d ",a[i][j]);
				sum+=a[i][j];
			}
			else
			{
				printf("  ");
			}
			printf("\n");
		}
		 
		printf("the sum of boundary element of an array :%.2f",sum);
    }
    
}
