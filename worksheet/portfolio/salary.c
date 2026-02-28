
#include <stdio.h>

/*
 * Potrfolio submission
 * Name:Noah Leach
 * ID:20229280
 */

 int main( void ) {

    // define and initialise variables for the problem data 
   float salary = 36250;
   float ni_rate = 0.08;
   float tax_rate = 0.15;
    // calculate the deductions and final take-home salary
   float ni_deducted = salary - salary * ni_rate;
   float tax_cont = (ni_deducted - 12500) * tax_rate;
   float take_home = ni_deducted - tax_cont;
    // Use only these print statement with appropriate formatting and variable names
    //printf("Salary £...",var_name);
    //printf("NI contribution £...",var_name);
    //printf("Tax contribution £...",var_name);
    //printf("Take home salary £...",var_name);
    printf("Salary £%.2f\n", salary);
    printf("Tax contribution £%.2f\n", tax_cont);
    printf("Take home salary £%.2f \n", take_home);
    return 0;
 }