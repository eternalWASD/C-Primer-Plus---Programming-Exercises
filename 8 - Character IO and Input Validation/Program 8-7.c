/* Modify Programming Exercise 8 from Chapter 7 so that the menu choices are labeled by 
characters instead of by numbers; use q instead of 5 as the cue to terminate input. */


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

faq();

int main(void)
{
	double payment = 0.0;
	double hours = 0.0;
	double taxes = 0.0;
	char choice;
	double chosen_rate = 0.0;

	faq();

	while ((scanf("%c", &choice)) == 1)
	{
		if ((choice >= 'a') && (choice < 'q'))
		{
			switch (choice)
			{
			case 'a':
				chosen_rate = RATE1;
				break;
			case 'b':
				chosen_rate = RATE2;
				break;
			case 'c':
				chosen_rate = RATE3;
				break;
			case 'd':
				chosen_rate = RATE4;
				break;
			}
		}
		else if (choice == 'q')
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
		}
	}


}

faq()
{
	printf("*****************************************************************\n");
	printf("Enter the number corresponding to the desired pay rate or action:\n");
	printf("a) $8.75/hr\t\t b) $9.33/hr\n");
	printf("c) $10.00/hr\t\t d) $11.20/hr\n");
	printf("q) quit\n");
	printf("*****************************************************************\n");
}