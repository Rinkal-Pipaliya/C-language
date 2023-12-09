#include<stdio.h>

main()

{
	int r,c;
	
	printf("enter the row:");
	scanf("%d",&r);
	printf("enter the column:");
	scanf("%d",&c);
	
	int matrix[r][c],i,j;	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] :",i,j);
			scanf("%d",&matrix[i][j]);
		}
	}
	
	int total = 0;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			total += matrix[i][j];
		}
	}
	
	float ave=(float)total/(r*c);
	
	printf("average of any array :%.2f\n",ave);

}
