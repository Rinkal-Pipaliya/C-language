#include<stdio.h>

void main()
{
	int n,i;
	printf("enter array size : ");
	scanf("%d",&n);
	
	int a[n],b[n];
	
	for(i=0;i<n;i++){
		printf("enter a[%d]: ",i);
		scanf("%d",&a[i]);
		printf("enter b[%d]: ",i);
		scanf("%d",&b[i]);
	}
	
	for(i=0;i<n;i++){
		printf("a[%d] : %d",i,a[i]);
		printf("b[%d] : %d",i,b[i]);
	}
	
	for(i=0;i<n;i++){
		a[i]=a[i]+b[i];
		b[i]=a[i]-b[i];
		a[i]=a[i]-b[i];
	}
	
	printf("a[%d]: %d",i,a[i]);
	printf("b[%d]: %d",i,b[i]);
}

