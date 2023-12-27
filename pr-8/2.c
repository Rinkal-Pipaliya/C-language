#include<stdio.h>

void cube(int *ptr)
{
	*ptr = (*ptr)*(*ptr)*(*ptr);
}
int main()
{
	int size;
	printf("Enter the size:");
	scanf("%d",&size);
	
	int a[size][size],i,j;
	printf("Enter the array element:\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nCubes of all elements:\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			cube(&a[i][j]);
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
