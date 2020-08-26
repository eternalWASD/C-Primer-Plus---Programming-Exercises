/* Gasoline consumption commonly is computed in miles per gallon in the U.S. and in 
liters per 100 kilometers in Europe. What follows is part of a program that asks the user 
to choose a mode (metric or U.S.) and then gathers data and computes fuel consumption.

If the user enters an incorrect mode, the program comments on that and uses the most 
recent mode. Supply a pe12-2a.h header file and a pe12-2a.c source code file to make 
this work. The source code file should define three file-scope, internal-linkage variables. 
One represents the mode, one represents the distance, and one represents the fuel 
consumed. The get_info() function prompts for data according to the mode setting 
and stores the responses in the file-scope variables. The show_info() function calculates 
and displays the fuel consumption based on the mode setting. You can assume the user 
responds with numeric input. */

#include <stdio.h>
#include "pe12-2a.h"
#include <stdlib.h>

static int mode;
static double distance ;
static double fuel_csmt;

void get_info();
void show_info();
void check_mode(); //Uses most recent mode if incorrect entered

int main(void)
{
    printf("Enter 0 for metric mode, 1 for US mode");
    printf(" (-1 to quit): ");
    scanf("%d", &mode);
    check_mode();
    
    while (mode >= 0)
    {
        get_info();
        show_info();
        printf("Enter 0 for metric mode, 1 for US mode");
        printf(" (-1 to quit): ");
        scanf("%d", &mode);
        check_mode();
    }
    printf("Done.\n");
    return 0;    
}

void get_info() 
{
    if (mode == 0)
    {   
        printf("Enter distance traveled in kilometers: ");
        scanf("%lf", &distance);
        printf("Enter fuel consumed in liters: ");
        scanf("%lf", &fuel_csmt);
    }
    else
    {
        printf("Enter distance traveled in miles: ");
        scanf("%lf", &distance);
        printf("Enter fuel consumed in gallons: ");
        scanf("%lf", &fuel_csmt);
    }
}

void show_info()
{
    if (mode == 0)
    {   
        printf("Fuel consumption is %.2lf for 100 km.\n", fuel_csmt / distance * 100);
        
    }
    else 
    {
        printf("Fuel consumption is %.2lf miles per gallon.\n", 
        distance / fuel_csmt);
    } 
}

void check_mode()
{
    if (mode < 0 && mode != -1)
    {
        mode = 0;
        puts("Wrong choice, using mode 0\n");
    }
    else if (mode == -1)
        exit(1);
    else
    {
        mode = 1;
        puts("Wrong choice, using mode 1\n");
    }
}