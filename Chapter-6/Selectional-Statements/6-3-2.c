#include <stdio.h>
#include <conio.h>
#define p printf
#define s scanf

main()
{
	int choice;
	clrscr();
	p("1) For English language \t: \n");
	p("2) For Hindi language \t\t:\n");
	p("3) For Gujrati language \t:\n");
	p("\nChoose The One language \t:");
	s("%d", &choice);
	switch (choice)
	{

	case 1:

		p("\n1) For Internet Recharge \t:\n ");
		p("2) For Top-up Recharge \t:\n ");
		p("3) For Special Recharge \t:\n");
		p("\nChoose Your Choice : ");
		s("%d", &choice);
		switch (choice)
		{
		case 1:
			p("\nYou've sucessfully done Internet Recharge \n");
			break;
		case 2:
			p("\nYou've sucessfully done Top-up Recharge \n");

			break;

		case 3:
			p("\nYou've sucessfully done Special Recharge \n");
			break;
		}
		break;
	case 2:

		p("\n1) Internet Recharge ke liye dabaye \t:\n ");
		p("2) Top-up Recharge ke liye dabaye \t:\n ");
		p("3) Special Recharge ke liye dabaye \t:\n");
		p("\n Choose Your Choice: ");
		s("%d", &choice);
		switch (choice)
		{
		case 1:

			p("\nAapne safaltapurvak Internet Recharge kar liya he\n");
			break;
		case 2:
			p("\nAapne safaltapurvak Top-up Recharge kar liya he \n");

			break;
		case 3:
			p("\nAapne safaltapurvak Special Recharge kar liya he \n");
			break;
		}
		break;
	case 3:

		p("\n1) Internet Recharge mate dabavo \t:\n ");
		p("2) Top-up Recharge mate dabavo \t:\n ");
		p("3) Special Recharge mate dabavo \t:\n");
		p("\n Choose Your Choice: ");
		s("%d", &choice);
		switch (choice)
		{
		case 1:

			p("\nTame safaltapurvak Internet Recharge karyu chhe \n");
			break;
		case 2:
			p("\nTame safaltapurvak Top-up Recharge karyu chhe \n");

			break;
		case 3:
			p("\nTame safaltapurvak Special Recharge karyu chhe \n");
			break;
		}
		break;
	}

	getch();
}
