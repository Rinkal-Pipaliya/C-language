
#include<stdio.h>
#include<conio.h>

main()
{
	int i,j,count=0,n;
	clrscr();
	printf("enter n:");
	scanf("%d",&n);

	for(j=1;j<=n;j++)
	{
		count=0;

		for(i=2;i<=j/2;i++)
		{
			if(j%i==0)
			{
				count++;
				break;
			}
		}
		if(count==0 && j!=0)
			printf("%d\t",j);
	}
	getch();

}