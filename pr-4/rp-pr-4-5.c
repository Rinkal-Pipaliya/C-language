#include<stdio.h>
#include<conio.h>
main()
{
	int i,a;
	clrscr();

	for(i=1;i<=9;i++)
	{
		for(a=1;a<=9;a++)
		{
			if((a==5 )&&(i>=1 && i<=9 ) ) ||
			    ((a==1 || a==9)&&(i==5))  ||
			    ((a==2 || a==8)&& (i>=4 && i<=6)) ||
			    ((a==3 || a==7)&& (i>=3 && i<=7)) ||
			    ((a==4 || a==6)&& (i>=2 && i<=8)) ||
			  )
		}
		printf("* ");

	}
	getch();
}
