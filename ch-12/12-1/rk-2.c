#include<stdio.h>

main()
{
	int n;
	printf("enter the array size:");
	scanf("%d",&n);
	
	int a[n],b[n],c[n],d[n],i,j;
	
	printf("enter the array elements:\n");
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]:",i);
		scanf("%d",&a[i]);		
	}	
	printf("\n");
	
	printf("enter the array elements:\n");
	
	for(i=0;i<n;i++)
	{
		printf("b[%d]:",i);
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		c[i] = a[i]+b[i];
	}
	
	printf("array c:");
	
	for(i=0;i<n;i++)
	{
		printf("%d\t",c[i]);
	}
	printf("\n");
}
