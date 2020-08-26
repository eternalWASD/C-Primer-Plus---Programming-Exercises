/* This header file provides function prototypes 
for Program 12-2 from C Primer Plus by Stephen Prata */

extern void get_info(int *mode, double *distance, double *fuel_csmt);
/* Reads the distance traveled and fuel consumed */

extern void show_info(int *mode, double *distance, double *fuel_csmt);
/* Counts the fuel consumption for desired mode */

extern void check_mode(int *mode);
/* Uses most recent mode if incorrect entered */