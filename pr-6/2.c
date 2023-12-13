#include<stdio.h>

main()
{
	char n[20];
	int i,j,a;	
	printf("enter the string:");
	scanf("%s",n);
	

	
	for(i=0;n[i] !='\0';i++)
	{
		 int a=1;
		for(j=i+1;n[j] !='\0';j++)
		{
			if(n[i]==n[j])
			{
				a++;
			}
		}
		printf("%c: %d\n",n[i],a);
	}
	
	
}
