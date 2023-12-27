#include<stdio.h>

int main()
{
	int size;
	printf("Enter The array's size:'");
	scanf("%d",&size);
	
	int arr[size],i;
	
	printf("Enter Array's element:\n");
	
	for(i=0;i<size;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	printf("Square of each element:");
	for(i=0;i<size;i++)
	{
		printf("%d",*(arr + i)**(arr + i));
		if(i != size - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
