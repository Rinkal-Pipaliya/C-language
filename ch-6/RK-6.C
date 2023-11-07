#include<stdio.h>
#include<conio.h>
main()
{
       int a,b;
       clrscr();

       printf("enter your first num:");
       scanf("%d",&a);
       printf("enter your second num:");
       scanf("%d",&b);

       if(a>b)
       {
	printf("the minimum num is %d",a);
       }
       else
       {
       printf("the mexmimum num is %d",b);
       }
       getch();

}
