#include<stdio.h>
#include<conio.h>
main()
{
	int i,a,s;
	clrscr();

	for(i=1;i<=5;i++)
	{
		for(a=1;a<=i;a++)
		{
			printf("%d",a);
		}
		for(s=1;s<=5-i;s++)
		{
			printf(" ");
		}
		for(a=i;a>=1;a--)
		{
			printf("%d",a);
		}
		printf("/n");
	}
		for(i=4;i>=1;i--)
	{
		for(a=1;a<=i;a++)
		{
			printf("%d",a);
		}
		for(s=1;s=space;s++)
		{
			printf(" ");
		}
		space++;
		for(a=i;a>=1;a--)
		{
			printf("%d",a);
		}
		printf("/n");
	}
	getch();


}
