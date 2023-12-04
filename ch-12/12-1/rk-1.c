#include<stdio.h>

main()
{
	int size;
	printf("enter array size :");
	scanf("%d",&size);
	printf("enter element size :\n");
	
	int i,a[size];
	for(i=0;i<size;i++)
	{
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("lenth of an array : %d",size);
	
}
