/* Write a program that requests the hours worked in a week and then prints the gross pay, 
the taxes, and the net pay. Assume the following: 
a. Basic pay rate = $10.00/hr 
b. Overtime (in excess of 40 hours) = time and a half 
c. Tax rate: #15% of the first $300 
20% of the next $150 
25% of the rest 
Use #define constants, and don’t worry if the example does not conform to current 
tax law. */


#include <stdio.h>

#define RATE 10.00
#define OVERTIME 1.5
#define OVERTIMEHOURS 40
#define TAXLIMIT1 300
#define TAXLIMIT1RATE 0.15
#define TAXLIMIT2 150
#define TAXLIMIT2RATE 0.20
#define TAXREST 0.25

int main(void)
{
	double payment = 0.0;
	double hours = 0.0;
	double taxes = 0.0;

	printf("Enter total number of hours: ");

	while ((scanf("%lf", &hours) == 1))
	{
		if (hours > OVERTIMEHOURS)
			payment = ((hours * RATE) * OVERTIME);
		else
			payment = (hours * RATE);

		printf("Your gross pay: %.1lf\n", payment);

		if ((payment >= TAXLIMIT1) && (payment < TAXLIMIT2))
			taxes = payment * TAXLIMIT1RATE;
		else if (payment == TAXLIMIT2)
			taxes = payment * (TAXLIMIT1RATE + TAXLIMIT2RATE);
		else if (payment > (TAXLIMIT1 + TAXLIMIT2))
			taxes = payment * (TAXLIMIT1RATE + TAXLIMIT2RATE + TAXREST);

		printf("Your tax: %.1lf\n", taxes);
		printf("Your net payment: %.1lf\n", payment -= taxes);
	}   
}