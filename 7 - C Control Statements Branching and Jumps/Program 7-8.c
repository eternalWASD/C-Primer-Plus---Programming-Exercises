/* Modify assumption a. in exercise 7 so that the program presents a menu of pay rates 
from which to choose. Use a switch to select the pay rate. The beginning of a run 
should look something like this: 
 *****************************************************************
 Enter the number corresponding to the desired pay rate or action:
 1) $8.75/hr 2) $9.33/hr
 3) $10.00/hr 4) $11.20/hr
 5) quit
 ***************************************************************** 
If choices 1 through 4 are selected, the program should request the hours worked. The 
program should recycle until 5 is entered. If something other than choices 1 through 5 
is entered, the program should remind the user what the proper choices are and then 
recycle. Use #defined constants for the various earning rates and tax rates. */


#include <stdio.h>

#define RATE1 8.75
#define RATE2 9.33
#define RATE3 10.00
#define RATE4 11.20
#define OVERTIME 1.5
#define OVERTIMEHOURS 40
#define TAXLIMIT1 300
#define TAXLIMIT1RATE 0.15
#define TAXLIMIT2 150
#define TAXLIMIT2RATE 0.20
#define TAXREST 0.25

void faq();

int main(void)
{
	double payment = 0.0;
	double hours = 0.0;
	double taxes = 0.0;
	int choice = 0;
	double chosen_rate = 0.0;

	faq();

	while ((scanf("%d", &choice)) == 1)
	{ 
		if ((choice > 0) && (choice < 5))
		{
			switch (choice)
			{
			case 1:
				chosen_rate = RATE1;
				break;
			case 2:
				chosen_rate = RATE2;
				break;
			case 3:
				chosen_rate = RATE3;
				break;
			case 4:
				chosen_rate = RATE4;
				break;
			}
		}
		else if (choice == 5)
			break;
		else
		{
			printf("\n");
			faq();
			continue;
		}
		
		printf("Enter hours worked: ");
		if ((scanf("%lf", &hours) == 1))
		{
			if (hours > OVERTIMEHOURS)
				payment = ((hours * chosen_rate) * OVERTIME);
			else
				payment = (hours * chosen_rate);
			if ((payment >= TAXLIMIT1) && (payment < TAXLIMIT2))
				taxes = payment * TAXLIMIT1RATE;
			else if (payment == TAXLIMIT2)
				taxes = payment * (TAXLIMIT1RATE + TAXLIMIT2RATE);
			else if (payment > (TAXLIMIT1 + TAXLIMIT2))
				taxes = payment * (TAXLIMIT1RATE + TAXLIMIT2RATE + TAXREST);

			printf("\n");
			printf("Your gross pay: %.1lf\n", payment);
			printf("Your tax: %.1lf\n", taxes);
			printf("Your net payment: %.1lf\n", payment -= taxes);
			printf("\n");
			faq();
		}
	}

	
}

void faq()
{
	printf("*****************************************************************\n");
	printf("Enter the number corresponding to the desired pay rate or action:\n");
	printf("1) $8.75/hr\t\t 2) $9.33/hr\n");
	printf("3) $10.00/hr\t\t 4) $11.20/hr\n");
	printf("5) quit\n");
	printf("*****************************************************************\n");
}