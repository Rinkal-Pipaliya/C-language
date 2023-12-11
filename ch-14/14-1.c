#include<stdio.h>

main()
{
	char k[20];
	int i;
	
	
	printf("enter the name : ");
	scanf("%s",k);
	
	for(i=0;i<20;i++)
	{
		if(k[i]>=65 && k[i]<=90)
		{
				k[i] +=32;			
		}
	}
	
	printf("charcter :%s",k);
		
}

