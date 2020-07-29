/* Modify the get_first() function of Listing 8.8 so that 
it returns the first nonwhitespace character encountered. 
Test it in a simple program.*/



#include <stdio.h>
#include <string.h>

char get_first(void);


int main(void)
{
	char res;
	printf("Enter your non-whitespace character: ");
	res = get_first();
	printf("Your non-whitespace character is: %c", res);
}

 char get_first(void)
 {
	 char ch;
	 while ((isspace(ch = getchar())))
		 continue;
	 return ch;
 }
