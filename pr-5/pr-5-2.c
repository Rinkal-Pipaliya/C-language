#include<stdio.h>

main()
{
	int n;
	
	printf("enter the row:");
	scanf("%d",&n);
	
	int a[n],i;
	
	printf("enter the negativ number :\n");
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
		
	}
	
	for(i=0;i<ni++)
	{
		if(a[i] < 0)
		{
			printf("%d",a[i]);
		}
	}
}


