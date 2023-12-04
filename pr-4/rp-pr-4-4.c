#include<stdio.h>
#include<conio.h>
main()
{
	int i,a,s;
	clrscr();

		for(i=5;i>=i;i--)
	{
		for(s=i;s>=1;s--)
		{
			printf(" ");
		}
		for(a=i;a<=1;a++)
		{
			printf("%d",a);
		}
		for(a=4;a>=i;a--)
		{
			printf("%d",a);
		}
		printf("/n");
	}
		for(i=1;i<=5;i++)
	{
		for(s=1;s<=5-1;s++)
		{
			printf(" ");
		}
		for(a=i;a<=4;a++)
		{
			printf("%d",a);
		}
		for(a=i;a<=4;a++)
		{
			printf("%d",a);
		}
		printf("/n");
	}
	getch();
}
