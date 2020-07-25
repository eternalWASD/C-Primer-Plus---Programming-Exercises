#include <stdio.h>

#define ARTICHOKES 2.05
#define BEETS 1.15
#define CARROTS 1.09
#define DISCOUNT 0.05
#define DISCOUNTMINSUM 100
#define CHARGE5PUNDER 6.50
#define CHARGE5POVER20UNDER 14.00
#define CHARGE20POVER 14.00
#define CHARGEPERPOUND 0.50

faq();

int main(void)
{
	float charge, total, discount, grand_total, artichokes_cost, beets_cost, carrots_cost;
	int total_number, artichokes, beets, carrots, current, exceeds;
	charge = total = discount = grand_total = artichokes_cost = beets_cost = carrots_cost = 0.0;
	total_number = artichokes = beets = carrots = current = exceeds = 0;

	faq();

	while ((scanf("%d", &current)) == 1)
	{
		if ((current > 0) && (current < 5))
		{
			switch (current)
			{
			case 1:
				printf("Enter the desired amount of arthichokes: ");
				scanf("%d", &artichokes);
				break;
			case 2:
				printf("Enter the desired amount of beets: ");
				scanf("%d", &beets);
				break;
			case 3:
				printf("Enter the desired amount of carrots: ");
				scanf("%d", &carrots);
				break;
			case 4:
				total_number = artichokes + beets + carrots;
				artichokes_cost = artichokes * ARTICHOKES;
				beets_cost = beets * BEETS;
				carrots_cost = carrots * CARROTS;
				total = artichokes_cost + beets_cost + carrots_cost;
				if(total > 100);
					discount = total * DISCOUNT;
				if ((total_number > 0) && (total_number < 5))
					charge = CHARGE5PUNDER;
				else if ((total_number > 5) && (total_number < 20))
					charge = CHARGE5POVER20UNDER;
				else if (total_number > 20)
				{
					exceeds = total_number - 20;
					charge = CHARGE20POVER + (exceeds * CHARGEPERPOUND);
				}
				else
					printf("Pick some goods first\n\n");
				grand_total = total - discount + charge;
				printf("You have ordered %d pounds of artichokes\n", artichokes);
				printf("Total cost of artichokes is: %.2f\n", artichokes_cost);
				printf("You have ordered %d pounds of beets\n", beets);
				printf("Total cost of beets is: %.2f\n", beets_cost);
				printf("You have ordered %d pounds of carrots\n", carrots);
				printf("Total cost of carrots is: %.2f\n", carrots_cost);
				printf("Your total order is %d pounds of vegetables\n", total_number);
				printf("Your total is: %.2f\n\n", total);
				printf("Your discount is %.2f\n", discount);
				printf("The shipping charge is: %.2f\n", charge);
				printf("Your grand total is: %.2f\n\n", grand_total);
				break;
			}
		}
		else if (current == 5)
			break;
		else
		{
			printf("\n");
			faq();
			continue;
		}

		

		

		faq();
	}
}

faq()
{
	printf("*****************************************************************\n");
	printf("Enter the number corresponding to the desired tax category:\n");
	printf("1) Artichokes\t 2) Beets\n");
	printf("3) Carrots\t 4) Calculate\n");
	printf("5) QUIT\n");
	printf("*****************************************************************\n");
}