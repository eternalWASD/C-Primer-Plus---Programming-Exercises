/* Redesign the program described in Programming Exercise 2 so that it uses only automatic 
variables. Have the program offer the same user interface—that is, it should prompt the 
user to enter a mode, and so on. You’ll have to come up with a different set of function 
calls, however. */

#include <stdio.h>
#include "pe12-3a.h"
#include <stdlib.h>

void get_info(int *mode, double *distance, double *fuel_csmt);
void show_info(int *mode, double *distance, double *fuel_csmt);
void check_mode(int *mode); //Uses most recent mode if incorrect entered

int main(void)
{
    int mode;
    double distance ;
    double fuel_csmt;

    printf("Enter 0 for metric mode, 1 for US mode");
    printf(" (-1 to quit): ");
    scanf("%d", &mode);
    check_mode(&mode);
    
    while (mode >= 0)
    {
        get_info(&mode, &distance, &fuel_csmt);
        show_info(&mode, &distance, &fuel_csmt);
        printf("Enter 0 for metric mode, 1 for US mode");
        printf(" (-1 to quit): ");
        scanf("%d", &mode);
        check_mode(&mode);
    }
    printf("Done.\n");
    return 0;    
}

void get_info(int *mode, double *distance, double *fuel_csmt) 
{
    if (*mode == 0)
    {   
        printf("Enter distance traveled in kilometers: ");
        scanf("%lf", distance);
        printf("Enter fuel consumed in liters: ");
        scanf("%lf", fuel_csmt);
    }
    else
    {
        printf("Enter distance traveled in miles: ");
        scanf("%lf", distance);
        printf("Enter fuel consumed in gallons: ");
        scanf("%lf", fuel_csmt);
    }
}

void show_info(int *mode, double *distance, double *fuel_csmt)
{
    if (*mode == 0)
    {   
        printf("Fuel consumption is %.2lf for 100 km.\n", *fuel_csmt / *distance * 100);
        
    }
    else 
    {
        printf("Fuel consumption is %.2lf miles per gallon.\n", 
        *distance / *fuel_csmt);
    } 
}

void check_mode(int *mode)
{
    if (*mode < 0 && *mode != -1)
    {
        *mode = 0;
        puts("Wrong choice, using mode 0\n");
    }
    else if (*mode == -1)
        exit(1);
    else
    {
        *mode = 1;
        puts("Wrong choice, using mode 1\n");
    }
}