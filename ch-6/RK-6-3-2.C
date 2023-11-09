#include<stdio.h>
#include<conio.h>
main()
{       int a;
	clrscr();
	printf("choose leng.......\n");
	printf("1) english\n");
	printf("2) hindi\n");
	printf("3) gujrati\n");
	printf("enter your choice:");
	scanf("%d",&a);

	switch(a)
	{
		case 1:
			printf("\nfor internate recharge:");
			printf("2)for top up recharge:");
			printf("3)for spicial recharge:");
			printf("enter your choice:\n");
			scanf("%d",&a);

			switch(a)
			{
				case 1:
					printf("\n you successfully done internet recharge :");
					break;
				case 2:
					printf("\n you succassfully don top up recharge:");
					break;
				case 3:
					printf("\n you successfully done spical recharge:");
					break;

			}
			break;

			case 2:
				printf("\m\m1)internet rcharge ke liye \n");
				printf("2)top up recharge ke liye \n");
				printf("3)spical recharg ke liye \n");
				scanf("%d",&a);

				switch(a)
				{
					case 1:
						printf("\n apne safaltapurvak internet recharge kar liya he :");
						break;
					case 2:
						printf("2)\n apne safaltapurvak top up recharge kar liya he :");
						break;
					case 3:
						printf("3)\n apne safaltapurvak spical recharge kar liya he :");
						break;

				}
				break;
				case 3:
					printf("\n1)internet na recharge mate:");
	}                               printf("\n2)top up na recharge mate:");
					printf("\n3)spical na recharge mate:");
					printf("enter your choice:");
					scanf("%d",&a);

					switch(a)
					{
						case 1:
							printf("\n 1)tamaru internet rcharge safaltapurvak thai gayu che:");
							break;
						case 2:
							printf("\n 1)tamaru top up rcharge safaltapurvak thai gayu che:");
							break;
						case 3:
							printf("\n 3)tamaru spical rcharge safaltapurvak thai gayu che:");
							break;
					}
					break;

	 getch();


}