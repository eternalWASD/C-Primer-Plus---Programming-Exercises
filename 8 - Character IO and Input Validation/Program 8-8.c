/* Write a program that shows you a menu offering you the choice of addition, subtraction, 
multiplication, or division. After getting your choice, the program asks for two numbers, 
then performs the requested operation. The program should accept only the offered 
menu choices. It should use type float for the numbers and allow the user to try again 
if he or she fails to enter a number. In the case of division, the program should prompt 
the user to enter a new value if 0 is entered as the value for the second number. A typical 
program run should look like this: 
 Enter the operation of your choice:
 a. add s. subtract
 m. multiply d. divide
 q. quit
a
 Enter first number: 22 .4
 Enter second number: one
 one is not an number.
 Please enter a number, such as 2.5, -1.78E8, or 3: 1
 22.4 + 1 = 23.4
 Enter the operation of your choice:
 a. add s. subtract
 m. multiply d. divide
 q. quit
d
 Enter first number: 18.4
 Enter second number: 0
 Enter a number other than 0: 0.2
 18.4 / 0.2 = 92
 Enter the operation of your choice:
 a. add s. subtract
 m. multiply d. divide
 q. quit
q
 Bye.*/


#include <stdio.h>

void faq(void);

int main(void)
{
	char choice;
	float num1, num2;
	num1 = num2 = 0.0;

	faq();

	while ((scanf("%c", &choice)) == 1)
	{	
		if ((choice == 'a') || (choice == 's') || (choice == 'm') || (choice == 'd'))
		{

			printf("Enter first number: ");
			scanf("%f", &num1);
			printf("Enter second number: ");
			scanf("%f", &num2);

			switch (choice)
			{
			case 'a':
				printf("Sum of your numbers is: %.2f\n", num1 + num2);
				break;
			case 's':
				printf("Difference of your numbers is: %.2f\n", num1 - num2);
				break;
			case 'm':
				printf("Product of your numbers is: %.2f\n", num1 * num2);
				break;
			case 'd':
				if (num2 == 0)
				{
					printf("Second number is 0, choose another one: ");
					while ((scanf("%f", &num2) == 1) && (num2 == 0))
					{
						printf("I said greater than 0: ");
					}
				}
				printf("Divison of your numbers is: %.2f\n", num1 / num2);
				break;
			}
		}
		else if (choice == 'q')
			return 0;
		else
		{
			printf("\n");
			faq();
		}
		
		
	}
}

void faq(void)
{
	printf("Enter the operation of your choice:\n");
	printf("a. add\t\t s. subtract\n");
	printf("m. multiply\t d. divide\n");
	printf("q. quit\n");
	printf("\n");
}