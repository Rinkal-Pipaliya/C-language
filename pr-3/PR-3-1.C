#include<stdio.h>
#include<conio.h>
main()
{
	  char i='A',n='z';
	  clrscr();

	  do
	  {
		printf("%c\t\n",i);
		i+=4;
	  }while(i<='z');
	  getch();
}
