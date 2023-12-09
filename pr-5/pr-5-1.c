#include<stdio.h>

main()
{
	int r,c;
	
	printf("enter the row:");
	scanf("%d",&r);
	printf("enter the column:");
	scanf("%d",&c);
	
	int a[r][c],i,j,larg;
	
	printf("enter the element :\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j] > larg)
			{
				larg = a[i][j];	
			}
			
		}
		
	}
	printf("the largest element :%d",larg);
	
}



