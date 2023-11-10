#include<stdio.h>
#include<conio.h>
main()
{
     int a;
     float b;
     clrscr();
     printf("enter your bill charge:");
     scanf("%d",&a);

     if(a>=0 && a<=50)
     {
	printf("enter bill charge%.2f",(a*0.5));
     }
     else if(a>=50 && a<=150)
     {
	printf("enter bill charge %.2f",(50*0.5)+(a*0.5)*0.75);
     }
     else if(a>=150 && a>=250)
     {
	printf("enter bill charge %.2f",(a*1.20)+(100*1.20)+(100*0.75));
     }
     else
     {
	printf("enter bill charge %.2f",(50*0.5)+((a-250)*1.5));
     }
     getch();
}