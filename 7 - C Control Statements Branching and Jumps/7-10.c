/* The 1988 United States Federal Tax Schedule was the simplest in recent times. It had 
four categories, and each category had two rates. Here is a summary (dollar amounts are 
taxable income): 
Category			Tax
Single				15% of first $17,850 plus 28% of excess
Head of Household	15% of first $23,900 plus 28% of excess
Married, Joint		15% of first $29,750 plus 28% of excess
Married, Separate	15% of first $14,875 plus 28% of excess
For example, a single wage earner with a taxable income of $20,000 owes 0.15 × $17,850 
+ 0.28 × ($20,000−$17,850). Write a program that lets the user specify the tax category 
and the taxable income and that then calculates the tax. Use a loop so that the user can 
enter several tax cases. */


#include <stdio.h>

#define TAX 0.15
#define EXCESS 0.28
#define SINGLE 17850
#define HOH 23900 
#define MARRIEDJ 29750
#define MARRIEDS 14875

faq();

int main(void)
{
	double tax = 0.0;
	double income = 0.0;
	double excess = 0.0;
	int choice = 0;
	int limit = 0;

	faq();

	while ((scanf("%d", &choice)) == 1)
	{
		if ((choice > 0) && (choice < 5))
		{
			switch (choice)
			{
			case 1:
				limit = SINGLE;
				break;
			case 2:
				limit = HOH;
				break;
			case 3:
				limit = MARRIEDJ;
				break;
			case 4:
				limit = MARRIEDS;
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

		printf("Enter your income: ");
		scanf("%lf", &income);

		excess = income - limit;
		tax = (0.15 * limit + 0.28 * (excess));
		printf("Your tax is: %.2lf\n\n", tax);
		faq();
	}
}

faq()
{
	printf("*****************************************************************\n");
	printf("Enter the number corresponding to the desired tax category:\n");
	printf("1) Single\t\t 2) Head of Household\n");
	printf("3) Married, Joint\t 4) Married, Separate\n");
	printf("5) quit\n");
	printf("*****************************************************************\n");
}